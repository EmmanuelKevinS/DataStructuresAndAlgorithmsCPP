#include<iostream>
#include<cstring>
using namespace std;

void printPrefixes(char arr1[], int arrSize){
    for (int start = 0; start < arrSize; start++){
        for (int end = 0; end <= start; end++){
            cout << arr1[end] << " ";
        }
    cout << endl;
    }  
}

int main(){

    int numChar;
    cout << "Enter the number of characters in the array: ";
    cin >> numChar;
    cin.ignore();

    char charArray[numChar];
    
    cout << "Enter the characters(no spaces): ";
    // cin >> charArray;
    cin.getline(charArray, numChar);

    int size = strlen(charArray);
    
    printPrefixes(charArray, size);

    return 0;
}
