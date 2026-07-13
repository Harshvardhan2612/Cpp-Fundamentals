//Ques : If cost price and selling price of an item is input through the keyboard, 
//write a program to determine whether the seller has made profit or incurred loss or
 //no profit no loss. Also determine how much profit he made or loss he incurred.
 
#include<iostream>
using namespace std;

int main(){
    int cp;
    cout<<"Enter the cost price of the product:";
    cin>>cp;  //Taking Input

    int sp;
    cout<<"Enter the selling price of the product:";
    cin>>sp;  //Taking Input

    if(sp>cp){  //Condition for profit
        cout<<"The profit is: "<<sp-cp;
    }
    else if(cp>sp){  //Condition for loss
        cout<<"The loss is: "<<cp-sp;
    }
    else if(cp==sp){  //Condition for no profit and no loss
        cout<<"There is no profit and no loss.";
    }   
}