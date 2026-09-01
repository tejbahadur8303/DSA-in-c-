// #include<iostream>
// using namespace std;
// class Animal{

//     public :
   
//     //state or properties
//     int age;
    

//     //behaviour
//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     void sleep(){
//         cout<<"har ar mahadev"<<endl;}
    
//         int getWeight(){
//             return ;
//         }
//         void setWeight(int w){

//             weight=w;
//         }

        
// };

// int main(){
//     //Object crearion

//     //static
//      Animal ramesh;
//     // ramesh.age=12;
//     // cout<<"age of ramesh :"<<ramesh.age<<endl;
//     //Dynamic Memory
//     // cout<<"size of empty:"<<sizeof(Animal)<<endl;
//     // ramesh.eat();
//     // ramesh.sleep();




//     ramesh.setWeight(32);
//     cout<<"weight"<<ramesh.getWeight()<<endl;
    
//     return 0;
// }




#include<iostream>
using namespace std;
class student{
       public:
       string name;
       int rollno;
       string branch;
       int age;
       int sec;

       void display(){
        cout<<" Name :"<<name<<endl;
        cout<<"roll No. : "<<rollno<<endl;
        cout<<"branch :"<<branch<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"sec :"<<sec<<endl;
       }
};

int main(){
    student s1={"anish",23 ,"cse", 19, 34};
     student s2={"amit kumar",24 ,"cse", 18, 34};
      student s3={"Anoop Upadhaya",25 ,"cse", 23, 34};
       student s4={"sumit",26 ,"cse", 20, 34};
        student s5={"vikash kumar",27 ,"cse", 19, 34};
        

        s1.display();
        s2.display();
        s3.display();
        s4.display();
        s5.display();



        return 0;




       


}
