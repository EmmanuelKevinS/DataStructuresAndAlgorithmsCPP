#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;

    public:
        // getters and setters
        int getNum(){
            return numerator;
        }
        int getDem(){
            return denominator;
        }
        void setNum(int numerator){
            this->numerator = numerator;
        }
        void setDem(int denominator){
            this->denominator = denominator;
        }

        //constructors
        Fraction(){
            numerator = 1;
            denominator = 1;
        }

        Fraction(int numerator){
            this->numerator = numerator;
            denominator = 1;
        }
        Fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        Fraction(Fraction &other){
            this->numerator = other.numerator;
            this->denominator = other.denominator;
        }

        //functions
        float calculateFraction(){
            //calculating float to 1 dp
            float value = static_cast<float>(numerator) / denominator;  
            cout << fixed << setprecision(1);  
            return value;          
        }

        void display(){
            cout << this->numerator << "/" << this->denominator << " = " << calculateFraction() << endl;
        }

        void add(Fraction frac){
            int commonDenominator = this->denominator * frac.denominator;
            int newFirstNumerator = (this->numerator * frac.denominator);
            int newSecondNumerator = (this->denominator * frac.numerator);
            int finalNumerator = newFirstNumerator + newSecondNumerator;

            cout << "-----------------" << endl;
            cout << "First fraction: " << this->numerator << "/" << this->denominator << endl;
            cout << "Second fraction: " << frac.numerator << "/" << frac.denominator << endl;
            cout << "Fraction: " << finalNumerator << " / " << commonDenominator << endl;

            this->numerator = finalNumerator;
            this->denominator = commonDenominator;

            pair<int, int> result = simplify();
            this->numerator = result.first;
            this->denominator = result.second;
            cout << "Fraction after simplification: " << result.first << " / " << result.second << endl;
            cout << "Decimal value = " << fixed << setprecision(1) << static_cast<float>(result.first) / result.second << endl;
            cout << "-----------------" << endl;
        }

        pair<int, int> simplify(){
            //to determine Greatest Common Divisor of the numerator and denominator
            int gcd = 1;
            int smallerNumber = min(abs(this->numerator), abs(this->denominator));
            for(int i = 1; i <= smallerNumber; i++){
                if((this->numerator % i == 0) && (this->denominator % i == 0)){
                    gcd = i;
                } 
            }
            cout << "GCD: " << gcd << endl;
            int simplifiedNumerator = this->numerator / gcd;
            int simplifiedDenominator = this->denominator / gcd;
            return make_pair(simplifiedNumerator, simplifiedDenominator);
        }

        //destructor
        ~Fraction(){}

};