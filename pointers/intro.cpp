#include <iostream>
using namespace std;
int main(){
    int num=5;
    cout<<"num : "<<num<<endl;
    cout<<"address of num : "<<&num<<endl;

    int *ptr=&num;
    cout <<"ptr is : "<<ptr<<endl;
    cout <<"*ptr is : "<<*ptr<<endl;

    char ch='l';
    char *p2=&ch;
    cout <<"sizeof ptr is : "<<sizeof(p2)<<endl;
    
    double d=3.14;
    double *p3=&d;
    cout<<"p3 : "<<d<<endl;
    cout<<"address of p3 : "<<&d<<endl;    
    cout <<"ptr is : "<<p3<<endl;
    cout <<"*ptr is : "<<*p3<<endl;    
    cout <<"sizeof ptr is : "<<sizeof(p3)<<endl;

    return 0;
}