#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n-1; i++){
        int c=0;
        for(int j=0; j<n-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                c++;
            }
        }
        if (c==0)
        {
            break;
        }
        
    }
}
int main(){
    

    return 0;
}