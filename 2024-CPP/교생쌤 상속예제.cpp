#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    void PrintMethod() {
        cout << "부모 고양이" << endl;
    }
};

class Cat : public Animal {
public:
    void PrintMethod() {
        Animal::PrintMethod();
        cout << "자식 고양이" << endl;
    }

};
 
// `main` 함수 정의
int main() {
    // Cat 객체 생성
    Cat cat; 
    cat.PrintMethod();
    return 0;
}
