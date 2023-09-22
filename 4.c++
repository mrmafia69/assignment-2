#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    cout<<"Before swaping!"<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;

    swap(&a,&b);

    cout<<"After swaping!"<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
return 0;
}