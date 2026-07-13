//Absolute Value of a number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;  //Taking Input
    if(n>=0)
    cout<<"The absolute value of the number is:"<<n;
    else
    cout<<"The absolute value of the number is:"<<(-n); 
}