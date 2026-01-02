// Tower of Hanoi (TOH) Problem is classic example where solving this problem with Recursion is provably optimal solution. 
// We can't optimaze more -- only Recursion method gives us the minimal numner of calls and steps for solution of TOH problem.

#include<iostream>
using namespace std;

void TOH(int D, int A, int B, int C){    // D is the number of disks we are taking, and A, B, C are the poles.

    if(D > 0){

        TOH(D-1, A, C, B);
        cout<<"("<<A<<", "<<C<<")"<<endl;
        TOH(D-1, B, A, C);
    }
}

int main(){

    TOH(3,1,2,3); // Calling Function
    return 0;

}

// Output: (1, 3)
//         (1, 2)
//         (3, 2)
//         (1, 3)
//         (2, 1)
//         (2, 3)
//         (1, 3)



// No. of Moves required to solve TOH problem => T(D) = 2^D - 1
// Time Complexity = O(2^n)
// Space Complexity = O(n).