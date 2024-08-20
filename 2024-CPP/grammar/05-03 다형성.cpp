#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	string name_;
	unsigned int age_;
	unsigned int leg_num_;

public:
	// ������
	Animal(string name, unsigned int age, unsigned int leg_num): name_(name), age_(age), leg_num_(leg_num) {}
	
	// �Ҹ���
	~Animal() { cout << "�Ҹ��� ȣ��" << endl; }

	// ��� �Լ�
	void showName() { cout << name_ << endl; }
	void walk() { cout << "walk around" << endl; }
	void bark() { cout << "bark" << endl; }
	void eat() { cout << "eat something" << endl; }
};

// ���
class Dog : Animal {
private:
	string sound_;
public:
	// ������
	Dog(string sound, string name, unsigned int age, unsigned leg_num) : Animal(name, age, leg_num), sound_(sound) {}
	void walk() { cout << "bark bark" << endl; }
};

void main(void) {
	// ���� �Ҵ�
	Animal* ani = new Animal("��", 18, 2);
	ani->walk();
	ani->eat();
	ani->bark();

	// �Ҹ��� ȣ��
	delete ani;
}