#include <iostream>
#include "hero.cpp"
using namespace std;

class Hero{

    public:

    Hero (){
        cout << "cont called" <<endl;
    }

    int health;
    char level;

    //destructor
    ~Hero(){
        cout << "desrructor called" << endl;
    }

};

int main(){
    
   //dynamically
    Hero *h = new Hero;

    h->health=70;
    h->level='A';

    cout << h->health <<endl;
    cout << h->level <<endl;

    delete h;

    return 0;
}