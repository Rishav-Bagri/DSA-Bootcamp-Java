#include <iostream>
using namespace std;
int main(){
    int arr[5]={12,24,36,48,60};
    char ch[6]="abcde";

    // cout<< arr <<endl;
    // cout<< ch  <<endl;

    // int *ptr=&arr[0];
    // char *c=&ch[0];

    // cout << ptr <<endl;
    // cout << c <<endl; //Prints entire string.
    
    char temp='z';
    char temp2='a';
    
    char *c1=&temp;
    char *c2=&temp2;
    cout << c1 << endl;
    cout << c2 << endl;

    return 0;
}