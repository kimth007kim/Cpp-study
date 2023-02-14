#include<iostream>
#include<cstdio>

int main() {

    using namespace std;

    int x = 1024;
    double pi =3.141592;


    cout << "I love this lecture!\n\n\n" ;//<< std::endl;
    cout << "x is " << x << " pi is " <<pi<<endl;

    cout<<"abc"<<"\t"<<"def"<<endl;
    cout<<"ab"<<"\t"<<"cdef"<<endl;

    x=1;

    cout<< "Before your input x was "<<x<<endl;
    cin>>  x;

    cout<<"Your input is "<<x<< endl;

    return 0;
}
