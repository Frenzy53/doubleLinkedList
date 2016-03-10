#include<iostream>
#include<string>
using namespace std;
struct link{
	link * previousData;
	link * forwardData;
};
class data{
private:
	string name;
	string phoneNumber;
	int age;
	link goThrough;
public:
	data(string name, string phoneNumber, int age){
		this->name = name;
		this->phoneNumber = phoneNumber;
		this->age = age;
	}
	data(string name, string phoneNumber){
		this->name = name;
		this->phoneNumber = phoneNumber;
		age = 0;
	}
	data(string name){
		this->name = name;
		phoneNumber = "undefined";
		age = 0;
		}
	data(){
		name = "undefined";
		phoneNumber = "undefined";
		age = 0;
	}
	string getName();
	string getPhoneNumber();
	int getAge();
	void setName(string);
	void setPhoneNumber(string);
	void setAge(int);
	void setAll(string, string, int);
	void getInfo();
	~data(){
		name = "";
		age = 0;
		phoneNumber = "";
		
	}
};