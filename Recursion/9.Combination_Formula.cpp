// We will write code for the Combination Formula whihc is used to return the subsets of values. 
// Combination formula can be written as -- nCr where n is total number of enterires and r is the taking combinations digit limit.

#include <iostream>
using namespace std;

// Code using Factorial method
int fact(int n){
    if(n == 0) return 1;

    return fact(n-1) * n;
}

// nCr Function
int nCr(int n, int r){
    int num, den;

    num = fact(n);
    den = fact(r) * fact(n - r);

    return num / den;
}

// Code using Recursion with the help of Pascal's Triangle.
int rec_nCr(int n, int r){
    if(n == r || r == 0) return 1;

    return rec_nCr(n-1, r-1) + rec_nCr(n-1, r); // Recursive call 
}

