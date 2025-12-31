// The series 0, 1, 1, 2, 3, 5, 8, 11,19, ..................................... is called the fibonacci series where next term is the sum of its previous two terms.

#include<iostream>
#include <cstring> 
using namespace std;

// Code using Loops -- Optimal choice.
int loop_Fib(int n){
    int t0 = 0; // first term
    int t1 = 1; // second term
    int sum = 0; // For adding previous two terms.

    if( n <= 1) 
            return n;

    for(int i = 2; i<=n; i++){

        sum = t0 + t1;
        t0 = t1;
        t1 = sum;        
    }
    return sum;
}

// Code using Recursion
int rec_Fib(int n){
    if(n<=1)
        return n;

    else{
        return rec_Fib(n-2) + rec_Fib(n-1);
    }
}

// Code using Recursion + Memoization:

int arr[20]; // Taking an array for implementing memoization concept which will store -1 in each index initally.
int memo_Fib(int n){
    if(n <= 1){
        arr[n] = n;
        return n;
    }

    else{
        if(arr[n-2] == -1){
            arr[n-2] = memo_Fib(n-2);
        }

        if(arr[n-1] == -1){
            arr[n-1] = memo_Fib(n-1);
        }

        return memo_Fib(n-2) + memo_Fib(n-1);
    }
}

//(Using Recursion + Memoization) --This is the another version of memoization where we have used the 'memset() function' from standard library of C++.
// We can call this approach also Dynamic Programming (DP).

int dp[31];

int solve(int n) {
    if(n <= 1)
       return n;
    
    if(dp[n] != -1)
        return dp[n];
        
    return dp[n] = solve(n-1) + solve(n-2);
        }
    
    int fib(int n) {
        memset(dp, -1, sizeof(dp));
        return solve(n);
    }

int main(){

    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;

    int ans = loop_Fib(n);
    cout<<"Fibonacci number is: "<<ans;

    return 0;

}