#include<iostream>
using namespace std;

int main(){

    cout << "Enter the number of rows and columns(with a space in between): ";
    int row, col;
    cin >> row >> col;
    int arr2D[row][col]; //rows - columns

    cout << "Enter the " << (row * col) << " elements: ";
    
    //taking input for array
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> arr2D[i][j];
        }
    }

    cout << "Printing based on rows: " << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing based on columns: " << endl;
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            cout << arr2D[j][i] << " ";
        }
        cout <<  endl;
    } 

    return 0;
}
