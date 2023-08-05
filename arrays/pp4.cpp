#include <iostream>
using namespace std;
void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr1[2]={1,2};
    int arr2[2]={3,4};
    int arr3[2]={arr1[2],arr2[2]};
    printArr(arr3,2);

    return 0;
}