#include <iostream>
using namespace std;

void sum_triangle(int* arr,int n){
    if (n==0)
    {
        return ;
    }
    int temp[n-1];
    for (int i = 0; i < n-1; i++)
    {
        temp[i]=arr[i]+arr[i+1];
    }
    
    sum_triangle(temp,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

int min_array(int* arr,int n){
    if (n==0)
    {
        return *arr;
    }
    return min(arr[n-1],min_array(arr,n-1));
}

int max_array(int* arr,int n){
    
    
    if (n==0)
    {
        return *arr;
    }
    return max(arr[n-1],max_array(arr,n-1));

    
}

int main(){
    
    int arr[5]={5,22,3,4,1};

    // sum_triangle(arr,5);
    int min,max;
    min=min_array(arr,5);
    max=max_array(arr,5);

    cout<<min<<" "<<max;
    
    return 0;
}