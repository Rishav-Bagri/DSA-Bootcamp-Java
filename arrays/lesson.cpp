#include <iostream>
using namespace std;

void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){

    // #Initialization of a normal array with one default value in C++
    int c[10]={5};
    for (int i = 0; i < 10; i++)
    {
        c[i]=5;
        // cout<<c[i]<<" ";
    }
    // printArr(c,10);
    int sizec= sizeof(c)/sizeof(int);
    cout<<sizec;

    

    return 0;
}