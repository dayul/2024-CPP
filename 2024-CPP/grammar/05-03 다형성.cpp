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
	Animal(string name, unsigned int age, unsigned int leg_num): name_(name), age_(age), leg_num_(leg_num) {
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << age_ << endl;
		cout << "�ٸ� ���� : " << leg_num << endl;
	}
	
	// �Ҹ���
	~Animal() { cout << "Animal �Ҹ��� ȣ��" << endl; }

	// ��� �Լ�
	// ���� ���ε� : virtual
	void showName() { cout << name_ << endl; }
	virtual void walk() { cout << "walk around" << endl; }
	virtual void bark() { cout << "bark" << endl; }
	virtual void eat() { cout << "eat something" << endl; }
};

// ���
// public�� ��� �ڽ� ��ü���� �θ��� �Լ��� ���� ����
class Dog : public Animal {
private:
	int loyalty_;
public:
	// ������
	Dog(string name, unsigned int age, unsigned leg_num, int loyalty) : Animal(name, age, leg_num), loyalty_(loyalty) {
		//this->sound_ = sound; �̰͵� ����
	}

	// �Ҹ���
	~Dog() { cout << "Dog �Ҹ��� ȣ��" << endl; }

	// �Ǽ��� �����ϱ� ���� override �ۼ� (�߸��� �Լ��� �ۼ� �� ������ ��)
	void walk() override { cout << "������" << endl; }
	void bark() override { cout << "�۸�" << endl; }
	void eat() override { cout << "�ͱ��ͱ�" << endl; }
};

void main(void) {
	// ���� ���ε����� ���� Dog �Ҹ��ڴ� ȣ���� �ȵ�
	Animal* ani = new Dog("����", 5, 4, 10);
	
	delete ani;
}