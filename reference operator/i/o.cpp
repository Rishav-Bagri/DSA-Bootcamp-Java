#include <iostream>
using namespace std;

int& fn(int a){
    int i=a;
    int& ans=i;
    return ans;
}
int* fn2(int a){
    int *ptr=&a;
    return ptr;
}
void update2(int n){
    n++;

}
void update(int& n){
    n++;

}

int main(){
    // int i=5;
    // int &j=i;
    // cout << i <<endl;
    // cout << ++j <<endl;
    // cout << i <<endl;
    // cout<< &i <<" " << &j;

    int i=5;
    update2(i);
    cout<<i<<endl;

    update(i);
    cout<<i;
    cout<<fn(3);
    cout<<fn2(5);

    return 0;
}