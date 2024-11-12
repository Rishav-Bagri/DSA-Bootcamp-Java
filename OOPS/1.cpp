#include <iostream>
#include <string.h>
#include "hero.cpp"
using namespace std;

class Hero{

    public:
    int health;
    char level;
    char *name;
    static int time;
    

    // contructor
    Hero(){
        cout << "const called" << endl;
        name= new char[100];
    }

    //parameter wala constructor
    Hero(int health){
        this -> health = health;
    }
    Hero(int health,char level){
        this -> health = health;
        this -> level = level;
    }

    // copying constructor
    Hero(Hero& temp){

        //deep copy as default is shalllow copy
        char * ch = new char[strlen(temp.name)+1];
        strcpy(ch , temp.name);
        
        this -> name  = ch;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout << name << " , ";
        cout << health << " , ";
        cout << level << endl;
    }

    //getter
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    //setter
    void sethealth(int h){
        health =h;
    }

    void setlevel(char ch){
        level=ch;
    }

    void setname(char temp[]){
        strcpy(this -> name , temp);
    }

    static int random(){
        cout<< Hero :: time <<" }"<<endl;
    }

    //destructor
    ~Hero(){
        cout << "desrructor called" << endl;
    }
};

int Hero :: time =5;

int main(){
    
    // static
    // Hero dewang;
    Hero dewang;
    dewang.sethealth(70);
    dewang.setlevel('D');
    char name[7]="rishav";

    cout<<dewang.time<<endl;
    cout<<Hero::time<<endl;
    Hero::random();







    // dewang.setname(name);
    // dewang.print();

    // //copy class
    // Hero anant(dewang);
    // anant.print();

    // dewang.name[0]='k';
    // dewang.print();
    // anant.print();

    // dewang=anant;
    // dewang.print();
    // anant.print();
    // cout << sizeof(h1) << endl;


    // dewang.health = 70;
    // dewang.level  = 'B';


    // cout << "health of dewang : " << dewang.health << endl;
    // cout << "level of dewang : "  << dewang.level << endl;
    
    // dewang.sethealth(70) ;
    // dewang.setlevel('B') ;


    // cout << "health of dewang : " << dewang.gethealth() << endl;
    // cout << "level of dewang : "  << dewang.getlevel() << endl;

    return 0;
}