#include <iostream>
using namespace std;

// 열거형 enum 정의
enum FoodStyle {
	KOREAN_FOOD,		// 0 (0은 default, 값을 주고 싶으면 KOREAN = 0으로, 2부터 설정하면 234)
	JAPANESE_FOOD,		// 1
	CHINESE_FOOD		// 2
};

int main(void) {

	// 열거형 사용 시, 가독성이 좋아지고 중간에 값을 유연하게 추가할 수 있음
	int style = FoodStyle::KOREAN_FOOD;

	switch (style) {
	case KOREAN_FOOD:
		cout << "김치, 쌈, 비빔밥" << endl;
		break;

	case JAPANESE_FOOD:
		cout << "초밥, 우동, 타코야끼" << endl;
		break;

	case CHINESE_FOOD:
		cout << "동파육, 마라탕, 탕후루" << endl;
		break;
	}

	return 0;
}