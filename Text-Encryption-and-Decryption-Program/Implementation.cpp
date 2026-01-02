#include "header.h"

// ---------------- NODE ----------------
node::node(char data)
{
    this->data = data;
    this->add = NULL;
}

char node::getdata()
{
    return data;
}

void node::setdata(char data)
{
    this->data = data;
}

node* node::getadd()
{
    return add;
}

void node::setadd(node* add)
{
    this->add = add;
}

// ---------------- STACK ----------------
stack::stack()
{
    top = NULL;
}

bool stack::isempty()
{
    return top == NULL;
}

void stack::push(char data)
{
    node* temp = new node(data);
    temp->setadd(top);
    top = temp;
}

char stack::pop()
{
    if (isempty())
    {
        return 0;
    }

    else
    {
        char value = top->getdata();
        node* temp = top;
        top = top->getadd();
        delete temp;
        return value;
    }

}


// ---------------- ENCRYPT ----------------
void Encrypt(string text, string key)
{
    key = keyExpansion(text, key);

    char* messageList = messageToList(text);

    messageList = shiftForward(messageList, key, text.length());

    stack* s = new stack();
    s = pushInStack(s, messageList, text.length());

    cout << "\nEncrypted Text: ";
    while (!s->isempty())
    {
        cout << s->pop();
    }

    delete[] messageList;
}

// ---------------- DECRYPT ----------------
void Decrypt(string text, string key)
{
    key = keyExpansion(text, key);

    char* messageList = messageToList(text);

    stack* s = new stack();
    s = pushInStack(s, messageList, text.length());

    char* reversed = new char[text.length()];
    for (int i = 0; i < text.length(); i++)
    {
        reversed[i] = s->pop();
    }


    reversed = shiftBackward(reversed, key, text.length());

    cout << "\nDecrypted Text: ";
    for (int i = 0; i < text.length(); i++)
    {
        cout << reversed[i];
    }

    delete[] messageList;
    delete[] reversed;
}



// ---------------- KEY EXPANSION ----------------
string keyExpansion(string text, string key)
{
    while (key.length() < text.length())
    {
        key = key + key;
    }
    key= key.substr(0, text.length());
    return key;
}

// ---------------- TEXT TO ARRAY ----------------
char* messageToList(string text)
{
    char* temp = new char[text.length()];
    for (int i = 0; i < text.length(); i++)
    {
        temp[i] = text[i];
    }
    return temp;
}

// ---------------- SHIFT FUNCTIONS ----------------
char* shiftForward(char* messageList, string key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (messageList[i] != ' ')
        {
            messageList[i] = messageList[i] + (key[i] - 'a');
        }
    }
    return messageList;
}

char* shiftBackward(char* messageList, string key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (messageList[i] != ' ')
        {
            messageList[i] = messageList[i] - (key[i] - 'a');
        }
    }
    return messageList;
}

// ---------------- PUSH IN STACK ----------------
stack* pushInStack(stack* s, char* messageList, int size)
{
    for (int i = 0; i < size; i++)
    {
        s->push(messageList[i]);
    }
    return s;
}