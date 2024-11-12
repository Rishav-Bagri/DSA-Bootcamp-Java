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
void heapSort(int arr[],int n){
    int t=n;
    while(t>1){
        swap(arr[1],arr[t]);
        t--;
        int i=1;
        heapify(arr,t,1);
    }
}

int main(){
    int arr[18]={-1,45, 67, 20, 89, 56, 32, 75, 91, 63, 22, 48, 39, 11, 80, 65, 50, 27};
    heapSort(arr,17);
    for(int i=1;i<18;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}