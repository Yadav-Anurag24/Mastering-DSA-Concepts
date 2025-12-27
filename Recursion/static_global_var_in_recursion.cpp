#include<iostream>
using namespace std;

int fun1(int n){
    if(n > 0){
        return fun1(n - 1) + n;
    }

    return 0;
}

int fun2(int m){

    static int x = 0;  // Static variable called here to show how it works with recursive function.

    if(m > 0){
        x++;
        return fun2( m - 1) + x;
    }

    return 0;
}

int main(){
    int num = 5;
    cout<<fun1(num)<<endl;
    cout<<fun2(num)<<endl;

    //What happens when we try to print the fun2 two times, what will be the output? Try yourself!!
    cout<<fun2(num)<<endl;

    return 0;
}


// Note: Both the static and global variable gives same output in this code.
