#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter 1st side of triangle:";
    cin>>n1; 
    cout<<"Enter 2nd side of triangle:";
    cin>>n2; 
    cout<<"Enter 3rd side of triangle:";
    cin>>n3; 
    if(n1+n2>n3 && n2+n3>n1 && n1+n3>n2)  //Condition for triangle
    cout<<"Triangle is possible";
    else  //if(n1+n2<=n3 || n2+n3<=n1 || n1+n3<=n2) Not a condition for triangle
    cout<<"Triangle not possible";
}