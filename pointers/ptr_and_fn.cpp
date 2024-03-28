#include <iostream>
using namespace std;


void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    *p=*p+1;

    // *p++; //this will first increment in memory then dereference
    // cout << "inside " << *p <<endl;
}

int getsum(int arr[],int n){
    int sum=0;
    cout << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int getSum(int *arr,int n){
    int sum=0;
    cout << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main(){
    
    int num=5;
    
    int *ptr=&num;

    int arr[5]={1,2,3,4,5};

    // cout << "before " << *ptr <<endl;
    
    // update(ptr);

    // cout << "after " << *ptr <<endl;

    // cout << getsum(arr,5) <<"   " << getSum(arr,5)<< endl;





    return 0;
}