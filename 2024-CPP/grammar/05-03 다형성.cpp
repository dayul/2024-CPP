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
	virtual ~Animal() { cout << "Animal �Ҹ��� ȣ��" << endl; }

	// ��� �Լ�
	// ���� ���ε� : virtual
	void showName() { cout << name_ << endl; }

	// ���� ���� �Լ�(�߻� �޼���)
	virtual void walk() = 0;
	virtual void bark() = 0;
	virtual void eat() = 0;
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
	virtual ~Dog() { cout << "Dog �Ҹ��� ȣ��" << endl; }

	// �Ǽ��� �����ϱ� ���� override �ۼ� (�߸��� �Լ��� �ۼ� �� ������ ��)
	void walk() override { cout << "������" << endl; }
	void bark() override { cout << "�۸�" << endl; }
	void eat() override { cout << "�ͱ��ͱ�" << endl; }
};

void main(void) {
	// �ڽ� �Ҹ��ڰ� ���� ȣ��
	// Animal ani2 = Animal("����", 5, 4);		// �߻� Ŭ������ ��ü�� ������ �� ���� (new Animal() �Ұ�)
	Animal* ani = new Dog("����", 5, 4, 10);
	ani->bark();
	
	delete ani;
}