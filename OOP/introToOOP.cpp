#include<iostream>
using namespace std;

class Student{
    //class is private by default
    public:
        int age;
        int rollNumber;
};

int main(){

    //Statically creating objects
    Student s1;
    Student s2, s3, s4 , s5;

    //Dynamically creating objects
    Student *s6 = new Student();
    Student *s7 = new Student();

    s1.age = 24;
    s1.rollNumber = 100;
    cout << "Student 1, age =  " << s1.age << " and rollnumber = " << s1.rollNumber << endl;

    (*s6).age = 30;
    (*s6).rollNumber = 200;
    cout << "Student 6, age =  " << (*s6).age << " and rollnumber = " << (*s6).rollNumber << endl;

    s7->age = 25;
    s7->rollNumber = 300;
    cout << "Student 7, age =  " << s7->age << " and rollnumber = " << s7->rollNumber << endl;

 

    return 0;
}