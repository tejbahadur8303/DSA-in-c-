
// class Vehicle{
//     public:
// }
// int main(){
//     Car myCar;
//     myCar.honk();
//     cout<<myCar.brand<<" "<<myCar.model<<endl;
//     return 0;
// }






// class Base{
//     public:
//     Base(){
//         cout<<"Base constructor"<<endl;
//     }
//     ~Base(){
//         cout<<"Base destructor"<<endl;
//     }
// };
// class Derived : public Base{
//     public:
//     Derived(){
//         cout<<"Derived"<<endl;
//     }
//      ~Derived(){
//         cout<<"Derived Destructor"<<endl;
//     }
// };
// int main(){
//     Derived obj;
// }


// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     virtual void sound(){
//         cout<<"Animal sound"<<endl;
//     }
// };
// class Dog : public Animal
// {
//     public:
//     void sound() override{
//         cout<<"Dog barks"<<endl;
//     }
// };
// int main(){
//     Animal* p
//     Dog d;
//     d.sound();
// }



days = np.arange(1,8)
temperature = [28,30,31,33,32,29,28]
fig,ax=plt.subplots(figsize=(6,3,5))
ax.plot(days,temperature)
ax.set(title="weekly Temperature", xlabel="day", ylabel="Temperature("C)")


months=["jan,"Feb","Mar","Apr","May"]
a=[20,24,27,32,36]; b=[18,22,29,30,40]
fig, ax=plt.subplots(figsize=(6,3.5))
ax.plot(months,a,"o-",label="Product A")
ax.plot(months,a,"o-",label="Product B")
ax.plot(months,a,"o-",label="Product C")