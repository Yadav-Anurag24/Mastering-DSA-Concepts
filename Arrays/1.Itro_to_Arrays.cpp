// Here we are going to see through how many ways we can declare and initialize the arrays.
// Arrays store elements  in contiguous way, also their addresses are created in a contiguous way in the Memory.

#include<iostream>
using namespace std;

int main(){

    // Different ways we can declare arrays.
    int arr[5]; // As we have not initialized the elements, thus in memory it will store Garbage values. 

    int arr1[5] = {1,2,3}; // Here we have partially intialized the elements, remaining left out indeces will store  0 as there values.

    int arr2[6] = {10,20,22,23,34,44};

    int arr3[10] = {0}; // All the indeces will take 0 as there value in the memory.

    int arr4[] ={23,34,55,45,56,77,89,89};


    // Accessing the array elements which we declaring above.
    for(int i = 0; i < 6; i++){
        
        cout<<"Accessing elements through indeces: "<<arr2[i]<<endl; 

        cout<<"Accessing elements through indeces but using another syntax method: "<<i[arr2]<<endl;

        cout<<"Accessing elements using Pointer Arithmetic: "<< *(arr2 + 2)<<endl;

        cout<<"Showing the addresses of the array elements: "<<&arr2[i]<<endl;
    }

}
