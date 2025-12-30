#include<iostream>
using namespace std;

// Normal version using loops.
double expoTaylor(int x, int n)
{
    double sum = 1;
    double power = 1;
    double fact = 1;

    for (int i = 1; i <= n; i++)
    {
        power *= x;
        fact *= i;
        sum += power / fact;
    }

    return sum;
}

// Recursive version, which uses static variables.
double e(int x, int n){
    static double pow = 1, fact = 1;
    double res;

    if(n == 0) return 1;
    else{
        res = e(x, n-1);
        pow = pow * x;
        fact = fact *n;
        return res + (pow / fact);
    }
}

// With the help of Horner's rule -- The most optimized one!!
// 1. Using loops
double expoHorner(int x, int n){
    double res = 1.0;

    for(; n > 0; n--){
        res = 1 + (x * res) / n;
        return res;
    }
}

// Using Recursion method:
double expoHorner_rec(int x, int n){
    double static res = 1;
    if( n == 0) return res;

    res = 1+ (x*res) / n;
    return expoHorner_rec(x, n-1);
}

int main(){
    double x = 3, n = 10;
    double ans = expoHorner_rec(x, n);
    cout<<"Output of the taylor series: "<<ans<<endl;

    return 0;
}