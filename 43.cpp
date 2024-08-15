// #include <iostream>
// using namespace std;
// class Human
// {
// protected:
//     int height;

// public:
//     int weight;
//     int age;

//     int getAge()
//     {
//         return this->age;
//     }
// };
// class Male : public Human
// {
// public:
//     void setWeight(int w)
//     {
//         this->weight = w;
//     }
//     string color;
//     void sleep()
//     {
//         cout << "Male sleeping" << endl;
//     }
//     int getHeight()
//     {
//         return this->height;
//     }
//     int getweight()
//     {
//         return this->weight;
//     }
// };
// int main()
// {
//     Male obj1;
//     cout << obj1.getHeight() << endl;
//     obj1.setWeight(77);
//     cout << obj1.getweight() << endl;
//     // cout<<obj1.weight;
//     /*obj1.setWeight(78);
//     obj1.age=23;
//     obj1.color="Orange";
//     obj1.height=6;
//     cout<<obj1.age<<endl;
//     cout<<obj1.weight<<endl;
//     cout<<obj1.height<<endl;
//     cout<<obj1.color<<endl;
//     obj1.sleep();
//                 */

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     int age;
//     int weight;
//     void bark()
//     {
//         cout << "Barking" << endl;
//     }
// };
// class Human
// {
// public:
//     int age;
//     int weight;
//     void speak()
//     {
//         cout << "Speaking" << endl;
//     }
// };
// class hybrid : public Animal,public Human{

// };
// class Dog : public Animal
// {
// };
// class GermanShepherd : public Dog
// {
// };
// int main()
// {
//     Dog dg[5];
//     int count = 0;
//     for (Dog a : dg)
//     {
//         cout << ++count << endl;
//         cout << a.age << endl;
//         a.bark();
//     }
//     cout<<"now deal with grandson class"<<endl;
//     GermanShepherd dhurvRathee;
//     cout<<dhurvRathee.weight<<endl<<endl;
//     hybrid h1;
//     h1.bark();
//     h1.speak();
//     return 0;
// }
#include<iostream>
using namespace std;
class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    void operator+ (B & obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
        
    //    cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }
    void operator++() {
        cout<<"hemlo"<<endl;
    }
    void operator++(int) {
        cout<<"hemloooo"<<endl;
    }
     void operator*(B & o) {
        int value1 = this -> a;
        int value2 = o.a;
        cout << "output " << value2*5 - value1*10 << endl;
    }

};

int main(){
    B obj1,  obj2;
    // obj1();
    obj1.a=1;
    obj2.a=3;

    obj1+obj2;
    ++obj1;
    obj1++;
    obj1();
   obj1*obj2;
    return 0;
}