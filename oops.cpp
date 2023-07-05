#include <iostream>
#include <map>
#include <string>
using namespace std;

class Student {
    private:
        static int stud_id;
        static map <int ,Student *> students;
        string dob;
        long long int phnnum;
    
    public:
        string name;
        int roll;
        string year;
    Student(){
        cout << "Student constructor" << endl;

    }
    Student(string dob,long phnnum,string name,string year){
        
       this->name=name;
        this->dob=dob;
        this->phnnum=phnnum;       
        this->year=year;
        roll=stud_id++;
        cout<<"Student "<<name<<"database created"<<endl;
        students[roll]=this;
    
    }
    Student(Student * student){
        this->roll=stud_id++; 
       this->name=student->name;
        this->phnnum=student->phnnum;
        
        this->year=student->year;
        this->dob=student->dob;
        
        students[roll]=this;

    }
    static map <int,Student*> getStudents(){
        map <int,Student*>::iterator i;
        cout<<"ahi";
        for(i=students.begin();i!=students.end();++i){
            cout<<i->first<<endl;
        }
        return students;
    }
    
};
    int Student::stud_id = 1;
    map<int, Student*> Student::students;
int main(){
    Student soma("20-05-03",7397551204,"soma","III");
    Student :: getStudents();
    
}