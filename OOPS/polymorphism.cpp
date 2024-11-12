#include <iostream>
using namespace std;

//compile time polymorphism

// .. fn overloading
class a{
    public:
        void sayhello(){cout<<"hello"<<endl;}
        int sayhello(int i){cout<<"hello "<<i<<endl;}
        void sayhello(string name){cout<<"hello "<<name<<endl;}
};


int add(int a,int b){return a+b;}
double add(double a,double b){return a+b;}
int add(int a,int b,int c){return a+b+c;}
// int add(int a,int b,int c=0,int d=0){return a+b+c+d;}

//.. operator overloading- study later

//runtime polymmorphism
class animal{
    public:
    void say(){
        cout<<"speaking"<<endl;
    }

};
class dog : public animal{
    public:
    void say(){
        cout<<"barking"<<endl;
    }

};


int main(){
    
    dog ab;
    ab.say();

    // a b;
    // b.sayhello();
    // b.sayhello(45);
    // b.sayhello("rishav");

    // cout<<add(2,3)<<endl;
    // cout<<add(2,3,5)<<endl;
    // cout<<add(2.3,2.5)<<endl;
    // add(2,5,6,1);


    return 0;
}