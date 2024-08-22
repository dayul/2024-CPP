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
	Animal(string name, unsigned int age, unsigned int leg_num): name_(name), age_(age), leg_num_(leg_num) {
		cout << "이름 : " << name_ << endl;
		cout << "나이 : " << age_ << endl;
		cout << "다리 갯수 : " << leg_num << endl;
	}
	
	// 소멸자
	~Animal() { cout << "소멸자 호출" << endl; }

	// 멤버 함수
	void showName() { cout << name_ << endl; }
	void walk() { cout << "walk around" << endl; }
	void bark() { cout << "bark" << endl; }
	void eat() { cout << "eat something" << endl; }
};

// 상속
// public을 써야 자식 객체에서 부모의 함수에 접근 가능
class Dog : public Animal {
private:
	int loyalty_;
public:
	// 생성자
	Dog(string name, unsigned int age, unsigned leg_num, int loyalty) : Animal(name, age, leg_num), loyalty_(loyalty) {
		//this->sound_ = sound; 이것도 가능

	}
	// C++은 디폴트가 정적바인딩이기 때문에 가상함수로 오버라이딩 해야함
	void walk() { cout << "촙촙촙" << endl; }
	void bark() { cout << "멍멍" << endl; }
	void eat() { cout << "와구와구" << endl; }
};

void main(void) {
	// 동적 할당
	Animal* ani = new Animal("양", 18, 2);
	ani->walk();
	ani->eat();
	ani->bark();

	// 소멸자 호출 (heap영역에 객체만 지워짐, ani 변수는 함수 종료 시)
	delete ani;

	ani = new Dog("마루", 5, 4, 10);
	ani->walk();
	ani->eat();
	ani->bark();

	delete ani;
}