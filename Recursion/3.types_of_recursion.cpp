// There are mainly 9 types of recursion, understanding each type will help in DSA based problems.
// 1. Direct Recursion
// 2. Indirect Recursion -- (DSA relevance: low)
// 3. Tail Recursion
// 4. Head Recursion -- (useful in tree traversal)
// 5. Linear Recursion
// 6. Tree(multiple) Recursion
// 7. Nested Recursion. -- (very rare in DSA)
// 8. Structured Recursion -- (important for DSA)
// 9. Backtracking (Controlled Recursion) -- Recursions where you undo decisions.

#include<iostream>
using namespace std;


// Direct, Linear and Tail Recursion Example.
void fun1(int n){
    if( n > 0){
        cout<<n;
        fun1(n - 1);     
    }
}

// Head Recursion Example
void fun2(int m){
    if( m > 0){
        fun2( m - 1);  // Recursive call happening before any processing.
        cout<<m;
    }
}

// Tree Recursion Example. 
// Used in Fibonacci, tree traversal, Divide and conquer,etc.
void fun3(int k){
    if( k > 0){
        cout<< k<<endl;
        fun3(k - 1);
        fun3(k - 1);
    }
}





