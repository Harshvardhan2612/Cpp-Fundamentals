//Given a point (x, y), write a program to find out if it lies in the 1st Quadrant, 
//2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the x-axis, y-axis 
// at the origin, viz. (0, 0).
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter X coordinate:";
    cin>>x;
    cout<<"Enter Y coordinate:";
    cin>>y;
    if(x>0 && y>0){
        cout<<"The point ("<<x<<","<<y<<") lies in the First Quadrant";}
    else if(x<0 && y>0){
        cout<<"The point ("<<x<<","<<y<<") lies in the Second Quadrant";}
    else if(x<0 && y<0){
        cout<<"The point ("<<x<<","<<y<<") lies in the Third Quadrant";}
    else if(x>0 && y<0){
        cout<<"The point ("<<x<<","<<y<<") lies in the Fourth Quadrant";}
    else if(x==0 && y!=0){
        cout<<"The point ("<<x<<","<<y<<") lies on the Y axis";}
    else if(x!=0 && y==0){
        cout<<"The point ("<<x<<","<<y<<") lies on the X axis";}
    else{
        cout<<"The point ("<<x<<","<<y<<") lies at the origin";}    
    }