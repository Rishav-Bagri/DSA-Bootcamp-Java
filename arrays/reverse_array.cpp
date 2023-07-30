#include <iostream>
using namespace std;
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }    
}
void reverse(int arr[], int size){

    int nu[size];
    for (int i = 0; i < size; i++)
    {
        nu[i]=arr[size-i-1];
    }
    print(nu,size);

}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,size);

    return 0;
}