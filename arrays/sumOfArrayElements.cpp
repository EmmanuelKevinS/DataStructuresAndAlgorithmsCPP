#include <iostream>
using namespace std;

//Basic program to find the sum of the elements in the array

int main(){

    int numOfElements;
    cout << "How many elements are there in your array?" << endl;
    cin >> numOfElements;

    int array1[numOfElements];

    cout << "Provide the value of the elements(with a space in between)" << endl;
    for (int i = 0; i < numOfElements; i++){
        cin >> array1[i];
    }

    int sum = 0;
    for (int i = 0; i < numOfElements; i++){
        sum = sum + array1[i];
    }

    cout << "The sum of your array is: " << sum << endl;

    return 0;
}