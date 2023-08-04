#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,1,1};
    int size =5;
    // int size= arr.size();
    int mu[1000]={0};
    int ans =0;
    for(int i=0; i<size;i++){
        int count=0;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                // cout <<arr[i];
                count++;
        
            }
        }  
        for (int a = i; a < 1000; a++)
        {
            mu[a]=count;
        }
          
    }
    
    for (int b = 0; b < 1000; b++)
    {
        cout<<mu[b];
        // ans=ans^mu[b];
    }
    // if(ans==0){
    //     return 0;
    // }
    // else{
    //     return 1;
    // }
    return 0;
}