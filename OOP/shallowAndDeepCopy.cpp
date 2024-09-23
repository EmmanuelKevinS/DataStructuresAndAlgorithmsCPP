#include<iostream>
using namespace std;

class Student{
    private:
        int age;
        char *name;
    
    public:
        //constructor
        Student(int age, char *name){
            this->age = age;
            this->name = name;
        }
        void display(){
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

int main(){

    char name[] = "ABCD";
    Student *s1 = new Student(20, name);
    s1->display();

    name[3] = 'E';
    Student *s2 = new Student(30, name);
    s2->display();


    return 0;
}
