#include"prototypes.h"

int data::getAge(){
	return age;
}

string data::getName(){
	return name;
}

string data::getPhoneNumber(){
	return phoneNumber;
}

void data::setAge(int age){
	this->age = age;
}

void data::setName(string name){
	this->name = name;
}

void data::setPhoneNumber(string phoneNumber){
	this->phoneNumber = phoneNumber;
}

void data::setAll(string name, string phoneNumber, int age){
	this->age = age;
	this->name = name;
	this->phoneNumber = phoneNumber;
}
void data::getInfo(){
	cout << "Name: " << name << "\tPhone Number: " << phoneNumber << "\tAge: " << age << endl;
}