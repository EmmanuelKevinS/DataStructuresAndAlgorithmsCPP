#include<iostream>
using namespace std;

class Student{
    private:
        int age;
        int rollNumber;
    public:
        //Default Constructor
        Student(){
            age = 0;
            rollNumber= 0;
            cout << "Default Constructor called " << "Age: " << age << " " << "Rollnumber: " << rollNumber << endl;
        }

        //Parameterised constructor
        Student(int age){
            this->age = age;
            rollNumber = 0;
            cout << "Parameterised constructor 1 called"  << "Age: " << age << " " << "Rollnumber: " << rollNumber << endl;
        }
        Student(int age, int rollNumber){
            this->age = age;
            this->rollNumber = rollNumber;
            cout << "Parameterised constructor 2 called| "  << "Age: " << age << " " << "Rollnumber: " << rollNumber << endl;
        }

        //Copy constructor
        Student(Student &stud){
            // Copy data from `other` to the current object
            this->age = stud.age;
            this->rollNumber = stud.rollNumber;
            cout << "Copy Constructor called | Age: " << age << " Rollnumber: " << rollNumber << endl;
        }

        void display(){
            cout << "Hello im the display function" << endl;
        }

        //Getters and Setters
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

        //Destructor
        ~Student(){
            cout << "Destructor called" << endl;
        }
};
