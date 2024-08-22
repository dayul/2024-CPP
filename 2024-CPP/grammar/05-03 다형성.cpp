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
	~Animal() { cout << "Animal 소멸자 호출" << endl; }

	// 멤버 함수
	// 동적 바인딩 : virtual
	void showName() { cout << name_ << endl; }
	virtual void walk() { cout << "walk around" << endl; }
	virtual void bark() { cout << "bark" << endl; }
	virtual void eat() { cout << "eat something" << endl; }
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

	// 소멸자
	~Dog() { cout << "Dog 소멸자 호출" << endl; }

	// 실수를 방지하기 위해 override 작성 (잘못된 함수명 작성 시 에러를 냄)
	void walk() override { cout << "촙촙촙" << endl; }
	void bark() override { cout << "멍멍" << endl; }
	void eat() override { cout << "와구와구" << endl; }
};

void main(void) {
	// 정적 바인딩으로 인해 Dog 소멸자는 호출이 안됨
	Animal* ani = new Dog("마루", 5, 4, 10);
	
	delete ani;
}