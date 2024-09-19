#include<iostream>
#include "studentClass.cpp"
using namespace std;

int main(){

    Student s1;
    s1.setAge(20);
    s1.setRollNum(200);
    cout << "S1 -> age: " << s1.getAge() << " & rollnumber: " << s1.getRollNum() << endl;

    Student *s2 = new Student;
    s2->setAge(30);
    s2->setRollNum(300);
    cout << "S2 -> age: " << (*s2).getAge() << " & rollnumber: " << (*s2).getRollNum() << endl;

    int s3Age, s3Rollnum;
    cout << "Age of Student 3?" << endl;
    cin >> s3Age;
    cout << "Rollnumber of Student 3?" << endl;
    cin >> s3Rollnum; 
    Student *s3 = new Student;
    s3->setAge(s3Age);
    s3->setRollNum(s3Rollnum);
    cout << "S3 -> age: " << (*s3).getAge() << " & rollnumber: " << (*s3).getRollNum() << endl;



    return 0;
}
