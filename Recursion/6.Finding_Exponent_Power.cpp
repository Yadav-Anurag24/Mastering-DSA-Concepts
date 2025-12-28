// There are two integer terms, m is exponent and n is power of it, we will find the power of m to the n using recursion.

#include<iostream>
using namespace std;

// Normal way of doing it, this method will have n number of multiplication taken by it to find the result.
int power(int m, int n){

    if(n == 0) return 1;

    else{
        return power(m, n - 1) * m; // Recursive call.
    }

}


// Above method will perform  multiplication n number of times of recursive call , it will be optime to reduce this n number of call to even half.
// We can attain this by performing the multiplication based on the even or odd degree.

int Op_power(int m, int n){
    if( n == 0) return 1;

    if(n % 2 == 0) return Op_power(m * m, n / 2); // Logic for even degree 

    else{
        return m * Op_power(m * m, (n - 1) / 2);  // Logic for Odd degree
    }
}

int main(){
    int base = 5, degree = 5;
    int ans = Op_power(base, degree);
    cout<<ans;

    return 0;
}
