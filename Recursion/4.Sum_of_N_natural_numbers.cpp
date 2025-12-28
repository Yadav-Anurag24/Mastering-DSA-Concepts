//Here we implement the sum of N natural numbers using Recursion.

#include<iostream>
using namespace std;

int sum(int N){
    if(N == 0) return 0;
    
    else{
        return sum(N - 1) + N;
    }
}

int main(){
    int num = 100;
    int total_sum = sum(num);
    cout<<total_sum<<endl;  // Sum of N natural numbers

    return 0;
}
