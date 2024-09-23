#include<iostream>
#include "complexNumClass.cpp"
using namespace std;

int main(){
    int real1, imaginary1, real2, imaginary2;
    cout << "Enter the first complex number: ";
    cin >> real1 >> imaginary1;
    cout << "Enter the second complex number: ";
    cin >> real2 >> imaginary2;

    ComplexNum c1(real1, imaginary1);
    ComplexNum c2(real2, imaginary2);

    cout << "C1: ";
    c1.display();
    cout << "C2: ";
    c2.display();
    cout << "-----Addition-----" << endl;
    c1.add(c2);
    cout << "-----Multiplication-----" << endl;
    c1.multiply(c2);

    
    return 0;
}