#include <iostream>
using namespace std;

// encapsulation is nothing but making members private to be secure from accessing it

class student{
    string name;
    int age ;
    int height;

    public:
        int getage(){
            return this -> age;
        }
};

int main(){
    student first;

    cout<<"sahi"<<endl;

    return 0;
}