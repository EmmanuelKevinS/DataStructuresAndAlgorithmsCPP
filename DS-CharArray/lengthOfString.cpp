#include<iostream>
using namespace std;

//Printing out the length of the string(stored in the character array)

int length(char input[]){
    int count = 0;
    int i = 0;
    while (input[i] != '\0'){ //for loop works as well
        if ( input[i] != ' '){
            count++;
        }
        i++;
    }
    return count;
}

int main(){

    char name[100];
    cout << "Enter your name: ";
    cin.getline(name, 100);//better than cin. i will only stop when it encounters '\n'
    cout << "Your name is : " << name << endl;
    cout << "The length of your name(without spaces) is: " << length(name) << endl;

    return 0;
}
