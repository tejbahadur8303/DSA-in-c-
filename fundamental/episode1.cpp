#include<iostream>
#include<string>
using namespace std;


//  class Student 
//  {
//     public:
//     string name;
//     int age;
//     int roll_number;
//     string grade;
//  };

//  int main(){
//     Student s1,s2;
    
    
//     s1.name = "Tejbahadur";
//     s1.age = 19;
//     s1.roll_number = 29;
//     s1.grade = "A++";




//     s2.name = "Suraj";
//     s2.age = 18;
//     s2.roll_number = 28;
//     s2.grade = "B++";
//      cout<<s1.name<<endl;
//      cout<<s2.name<<endl;

//      return 0;
//  }


 


//to acces private data



 class Student 
 {
    private:
    string name;
    int age;
    int roll_number;
    string grade;

    // function getter and setter 
    public:
    void setname(string s)
    {
        name = s;
    }
    void setage(int  a)
    {
        age = a;
    }
    void setroll_number(int  b)
    {
        roll_number = b;
    }
    void setgrade(string c)
    {
        name = c;
    }


    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getroll_number(){
        cout<<roll_number<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }




 };

 int main(){
    Student s1;
    
    
    s1.setname("Tejbahadur");
    s1.setage(19);
    s1.setroll_number(29);
    s1.setgrade("A");

  s1.getname();
  s1.getage();
  s1.getroll_number();
  s1.getgrade();

    

    return 0;

     
 }


 





