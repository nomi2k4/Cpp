#include"car.h"
#include"book.h"
#include"product.h"
#include"account.h"

int main() 
{
    // Car
    Car c("Toyota", "Camry", 2022, "Silver");
    cout << "--- Car Information ---" << endl;
    c.displayInfo();
    c.setColor("Blue");
    cout << "\n--- Modified Car Information ---" << endl;
    c.displayInfo();

    // Book
    Book b("Abc", "Nomi", "234567", 224);
    cout << "\n\n\n--- Book Information ---" << endl;
    b.displayInfo();
    b.setPageCount(225);
    cout << "\n--- Modified Book Information ---"  << endl;
    b.displayInfo();

    // Product
    Product p("Laptop", 1200.00, 10, "Electronics");
    cout << "\n\n\n--- Product Information ---" << endl;
    p.displayInfo();
    p.setPrice(1150.00);
    cout << "\n--- Modified Product Information ---"  << endl;
    p.displayInfo();

    // Bank Account
    BankAccount a("1234567890", "Nomi", 5000.00, "Savings");
    cout << "\n\n\n--- Bank Account Information ---" << endl;
    a.displayInfo();
    a.setBalance(5500.00);
    cout << "\n--- Modified Bank Account Information ---"  << endl;
    a.displayInfo();

    return 0;
}