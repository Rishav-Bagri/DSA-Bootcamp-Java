#include <stdio.h>
class Queue {
    int *arr;
    int front1;
    int rear;
    int size ;
public:
    Queue() {
        size=5001;
        arr=new int[size];
        front1 =rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(front1 == rear)return 1;
        return 0;
    }

    void enqueue(int data) {
        if(rear==size-1){return;}
        arr[rear++]=data;
    }

    int dequeue() {
        if(front1 == rear){
            return -1;
        }
        int popped=arr[front1++];

        if(front1 == rear)front1 =rear=0;
        return popped;
    }

    int front() {
        if(front1==rear)return -1;
        return arr[front1];
    }
};
int main(){
    return 0;
}