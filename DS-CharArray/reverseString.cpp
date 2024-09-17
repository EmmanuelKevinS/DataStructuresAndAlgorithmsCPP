#include<iostream>
#include <cstring> //This is for strlen function
using namespace std;

void reverseStr(char arr1[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr1[start], arr1[end]);
        start++;
        end--;
    }
    cout << "Array after swapping: " << arr1 << endl;
}

int main(){

    int numChar;
    cout << "Enter the number of characters in the array: ";
    cin >> numChar;
    cin.ignore();

    char charArray[numChar + 1];
    
    cout << "Enter the characters(no spaces): ";
    // cin >> charArray;
    cin.getline(charArray, numChar + 1);

    int size = strlen(charArray);
    
    cout << "Array before swapping: " << charArray << endl;
    
    reverseStr(charArray, size);

    return 0;
}
