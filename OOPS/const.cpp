#include <iostream>
using namespace std;

int main(){
    int a=9,b=10;

    //cant change *i
    const int*  i=&a;


    // cant change i
    int* const i=&a;



    //  cant change either i & *i
    const int* const i=&a;

      

    return 0;
}