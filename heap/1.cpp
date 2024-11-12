#include <iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insertAtHeap(int x){
        size++;
        arr[size]=x;
        int i=size;
        while(i>1){
            int parent=i/2;
            if(arr[parent]<arr[i]){
                swap(arr[parent],arr[i]);
                i=parent;
            }
            else return;
        }
    }
    void deleteFromHeap(){
        swap(arr[size],arr[1]);
        size--;
        int i=1;
        while(i<=size){
            int left=2*i;
            int right=2*i+1;
            if(left<=size&&arr[left]>arr[right]&&arr[left]>arr[i]){
                swap(arr[left],arr[i]);
                i=left;

            }else if(right<=size&&arr[left]<arr[right]&&arr[right]>arr[i]){
                swap(arr[right],arr[i]);
                i=right;
            }
            else{
                return;
            }
        }
    }
    void printHeap(){
        cout<<endl;
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    heap h;
    h.insertAtHeap(4);
    h.insertAtHeap(1);
    h.insertAtHeap(3);
    h.insertAtHeap(7);
    h.insertAtHeap(6);
    h.insertAtHeap(8);
    h.insertAtHeap(0);
    h.insertAtHeap(10);
    h.insertAtHeap(23);
    h.insertAtHeap(20);
    h.insertAtHeap(9);
    h.printHeap();
    h.deleteFromHeap();
    h.deleteFromHeap();
    h.deleteFromHeap();
    h.deleteFromHeap();
    h.printHeap();

    return 0;
}