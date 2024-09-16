#include<iostream>
using namespace std;

int main(){
                        
    char name[100];
    cout << "Enter your name: ";
    //For loop isn't needed for this
    cin >> name;
    //For loop isn't needed again to print it out. Character arrays are a little special
    cout << "Your name is: " << name << endl;

    return 0;
}