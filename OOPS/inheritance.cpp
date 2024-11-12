#include <iostream>
using namespace std;

class human
{
    public:
        int height;
        int weight;
        int age;

        int getage(){
            return this -> age;
        }
};
//inherit all public member in parent class(human) tO child class(male)
class male : public human{
    public: 
        string color;

    void sleep(){
        cout<<"male folk is sleeping"<<endl;
    }    
};

//protected act as a private for child class and can be accessed by child class whereas private doesnt get accessed

class female : protected human{
    public:
    int getage(){
        return this-> age;
    }
};
// class female : private human{
//     public:
//     int getheight(){
//         return this-> height; //compile error
//     }
// };



//single inheritance
class animal{
    public:
    int x;

    void speak(){
        cout << "speaking" <<endl;
    }
};

class dog : public animal{

};

//multilevel inheritence =this +above 3 layer so multi
class pug :public dog{
    
};


// multiple inheritance- when a class c inherit 2 class say a and b
class a{
    public:
        int x;
        void do1(){
            cout<<"did one"<<endl;
        }
};
class b{
    public:
        int y;
        void do2(){
            cout << " did two "<<endl;
        }
};
class c : public a,public b{
    
};

//hierarichal inheritance- its like family tree of inheritance
//        Animal
//       /  |   \
//      /   |    \
//    Dog   Cat  Bird


// hybrid inheritance - combination of more than one type of inheritance



//inheritance ambiguity - multiple inheritance but same fn name
class a1{
    public:
        int x;
        void doe(){
            cout<<"a1 is here"<<endl;
        }
};
class b1{
    public:
        int y;
        void doe(){
            cout << "b1 is here"<<endl;
        }
};
class c1 : public a1,public b1{
    
};

int main(){

    c1 d;
    d.a1::doe();
    d.b1::doe();




    // male object1;
    // female object2;
    // // cout << object1.age <<endl;
    // // cout << object1.weight <<endl;
    // // cout << object1.height <<endl;
    // // cout << object1.color <<endl;
    // // cout << sizeof(object1) <<endl;
    // // object1.sleep();
    // cout<< object2.getage()<<endl;    

    return 0;
}