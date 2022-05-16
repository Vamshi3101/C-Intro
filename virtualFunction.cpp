#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    virtual void getdata(){};
    virtual void putdata(){};
};
class Professor:public Person{
    int publications,cur_id;
    public:
    static int id;
    Professor(){
        this->cur_id = ++id;
    }
    void getdata(){
        cin>>this->name>>this->age>>this->publications;
    }
    void putdata(){
        cout<<this->name<<" "<<this->age<<" "<<this->publications<<" "<<this->cur_id<<"\n";
    }
};
class Student:public Person{
    int s1,s2,s3,s4,s5,s6,sum,cur_id;
    public:
    static int idS;
    Student(){
        this->cur_id = ++idS;
    }
    void getdata(){
            cin>>this->name>>this->age>>this->s1>>this->s2>>this->s3>>this->s4>>this->s5>>this->s6;
        sum = s1+s2+s3+s4+s5+s6;
    }
    void putdata(){
        cout<<this->name<<" "<<this->age<<" "<<this->sum<<" "<<this->cur_id<<"\n";
    }
};
int Professor::id=0;
int Student::idS=0;
int main(){

    int n, val;
    Person *per[4];
    n=4;

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            per[i] = new Professor;

        }
        else per[i] = new Student; 

        per[i]->getdata(); 

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); 

    return 0;

}
