#include<iostream>
using namespace std;

class Student{
    private:
        int age;
        int rollNumber;
    public:
        int getAge(){
            return age;
        }
        void setAge(int age){
            if (age < 0){
                return;
            }
            this->age = age;
        }
        int getRollNum(){
            return rollNumber;
        }
        void setRollNum(int rollNumber){
            if (rollNumber < 0){
                return;
            }
            this->rollNumber = rollNumber;
        }
};
