#include <iostream>
using namespace std;


int main(){

    int array1[10];
    array1[0] = 2;
    array1[4] = 5;
    cout << array1[0] << "" << array1[4] << endl;

    int array2[4] = {1,2,3,4};
    cout << array2[0] << array2[1] << array2[2] << array2[3] << endl;

    int array3[5] = {5, 10, 15, 20, 25};
    for (int i = 0; i < (sizeof array3/sizeof array3[0]); i++){ //sizeof return the memory space taken up -> for this case 4*5/4(size of array/size of the first element of the array) = 5
        cout << array3[i] << " ";
    }


    cout << endl;
    return 0;
}