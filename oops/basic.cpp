#include<iostream>
using namespace std;

class student{

    //properties
    string name;
    char grade;

    public:
    //constructor
    student(string name, char grade){
       this->name=name;
        this->grade=grade;
    }

    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"grade: "<<grade<<endl;
    }

};

int main(){

    // creating an object
 
    student s1("devesh",'A');

    student r1("fello",'h');
     

    s1.getinfo();
    r1.getinfo();

    return 0;


    
}

