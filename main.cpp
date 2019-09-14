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

	char o = 0;
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
	cout << "\nYep ur matrix unit is " << u.ret() << endl;
	return 0;
}

void munit::make_n()
{
	pnum = num;
	num = 0-num;
}
