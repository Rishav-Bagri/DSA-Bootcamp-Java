#include <iostream>
using namespace std;

class test{
    int a;
    int b;
    int c;

    public:
        test(int i,int j,int k) :a(i),b(c+j),c(k){
            cout << "constructor executed : "<<a<<" "<<b<<" "<<c;
        }
};

int main(){
    test t(2,3,4);

    return 0;
}