// Implementing Factorial of a number using recursion.

#include<iostream>
using namespace std;

int fact(int num){
    if(num == 0) return 1;
    else{

        return fact(num - 1) * num;
    }
}

int main(){
    int num;
    cout<<"Enter the number of Finding Factorial: "<<endl;
    cin>>num;
    
    int ans = fact(num);
    cout<<"Factorial of the number: "<<ans<<endl;

    return 0;
}