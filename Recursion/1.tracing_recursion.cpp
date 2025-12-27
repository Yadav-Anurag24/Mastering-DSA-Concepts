// This program explains how tracing of recursion works when a Function calls itself again and again.

#include<iostream>
using namespace std;


// This function is for printing and calling the same function in recursive way.
void fun1(int n){

    //Base condtion
    if(n > 0){
        cout<<n<<endl;;
        fun1(n-1); // Calling function inside the function - Recursive function.
    }
}

// This function is for completing all the recursive callbacks, and it will print values during the returning of the callback fucntion.
void fun2(int m){
    if(m > 0){
        fun2(m-1);
        cout<<m<<endl;
    }
}

int main(){
    int x = 4;

    cout<<"Printing and calling function simulteneously, and then returning back to all callbacks for termination."<<endl;
    fun1(x);

    cout<<"First calling all the recursive function untill base condition is met, then printing the values during the returning phase of the callbacks function."<<endl;
    fun2(x);

    return 0;
}