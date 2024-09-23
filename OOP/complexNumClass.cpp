#include<iostream>
using namespace std;

class ComplexNum{
    private:
        int real;
        int imaginary;
    
    public:
        //constructor
        ComplexNum(int real, int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }
        void display(){
            cout << this->real << " + " << this->imaginary <<"i"<< endl;
        }
        void add(ComplexNum secondNum){
            // cout << "C1: " << this->real << " + " << this->imaginary <<"i"<< endl;
            // cout << "C2: " << secondNum.real << " + " << secondNum.imaginary <<"i"<< endl;
            int newNumReal = this->real + secondNum.real;
            int newNumIma = this->imaginary + secondNum.imaginary;
            cout << "C1 + C2 = " << newNumReal << " + " << newNumIma <<"i" << endl;
        }
        void multiply(ComplexNum secondNum){
            // cout << "C1: " << this->real << " + " << this->imaginary <<"i"<< endl;
            // cout << "C2: " << secondNum.real << " + " << secondNum.imaginary <<"i"<< endl;
            int newNumReal = (this->real*secondNum.real) - (this->imaginary*secondNum.imaginary);
            int newNumIma = (this->real*secondNum.imaginary) + (this->imaginary*secondNum.real); 
            cout << "C1 * C2 = " << newNumReal << " + " << newNumIma <<"i" << endl;
        }
};