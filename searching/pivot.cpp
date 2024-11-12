#include <iostream>
using namespace std;
int pivot(int arr[]) {
    int s=0,mid,e=6-1;
    
    while(s<=e){
        mid=(s+e)/2;
        if (arr[0] > arr[mid]) {
                e=mid;
        }
        if (arr[0] < arr[mid]){
            s=mid+1;
        }
        if (arr[s] == arr[mid]) {
            s=mid;
            return s;
      
        }
        
    }
    return -1;
    
}
int main(){
    int arr[6]={4,5,0,1,2,3};
    int a=pivot(arr);
    cout<<a;


    return 0;
}