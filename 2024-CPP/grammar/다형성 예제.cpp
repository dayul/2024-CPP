#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory) 
		: civil_(civil), force_(force), name_(name), territory_(territory) {}
	virtual ~Food() {}

	virtual void show() {
		cout << "국민 수 : " << civil_ << endl;
		cout << "군력 : " << force_ << endl;
		cout << "이름 : " << name_ << endl;
		cout << "면적 : " << territory_ << endl;
	}

private:
	int civil_;			// 국민 수
	int force_;			// 군력
	string name_;		// 이름
	int territory_;		// 땅 면적
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper) {}
	virtual ~Kimchi() {}

	void show() {
		Food::show();
		cout << "마늘 : " << garlic_ << endl;
		cout << "고추 : " << pepper_ << endl;
	}

private:
	int garlic_;
	int pepper_;
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar) 
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {}
	virtual ~Jelly() {}

	void show() {
		Food::show();
		cout << "젤라틴 : " << gelatin_ << endl;
		cout << "설탕 : " << sugar_ << endl;
	}

private:
	int gelatin_;
	int sugar_;
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {}
	virtual ~Cheese() {}

	void show() {
		Food::show();
		cout << "우유 : " << milk_ << endl;
		cout << "응고제 : " << rennet_ << endl;
	}

private:
	int milk_;
	int rennet_;
};

int main(void) {
	Food* player = new Kimchi(15, 95, "갓김치", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "짜계치", 100, 20, 100);

	while (true) {
		system("cls");

		cout << "(♥ ω ♥) 나" << endl;
		player->show();

		cout << endl << endl;
		cout << "(★ ω ★) 상대방" << endl;
		friends->show();

		int select;
		cout << "\n\n=====================" << endl;
		cout << "｡☆✼★ 아이템 선택 ★✼☆｡" << endl;
		cout << "=====================" << endl;
		cout << "  (1) 공격" << endl;
		cout << "  (2) 특수1" << endl;
		cout << "  (3) 특수2" << endl;
		cout << "  (4) 방어" << endl;
		cout << "=====================" << endl;
		cout << ">> ";
		cin >> select;
		

		switch (select) {
		case 1:
			// TODO : 공격
			cout << "공격" << endl;
			break;
		case 2:
			// TODO : 특수1
			cout << "특수1" << endl;
			break;
		case 3:
			// TODO : 특수2
			cout << "특수2" << endl;
			break;
		case 4:
			// TODO : 방어
			cout << "방어" << endl;
			break;

		default:
			cout << "잘못된 번호를 입력하셨습니다. 다시 입력하세요." << endl;
		}

		system("pause");
	}

	delete friends;
	delete player;
	return 0;
}