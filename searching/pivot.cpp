#include <iostream>
using namespace std;
int pivot(int arr[]) {
    int s=0,mid,e=7-1;
    
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
            break;
      
        }
        
    }
    return s;
}
int main(){
    int arr[7]={4, 7, 6, 7, 1, 2, 3};
    int a=pivot(arr);
    cout<<a;


    return 0;
}