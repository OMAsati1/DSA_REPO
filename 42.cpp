#include <iostream>
#include <string.h>
using namespace std;
class hero
{

public:
    int health;
    char level;
    static int timeToComp;
    char *name;
    hero()
    {
        cout << "Simple Constructor Called" << endl;
        name = new char[100];
    }
    hero(int health, char level)
    {
        // cout<<"this->"<<this<<endl;
        (*this).health = health;
        // or
        // this->health = health;
        this->level = level;
    }
    // Copy Constructor
    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    int getHealth()
    {
        return health;
    }
    void setLevel(char l)
    {
        level = l;
    }
    char getLevel()
    {
        return level;
    }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << ", ";
        // cout << "hellooo" << endl;
        cout << "health: " << this->health << ", ";
        cout << "level: " << this->level << " ]";
        cout << endl
             << endl;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    ~hero() {
        cout<<"destructor called"<<endl;
    }
    
    // ~hero(){
    //     cout<<"destructor called"<<endl;
    // };
    static int random(); 
    // or directly
    /*
    static int random(){
       return timeToComp;
     }
      */
};
int hero:: random(){
       return timeToComp;
    }
int hero :: timeToComp=15;
int main()
{
    /*
    // hero h1;
    // cout << "Size: " << sizeof(h1) << endl;
    //.............................statically................................
    // h1.setHealth(45);
    // h1.setLevel('s');
    // // h1.health=98;
    // // h1.level='s';
    // // cout << "Health is: " << h1.health << endl;
    // // cout << "Level is: " << h1.level << endl;
    // cout<<h1.getHealth()<<endl;
    // cout<<h1.getLevel()<<endl;
    //............................Dymanically.................................
    hero * h=new hero;
     h->setHealth(45);
    h->setLevel('s');
    cout << "Health is: " << h->health << endl;
    cout << "Level is: " << h->level << endl;
    */

    /* hero ramesh(65,'R'); // statically
     cout<<ramesh.getHealth()<<" Address of ramesh: "<<&ramesh<<endl;
     cout<<ramesh.getLevel()<<endl;
     cout<<endl;
         hero * hh=new hero(67,'i');//Dynamically
         cout<<hh->getHealth()<<endl;
         cout<<hh->getLevel(); */

    /* hero sur(34, 'g');
     hero r(sur);
     r.print(); */
    // hero hero1;
    // hero1.setHealth(889);
    // hero1.setLevel('B');
    // char name[7] = "Sukesh";
    // hero1.setName(name);
    // // hero1.print();
    // // Shallow copy and Deep copy
    // hero hero2(hero1);
    // // hero2.print();
    // hero1.name[0] = 'M';
    // hero1.print();
    // hero2.print();
    // hero1=hero2;
    // cout<<"After Assignment operator"<<endl;
    // hero1.print();
    // hero2.print();
    // hero a;
    // hero *b=new hero;
    // delete b;
    cout<<hero:: timeToComp<<endl;
    cout<<hero:: random()<<endl;
    return 0;
}