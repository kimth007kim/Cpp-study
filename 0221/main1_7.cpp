#include<iostream>

using namespace std;

int main() {
    int x=0;

    cout<<x<<" "<< &x <<endl;
    {               //영역을 구분하기 위해서 사용하는 중괄
        int x=0;

        cout<<x<<" "<< &x <<endl;

    }
    {
        int x=2;
    }
    cout<<x<<" "<< &x <<endl;
    return 0;
}