

/*
#include <iostream>
using namespace std;

class Stud {
public :
	int No;
	int nai;
	void set() {
		No = 1;
		nai = 25;
	}
	void prn() {
		cout << "��ȣ : " << No << "\t" << "���� : " << nai << endl ;
	}
};
void main( ) {
	Stud ob1;
	ob1.set(); // ��ü�� ���� �� ��������� �ʱ�ȭ �� �Լ��� ������ ȣ����
	ob1.prn(); // �ʱ�ȭ�� ���� ��µȴ�.
}

/*
#include <iostream>
using namespace std;

class Stud {
public :
	int No;
	int nai;
	void prn() {
		cout << "��ȣ : " << No << "\t" << "���� : " << nai << endl ;
	}
};
void main( ) {
	Stud ob1 = { 1, 25 }; // ��������� public������ ���� ���� ���� �� �ִ�.
	ob1.prn(); // �ʱ�ȭ�� ���� ��µȴ�.
}

/*
#include <iostream>
using namespace std;

class Stud {
private :
	int No;
	int nai;
public :
	void prn() {
		cout << "��ȣ : " << No << "\t" << "���� : " << nai << endl ;
	}
};
void main( ) {
	Stud ob1 = {1, 25}; // ���� �߻� : ��������� private������ ���� ���� ���� �� ����.
	ob1.prn();
}

/*
#include <iostream>
using namespace std;

class Point {
	int xp, yp;
public :
	void setpt(int x, int y) { xp = x, yp = y; }
	void offset(int x, int y) {xp += x, yp +=y; }
	int get_x() { return xp; }
	int get_y() { return yp; }
};
int main()
{
	Point p, *ptr; // Point �� ��ü ������ *ptr
	p.setpt(10, 20);
	ptr = &p;
	ptr->offset(100, 200);
	cout << "== ���� ���� ==\n";
	cout << "x ��ǥ : " << p.get_x()
		<< ", y ��ǥ : " << p.get_y() << endl;
	cout << "\n== ���� ���� ==\n";
	cout << "x ��ǥ : " << ptr->get_x()
		<< ", y ��ǥ : " << ptr->get_y() << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;

class Circle {
	int Radius;
public :
	void set(int R) { Radius = R; }
	double Area() { return (3.14 * Radius * Radius); }
};
int main()
{
	Circle Cir[5]; // ��ü �迭
	cout << "== ���� ���� ���ϱ� ==\n";
	for(int i=0; i<5; i++) {
		Cir[i].set(i+1);
		cout << "������(" << i+1 << ")=> " << Cir[i].Area() << endl;
	}
	return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

class String {
	char *str;
	int len;
public:
	void set(char *cp);
	void prn();
};
void String::set(char *cp) {
	len = strlen(cp);
	str = new char[len+1];
	strcpy(str, cp);
}
void String::prn() {
	cout << "���ڿ� : " << str << "(" << len << ")\n";
}
String input() {
	char text[80];
	String temp;
	cout << "Input String : ";
	cin >> text;
	temp.set(text);
	return temp;
}
int main()
{
	String str1;
	str1 = input();
	str1.prn();
	return 0;
}

/*
#include <iostream>
using namespace std;

class XY {
	int x, y;
public:
	void set_xy(int a, int b) { x = a, y = b; }
	int get_x() { return x; }
	int get_y() { return y; }
};
void swap(XY ob) {
	ob.set_xy(ob.get_y(), ob.get_x());
	cout << "== swap() ==\n";
	cout << "x = " << ob.get_x() << ", y = " << ob.get_y() << endl;
}
int main()
{
	XY ob;
	ob.set_xy(10, 20);
	swap(ob);
	cout << "\n== Main() ==\n";
	cout << "x = " << ob.get_x() << ", y = " << ob.get_y() << endl;
	return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

class String {
	char *str;
	int len;
public:
	void set(char *cp);
	void prn();
};
void String::set(char *cp) {
	len = strlen(cp);
	str = new char[len+1];
	strcpy(str, cp);
}
void String::prn() {
	cout << "���ڿ� : " << str
		<< "(" << len << ")" << endl;
}
int main()
{
	String str1, str2;
	str1.set("The first string");
	str2.set("This is the second string");
	str1.prn();
	str2.prn();
	cout << "\n==========================\n";
	str1 = str2; //��ü ����
	str1.prn();
	str2.prn();
	return 0;
}

/*
#include <iostream>
using namespace std;

class Date {
	int year, month, day;
public:
	void set_date(int y, int m, int d);
	int get_year() { return year; }
	int get_month() { return month; }
	int get_day() { return day; }
};
void Date::set_date(int m, int d, int y = 2005) {
	year = y;
	month = m;
	day = d;
}
int main()
{
	Date dt;
	dt.set_date(3, 25);
	cout << dt.get_year() << "."
		<< dt.get_month() << "."
		<< dt.get_day() << endl;
	dt.set_date(1, 1, 2000);
	cout << dt.get_year() << "."
		<< dt.get_month() << "."
		<< dt.get_day() << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;

class Circle {
	double Radius;
public :
	double Circle_Area();
};
double Circle::Circle_Area()
{
	Radius = 5.0;
	return (3.14 * 5.0 * 5.0);
}
int main()
{
	Circle Cir1;
	cout << "���� ������ " << Cir1.Circle_Area()
		<< "�Դϴ�" << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;

class Counter {
	int value;
public :
	void set(int n) { value = n; }
	void inc() {++value; }
	void dec() {--value; }
	int val() { return value; }
};
int main()
{
	Counter cnt1, cnt2;
	cnt1.set(10);
	cnt1.inc();
	cout << "cnt1 value : " << cnt1.val() << endl;
	cnt2.set(0);
	cnt2.dec();
	cout << "cnt2 value : " << cnt2.val() << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;
class Circle {
	double Radius;
public :
	double Circle_Area() {
		Radius = 5.0;
		return (3.14 * 5.0 * 5.0);
	}
};
int main()
{
	Circle Cir1;
	// Cir1.Radius = 6.0; ����
	cout << "���� ������ " << Cir1.Circle_Area()
		<< "�Դϴ�" << endl;
	return 0;
}
*/