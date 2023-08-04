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
        for(int j=i;j<size;j++){
            for (int c = 0; c <= j; c++)
            {
                if (arr[c]==arr[j])
                {

                    if (c!=j)
                    {
                        break;
                    }
                }    
                if(arr[i]==arr[j]){
                    // cout <<arr[i];
                    count++;
            
                }
 
            }
            

        }
        mu[i]=count;
        // cout<<mu[i];
    }     
    for(int b=0;b<1000;b++){
        cout<<mu[b]<<"   ";
        // ans=ans^mu[b];
    }
    // cout<<ans;
    // if(ans==0){
    //     return 0;
    // }
    // else{
    //     return 1;
    // }

    return 0;
}