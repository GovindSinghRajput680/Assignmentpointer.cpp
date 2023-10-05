#include<iostream>
using namespace std;
int main(){//Q 1
    int a,b;
cout<<"Enter two numbers : ";
cin>>a>>b;
int* ptr1 = &a;
int *ptr2 = &b;
cout<<"Product of two given numbers = "<<(*ptr1)*(*ptr2);






}