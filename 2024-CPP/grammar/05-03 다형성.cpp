#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	string name_;
	unsigned int age_;
	unsigned int leg_num_;

public:
	// 생성자
	Animal(string name, unsigned int age, unsigned int leg_num): name_(name), age_(age), leg_num_(leg_num) {}
	
	// 소멸자
	~Animal() { cout << "소멸자 호출" << endl; }

	// 멤버 함수
	void showName() { cout << name_ << endl; }
	void walk() { cout << "walk around" << endl; }
	void bark() { cout << "bark" << endl; }
	void eat() { cout << "eat something" << endl; }
};

// 상속
class Dog : Animal {
private:
	string sound_;
public:
	// 생성자
	Dog(string sound, string name, unsigned int age, unsigned leg_num) : Animal(name, age, leg_num), sound_(sound) {}
	void walk() { cout << "bark bark" << endl; }
};

void main(void) {
	// 동적 할당
	Animal* ani = new Animal("양", 18, 2);
	ani->walk();
	ani->eat();
	ani->bark();

	// 소멸자 호출
	delete ani;
}