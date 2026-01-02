#include "laptop.h"

using namespace std;
int main()
{
	laptop a, b, c;
	a.setbrand("hp");
	a.setmodel("core i5");
	a.setserial(2345678876);
	a.setcolor("Grey");
	a.setprice(70000);
	a.setprocessorSpeed("3.0ghz");
	a.setRAM("16Gb");
	a.setscreenSize("18inches");

	cout << "Brand = " << a.getbrand() << endl;
	cout << "Model = " << a.getmodel() << endl;
	cout << "Serial No =" << a.getserial() << endl;
	cout << "Colour = " << a.getcolor() << endl;
	cout << "Price =  " << a.getprice() << endl;
	cout << "Processor Speed = " << a.getprocessorSpeed() << endl;
	cout << "RAM = " << a.getRAM() << endl;
	cout << "Screen Size = " << a.getscreenSize() << endl << endl << endl;

	c.setbrand("Dell");
	c.setmodel("core i3");
	c.setserial(345678887);
	c.setcolor("Red");
	c.setprice(60000);
	c.setprocessorSpeed("2.50ghz");
	c.setRAM("16Gb");
	c.setscreenSize("19inches");

	cout << "Brand = " << c.getbrand() << endl;
	cout << "Model = " << c.getmodel() << endl;
	cout << "Serial No =" << c.getserial() << endl;
	cout << "Colour = " << c.getcolor() << endl;
	cout << "Price =  " << c.getprice() << endl;
	cout << "Processor Speed = " << c.getprocessorSpeed() << endl;
	cout << "RAM = " << c.getRAM() << endl;
	cout << "Screen Size = " << c.getscreenSize() << endl << endl << endl;

	b.setbrand("hp");
	b.setmodel("core i5");
	b.setserial(38678797);
	b.setcolor("black");
	b.setprice(80000);
	b.setprocessorSpeed("3.0ghz");
	b.setRAM("8Gb");
	b.setscreenSize("19inches");

	cout<<"Brand = "<< b.getbrand() << endl;
	cout << "Model = " << b.getmodel() << endl;
	cout << "Serial No =" << b.getserial() << endl;
	cout << "Colour = " << b.getcolor() << endl;
	cout << "Price =  " << b.getprice() << endl;
	cout << "Processor Speed = " << b.getprocessorSpeed() << endl;
	cout << "RAM = " << b.getRAM() << endl;
	cout << "Screen Size = " << b.getscreenSize() << endl<<endl<<endl;
	return 0;
}