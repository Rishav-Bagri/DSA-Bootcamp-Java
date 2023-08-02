#include <iostream>
using namespace std;
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }    
}
void reverse_alt(int arr[], int size){

    for (int i = 0; i < size; )
    {
        if (i+1>=size)
        {
            break;
        }        
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    reverse_alt(arr,size);
    print(arr,size);

    return 0;
}