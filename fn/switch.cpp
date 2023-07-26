// #mini calculator

#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"insert two numbers and a operator '+','-','*','/' that u wanna use"<<endl;
    cin>>a>>b>>op;

    switch (op)
    {
    case '/':
        cout<<a/b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '+':
        cout<<a+b;
        break;
    
    default:
        cout<<"use a real operator '+','-','*','/' ";
        break;
    }

    return 0;
}