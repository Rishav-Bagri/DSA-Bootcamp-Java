#include <iostream>
using namespace std;
int max(int arr[],int size){
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }        
    }
    return max;    
}
int min(int arr[],int size){
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    return min;    
}
int main(){
    int size;
    cin>>size;
    int first[100];
    for (int i = 0; i < size; i++)
    {
        cin>>first[i];
    }
    cout<<"the max is "<<max(first,size)<<endl;
    cout<<"the min is "<<min(first,size)<<endl;

    return 0;
}