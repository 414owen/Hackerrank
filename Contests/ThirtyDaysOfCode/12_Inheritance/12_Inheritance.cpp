#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    protected:
        string firstName;
        string lastName;
        int phone;
    public:
        Student(string fname,string lname,int p){
            firstName=fname;
            lastName=lname;
            phone=p;
        }
        void display(){
            cout<<"First Name: "<<firstName<<"\nLast Name: "<<lastName<<"\nPhone: "<<phone; 

        }
    
};
class Grade :  public Student{
    private:
         int score;
    public:
        Grade(string fName, string lName, int ph, int mark)
            : Student(fName, lName, ph)
        {
            score = mark;
        }
        char calculate() {
            if (score >= 90) {return 'O';}
            if (score >= 75) {return 'E';}
            if (score >= 60) {return 'A';}
            if (score >= 40) {return 'B';}
            else {return 'D';}
        }
};
int main() {
    string firstName,lastName;
    int score,phone;
    cin>>firstName;
    cin>>lastName;
    cin>>phone;
    cin>>score;    
    Student *stu=new Grade(firstName,lastName,phone,score);
    stu->display();
    Grade *g=(Grade*)stu;
    cout<< "\nGrade: "<<g->calculate();
    return 0;
}