#include<iostream>

using namespace std;
int addTwoNumbers(int a, int b){

    return a+b;
}

void printHelloWorld(){     // 리턴값과 인수가 없는 함수
    std::cout<<"Hello world"<<endl;
}

int main() {

    cout << addTwoNumbers(1,2) << endl;
    cout << addTwoNumbers(3 , 4) << endl;
    cout << addTwoNumbers(8 ,13) << endl;
    printHelloWorld();

//    int sum = addTwoNumbers(1,2);
    int sum =addTwoNumbers(1,2);

    return 0;
}