#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for ( int i=0; i<n-1; i++){
        int minI=i;
        for(int j=i+1; j<n; j++){
          if (arr[j] < arr[minI]) {
            minI = j;
            }
        }
        swap(arr[i],arr[minI]);
    }
}
int main(){
    

    return 0;
}