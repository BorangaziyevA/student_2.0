#pragma once
#include<iostream>

using namespace std;

class student_
{
private:
	char *name;
	int age;
	int grade[10];
public:
	student_(const char *name,int age)
	{
		this->name = new char[strlen(name)+1];
		strcpy_s(this->name, strlen(name) + 1, name);
		this->age = age;
		for (size_t i = 0; i < 10; i++)
			this->grade[i] = 12;
	}
	student_(const student_ & obj)
	{
		this->name = new char[strlen(obj.name) + 1];
		strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
		this->age = obj.age;
		for (size_t i = 0; i < 10; i++)
		{
			this->grade[i] = obj.grade[i];
		}
	}

	~student_()
	{
		delete[] name;
	}

	void info()
	{
		cout << this->name << " " << this->age << endl<< "Grades:"<<endl;
		for (size_t i = 0; i < 10; i++)
		{
			cout << this->grade[i] << " ";
		}
		cout << endl;
	}

};