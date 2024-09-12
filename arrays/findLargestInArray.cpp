#include <iostream>
using namespace std;

int main(){

    int numElements;
    cout << "Enter the number of elements in the array: ";
    cin >> numElements;

    int array1[numElements];

    cout << "Enter the values of the elemets (with a space in between): ";
    for(int i = 0; i < numElements; i++){
        cin >> array1[i];
    }

    int largest = INT16_MIN;
    for(int i = 0; i< numElements; i++){
        if (largest < array1[i]){
            largest = array1[i];
        }
    }

    cout << "The largest element in your array is: " << largest << endl;

    return 0;
}