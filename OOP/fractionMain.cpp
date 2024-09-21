#include<iostream>
#include "fractionClass.cpp"
using namespace std;

int main(){

    Fraction f1;
    Fraction f2(6);
    Fraction *f3 = new Fraction(4, 2);
    Fraction *f4 = new Fraction(40, 22);
    Fraction *f5 = new Fraction(41, 24);
    Fraction *f6 = new Fraction(14, 3);
    Fraction *f7 = new Fraction(12, 6);

    f1.display();
    f2.display();
    f3->display();
    f4->display();
    f5->display();
    f6->display();
    f7->display();

    f4->add(*f6);
    f5->add(*f3);

    delete f3;
    delete f4;
    delete f5;
    delete f6;  
    delete f7;  

    return 0;
}