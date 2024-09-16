#include <iostream>
using namespace std;

//Swapping 2 number in the arrayBasic program to find the sum of the elements in the array

int main(){

    int numElements;
    cout << "How many elements are there in the array? ";
    cin >> numElements;

    cout << "Enter the value of the elements: ";
    int array1[numElements];
    for(int i = 0; i < numElements; i++){
        cin >> array1[i];
    }

    cout << "Your array before swapping: ";
    for (int i = 0; i < numElements; i++){
        cout << array1[i] << " ";
    }

    cout << endl;
    
    cout << "Enter the positions of the 2 elements that you would like to swap (start from 0): "; 
    int num1;
    int num2;
    int temp;

    cin >> num1;
    cin >> num2;

    //without using the "swap" function
    temp = array1[num1];
    array1[num1] = array1[num2];
    array1[num2] = temp;

    // for (int i = 0; i < numElements; i++){
    //     swap(array1[num1], array1[num2]);
    // }
    cout << "Your array after swapping: ";
    for (int i = 0; i < numElements; i++){
        cout << array1[i] << " ";
    }


    cout << " " << endl;
    return 0;
}