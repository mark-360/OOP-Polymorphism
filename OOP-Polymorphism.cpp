#include <iostream>
using namespace std;
// OOP-Inheritance & polymorphism!!
class companyEmployee{
protected:
    string Name;
    int Age;
    int ExperienceYears;
    int DaysOFWork;
    string Type;
public:
    companyEmployee(string name, int age , int experience,string type){
        Name=name;
        Age=age;
        ExperienceYears=experience;
        Type=type;
    }
    void WorkingDays(){
        if(ExperienceYears>=5){
            DaysOFWork=4;
            cout<<Name<<" You have 4 working days "<<endl;
        }
        else{
            DaysOFWork=6;
            cout<<Name<<" You have 6 working days"<<endl;
        }
    }
    virtual void TypeOfWork(){
        cout<<Name<<" works in"<<Type;
    }
};
class Employees: public companyEmployee{
public:
    int TimeInWork;
    Employees(string name, int age, int experience,string type,int timeinwork) : companyEmployee(name,age,experience,type){
        TimeInWork=timeinwork;
    }
    void Time(){
        if(TimeInWork>=4){
            cout<<"And we appreciate your hard work!"<<endl;
        }
    }
    void TypeOfWork(){
        cout<<Name<<" works in company and his job is "<<Type;
    }
};
int main() {
    Employees e1 = Employees("Mark",19,5,"backend",10);
    companyEmployee * e2=&e1;
    e1.WorkingDays();
    e1.Time();
    e2->TypeOfWork();
    return 0;
}