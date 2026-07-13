//Program to find the greatest of three numbers

#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter 1st number:";
    cin>>n1;
    cout<<"enter 2nd number:";
    cin>>n2;
    cout<<"enter 3rd number:";
    cin>>n3;
    if(n1>n2 && n1>n3){
        cout<<n1<<" is the greatest number";}
    else if(n2>n1 && n2>n3){
        cout<<n2<<" is the greatest number";}
    else{
        cout<<n3<<" is the greatest number";}
}