#include<iostream>
// #include<cstdarg>
// #include<string >
using namespace std;

// int sum(int count, ...){
//     va_list args;
//     va_start(args,count);
//     int total=0;
//     for(int i=0; i<count; i++){
//         total += va_arg(args,int);
//     }
//     va_end(args);
//     return total;
// }
// int main(){
//     cout<<sum(3,10,20,30)<<endl;
//     return 0;
// }

// template<typename T>
// T sum(T value){
//     return value;
// }
// template<typename T, typename... Args>
// T sum(T first,Args... args) {
//     return first + sum(args...);
// }
// int main(){
//     cout<<sum(10,20,30)<<endl;
//     cout<<sum(1.5,2.5,3.0)<<endl;
//     return 0;

// }








// template<typename...Args>
// auto sum(Args... args){
//     return(args+ ...);
// }
// int main(){
//     cout<<sum(10,20,30,40)<<"Hello"<<endl;
//     return 0;
// }





// #define PI 3.14159
// #define MAX_SIZE 100
// int main(){
//     cout<<"PI= "<<PI<<endl;
//     cout<<"MAximum Size= "<<MAX_SIZE<<endl;
//     return 0;
// }

// class Circle{
//     double r;
//     public:
//     double area();
// };
// double Circle::area(){
//     return 3.14 *r *r;
// }




// inline int max(int a,int b ){
//     return (a>b) ? a:b;
// }
// int main(){
//     cout<< max(100,209)<<endl;
// }


// class Tracker{
//     // declaration of static data member 
//     static int objectCount;
//     int id;
//      public :
//      Tracker(){
//         objectCount++;  // increments the shared counter  
//         id= objectCount ;
//         static int getCount();
//          return objectCount;

//      }
// };int Tracker::objectCount = 0;


// int main(){
//     cout<<" Initial count :"<<Tracker::getCount()<<endl;

//     Tracker obj1;
//     Tracker obj2;
//     cout<<"final count "<<Tracker::getCount()<<endl;
//     return 0;


// }



// class Wall{
//     public:
//     int length;
//     Wall(){

//         length =10;
//     }
// };

// class Wall{
//     public:
//     int length;
//     Wa;;(int len){
//         length =len;
//     }
// };

// class Walll {
//     public:
//     int length;
//     Wall(int len){
//         length =len;
//     }
// };

// Wall(const Wall & obj){
//     length =obj,length;
// }




// class Box{
//     public:
//     int width , height;
//      Box() { width = 0; height =0 ;}
//      Box(int w, int h){ width =w; height =h;};
// };


// int main(){
//     Box b1;
//     Box b2(10,20);
//     cout<<b1.height<<" "<<b1.width<<endl;
//      cout<<b2.height<<" "<<b2.width<<endl;
// }



// class Player{
//     private:
//     int health;
//     int score;
//     public :
//     Player(int h, int s)
//   {  health = h;
//     score = s;
// }

// void display() const{
//     std::cout<<"health:"<<health<<"score:"<<score<<std::endl;
// }

// void TakeDamage(int damage)
// {
//     health -=  damage;
// }
// };

// int main()
// {
    
    
// }


//Encloseing class 
class Enclosing
{
    private:
    std::string secret = "Enclosing's Private Data";

    public:

    // public Nested class
    class Nested {
        public:
        void revealSecret(Enclosing & e){
            // Modern C++ allows the nested class to access private member off the enclosing classs 
            std::cout <<"Accessing : "<<e.secret <<std::endl;
        }
    };
};




int main(){
    Enclosing outer;
    ///instantiating the nested class using the scope resolution operation (::)
    Enclosing:: Nested inner;
    inner.revealSecret(outer);
    return 0;
}








