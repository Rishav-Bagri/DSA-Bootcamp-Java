#include <iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int left=2*i;
    int right =2*i+1;
    int largest=i;

    if(left<=n&&arr[largest]<arr[left]){
        largest=left;
    }
    if(right<=n&&arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void makeHeap(int arr[],int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }    
}

int main(){
    int arr[10]={-1,55,52,53,54,50,100,2,200};
    makeHeap(arr,8);

    for(int i=1;i<9;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}