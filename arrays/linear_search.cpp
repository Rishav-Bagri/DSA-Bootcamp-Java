#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
            break;
        }
        
    }
    return 0;
    
}
int main(){
    int arr[10]={45,17,65,66,61,46,43,47,95,16};
    int key;
    cin>>key;
    bool found =search(arr,10,key);
    if (found)
    {
        cout<<"key is present";
    }
    else
    {
        cout<<"key is absent";
    }
    
    

    return 0;
}