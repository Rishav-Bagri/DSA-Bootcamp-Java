#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(int arr[],int n){
    
    for (int i = 0; i < n-1; i++)
    {
        bool sort=1;
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                sort=0;
            }
            
        }
        if (sort)
        {
            break;
        }
        
        
    }
    
}
void SelectionSort(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
        int Min_idx=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[Min_idx])
            {
                Min_idx=j;
            }
            
        }
        swap(arr[Min_idx],arr[i]);
        
    }
    
}

void InsertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int j=i-1;
        int temp=arr[i];
        while (j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;   
        }
        arr[j+1]=temp;
        
    }
    
}
int Q(int nums[],int n){
    for(int i=0;i<3;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
        if(n<3){
            return nums[(n+1)%2];
        }
    }
    return nums[n-3];
}
int thirdMax(int nums[]) {
    // int n=nums.size();
    
    for(int i=0;i<3-1;i++){
        for(int j=0;j<3-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<nums[i]<<"  ";
    }
    int c=0;
    int k=2;
    for(;c<3 && k>0  ;k--){
        
        while(1){
            if(nums[k-1]<nums[k]){
                break;
            }
            k--;
            // cout<<" "<<k;
        }
        c++;
        // cout<<" "<<k;
    }
    if(c==2){
        return nums[k];
    }
    return nums[3-1];
}
int main(){
    int a[4]={2,2,3,1};
    int c[7]={3 , 2 , 1 , 1 , 2 , 3,  1};
    BubbleSort(c,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<c[i]<<"  ";
    }
    
    // int b=thirdMax(c);
    
    // int b=Q(a,3);
    // cout<<b;
    // // InsertionSort(a,4);
    
    // for(int k=4;k>=0;k--){
            
    //     // while(nums[k-1]==nums[k]&&k>0){
    //     //     k--;
    //     // }
    //     // c++;
    //     int c=1;
    //     cout<<c++;
        
    // }
    


    return 0;
}