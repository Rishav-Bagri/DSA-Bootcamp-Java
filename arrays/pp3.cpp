#include <iostream>
using namespace std;
int main(){
    int arr[10]={1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    int i=0,j=10-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
   
        while(arr[j]==2 && j>i){
            j--;
        }
        while(arr[j]==1 && j>i){
            j--;
        }
        if (arr[i] != 0 && arr[j] != 1 && i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        for (int i = 0; i < 10; i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
    i=0,j=10-1;
    while(i<j){
        while (arr[i]==0)
        {
            i++;
        }
        
        while(arr[i]==1 && i<j){
            i++;
        }
   
        while(arr[j]==2 && j>i){
            j--;
        }
        if (arr[i] != 1 && arr[j] != 2 && i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        for (int i = 0; i < 10; i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<"  ";
    }
    

    return 0;
}