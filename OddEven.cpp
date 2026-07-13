#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;  //Taking Input
    if(n%2==0)  //Condition for even number
    cout<<"It is an even number";
    else  //if(n%2!=0) Condition for odd number
    cout<<"It is an odd number";
}