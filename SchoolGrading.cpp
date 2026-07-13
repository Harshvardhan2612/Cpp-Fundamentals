// Marks    Remarks  
// 81-100   Very Good
// 61-80    Good
// 41-60    Average
// <=40     Fail

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks in percentage:";
    cin>>marks;
    if(marks>=81 && marks<+100){
        cout<<"Very Good";}
    else if(marks>=61 && marks<=80){
        cout<<"Good";}
    else if(marks>=41 && marks<=60){
        cout<<"Average";}
    else{
        cout<<"Fail";}
}