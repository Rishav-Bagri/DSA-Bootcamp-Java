#include <iostream>
using namespace std;

int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for (int i = s+1; i <= e; i++)
    {
        
        if (arr[i]<=pivot)
        {
            cnt++;
        }
    }

    int pivot_I=s+cnt;
    swap(arr[s],arr[pivot_I]);
    while (s<pivot_I && e>pivot_I)
    {
        
        while(arr[s]<=pivot){
            s++;
        }
        while (arr[e]>pivot)
        {
            e--;
        }
        if (s<pivot_I &&e>pivot_I)
        {
            swap(arr[s++],arr[e--]);
        }
        
        
        
        
        
    }
    return pivot_I;
    
}

void quick_sort(int *arr,int s ,int e){
    if (s>=e)
    {
        return;
    }
    int p=partition(arr,s,e);

    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);


    
}

int main(){
    int num[100]={43,12,87,56,29,64,38,91,77,15,68,5,42,79,50,33,60,24,71,9,46,82,19,93,62,35,78,52,27,74,3,98,55,16,80,37,70,11,45,88,1,54,23,67,96,30,81,48,7,89,41,99,75,21,44,8,53,95,39,76,14,69,47,10,73,18,91,86,51,28,63,36,83,6,92,17,61,4,97,59,22,66,32,49,85,2,72,25,58,31,84,65,13,90,40,94,20,57,34,67};
    int arr[10]={3,3,1,4,2,5,4,0,3,4};
    quick_sort(arr,0,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}