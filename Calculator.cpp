#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter first number:";
    cin>>n1;
    char op;
    cout<<"Enter operator (+, -, *, /):";
    cin>>op;
    int n2;
    cout<<"Enter second number:";
    cin>>n2;
    
    if(op=='+'){
        cout<<"The sum of "<<n1<<" and "<<n2<<" is "<<n1+n2;
    }
    else if(op=='-'){
        cout<<"The difference of "<<n1<<" and "<<n2<<" is "<<n1-n2;
    }
    else if(op=='*'){
        cout<<"The product of "<<n1<<" and "<<n2<<" is "<<n1*n2;
    }
    else if(op=='/'){
        if(n2!=0){
            cout<<"The quotient of "<<n1<<" and "<<n2<<" is "<<n1/n2;
        }
        else{
            cout<<"Division by zero is not allowed.";
        }
    }
    else{
        cout<<"Invalid operator.";
    }
    return 0;
}   