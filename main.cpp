// Hey, this is matrix calculator!
// Have a rest

#include <iostream>

using namespace std;

class munit
{
public:
	int ret() { return num; }
	munit(int unit)
	{
		num = unit;
		pnum = unit;
	}
	void make_n();
private:
	int num;
	int pnum;
};

class matrix;


int main()
{
    cout << "Hello User!\n"
	 << "input yo matrix unit: ";
	int n;
	cin >> n;
	munit u(n);
	cout << "\nYep ur matrix unit is " << u.ret() << endl;
	cout << "\nLet's get started!" << endl;
	//
	//Start UX

	//Making
	char o = 0;
	while (1)
	{
		int n = 0;
		int n1 = 0;
		cout << "Size of ur matrix is ";
		cin >> n;
		cout << 'x' << endl;
		cin >> n1;

		cout << endl;
	}

	//Operations
	o = 0;
	while (o != 'q')
	{
		cout << endl << "q to quit\nn to negative" << endl << "Operation: ";
		cin >> o;
		switch (o)
		{
		case 'n':
			u.make_n();
			break;
		default:
			break;
		}
	}
	//End UX
	//
	cout << "\nYep ur matrix unit is " << u.ret() << endl;
	cout << "\nCongretulations!!!" << endl << endl;
	cout << "Anime art( is missing((((" << endl;
	return 0;
}

void munit::make_n()
{
	pnum = num;
	num = 0-num;
}

//Until it's my max(((
