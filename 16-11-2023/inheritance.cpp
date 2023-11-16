// inheritance accessibility -> public        protected          private
// base class accessibility
//                  public:      public       protected           private
//                protected:    protected     protected           private
//                  private:    ----------not accessible-----------------

#include<iostream>
using namespace std;

class Employee{
public:
  int id;
  char name[100];
};  

class Manager : protected Employee{
public:
  char department[100];
  void set_data(int empID,char * n,char * dep){
    id = empID;
    strcpy(name,n);
    strcpy(department,dep);
  }
  void display(){
    cout << "id : " << id << endl;
    cout << "name : " << name << endl;
    cout << "department : " << department << endl;
  }
};

int main(){
  Manager m;
  m.set_data(1,"Shubham","software");
  cout << m.department << endl;
  return 0;
}
