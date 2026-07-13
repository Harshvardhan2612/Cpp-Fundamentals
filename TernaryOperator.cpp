//Ternary Operator
//Syntax: (condition) ? (if true) : (if false)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    (n%2==0) ? cout<<"The number "<<n<<" is even" : cout<<"The number "<<n<<" is odd";
    return 0;
}
