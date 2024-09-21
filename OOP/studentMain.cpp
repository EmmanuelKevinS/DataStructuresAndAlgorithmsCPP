#include<iostream>
#include "studentClass.cpp"
using namespace std;

int main(){

    // Student s1;
    // s1.setAge(20);
    // s1.setRollNum(200);
    // cout << "S1 -> age: " << s1.getAge() << " & rollnumber: " << s1.getRollNum() << endl;

    // Student *s2 = new Student;
    // s2->setAge(30);
    // s2->setRollNum(300);
    // cout << "S2 -> age: " << (*s2).getAge() << " & rollnumber: " << (*s2).getRollNum() << endl;

    // int s3Age, s3Rollnum;
    // cout << "Age of Student 3?" << endl;
    // cin >> s3Age;
    // cout << "Rollnumber of Student 3?" << endl;
    // cin >> s3Rollnum; 
    // Student *s3 = new Student;
    // s3->setAge(s3Age);
    // s3->setRollNum(s3Rollnum);
    // cout << "S3 -> age: " << (*s3).getAge() << " & rollnumber: " << (*s3).getRollNum() << endl;

    // Student s1;
    // s1.display();

    // cout << endl;

    // Student *s2 = new Student(25);
    // s2->display();
    // cout << endl;

    // Student s3(15, 1000);
    // cout << "S3: ";
    // s3.display();
    // cout << endl;

    // Student s4(s3);
    // cout << "S4: ";
    // s4.display();
    // cout << endl;

    // Student *s5 = new Student(27, 2000);
    // cout << "S5: ";
    // s5->display();
    // cout << endl;

    // Student s6(*s5);
    // cout << "S6: ";
    // s6.display();
    // cout << endl;

    Student s1(20, 200);
    cout << "S1: Age -> " << s1.getAge() << " Rollnumber -> " << s1.getRollNum() << endl;
    Student s2(30, 300);
    cout << "S2: Age -> " << s2.getAge() << " Rollnumber -> " << s2.getRollNum() << endl;
    Student *s3 = new Student(10, 100);
    cout << "S3: Age -> " << s3->getAge() << " Rollnumber -> " << (*s3).getRollNum() << endl;


    s2 = s1; //Copy assigment operator
    cout << "After copy assignment operator: " << endl;
    cout << "S2: Age -> " << s2.getAge() << " Rollnumber -> " << s2.getRollNum() << endl;
    delete s3; //'delete' keyword is used to destruct dynamic memory



    return 0;
}
