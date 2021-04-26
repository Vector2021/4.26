#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int* p ;
	char* q ;
	cout << sizeof(p) << endl;
	cout << sizeof(q) << endl;
}
//大小都是4；

class person {
public:
	person(int a, int b, int c) { x = a; y = b; z = c; }
private:
	int x;
	int y;
	int z;
};

class Student {
public:
	Student(char* _name, int _age, int _id) :name(_name), age(_age), id(_id) {  }
private:
	char name;
	int age;
	int id;
	void fun()
	{
		cout << name << endl;
	}
};




int main()
{
	Student s;
	s.name = 'L';
	s.fun();
}
class Base {
public:
	Base()
	{
	   	cout << "Base!" << endl;
	}
	virtual ~Base()
	{
		cout << "Base destructor!" << endl;
	}
};

class Derived : public Base {
public:
	Derived()
	{
		cout << "Derived!" << endl;
	}
	~Derived()
	{
		cout << "Derived destructor!" << endl;
	}
};

int main()
{
	Base* p = new Derived();
	delete p;
	return 0;
}
