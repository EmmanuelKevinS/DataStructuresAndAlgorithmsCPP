#include<iostream>
#include<cstring>
using namespace std;

class Student{
    private:
        int age;
        char *name;
    
    public:
        //constructor
        Student(int age, char *name){
            this->age = age;
            // shallow copy
            // this->name = name;
            // deep copy 
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
        }
        //copy constructor
        Student(Student const &stud){
            this->age = stud.age;
            this->name = new char[strlen(stud.name) + 1];
            strcpy(this->name, stud.name);
        }
        void display(){
            cout << "Name: " << name << ", Age: " << age << endl;
        }
        //getter and setter
        char* getName(){
            return this->name;
        }
        void setName(char *name){
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
        }

        //destructor
        ~Student(){}
};

int main(){

    char name[] = "ABCD";
    Student *s1 = new Student(20, name);
    s1->display();

    Student s2(*s1);
    s2.getName()[3] = 'E';
    cout << "S1: ";
    s1->display();
    cout << "S2: ";
    s2.display();
    // name[3] = 'E';
    // Student *s2 = new Student(30, name);
    // s2->display();

    // s1->display();

    return 0;
}
