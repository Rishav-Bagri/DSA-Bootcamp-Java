#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans=0;
    for(int i= 0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
// int unique(int arr[],int size){
//     int a=0;
//     while (a!=size)
//     {
//         int count=0;
//         for (int i = 0; i < size; i++)
//         {            
//             if (arr[a]==arr[i])
//             {
//                 count++;
//             }
//             if (count==2)
//             {
//                 break;
//             }                       
//         }
//         if (count==1)
//         {
//             return arr[a];
//             break;
//         }
        
//         a++;
        
//     }
    
// }
int main(){
    int arr[15]={2,3,5,2,3,5,6,8,8,6,9,7,7,9,69};
    // int arr[5]={2,3,5,2,3};

    int a=findUnique(arr,15);
    cout<<a;
    return 0;
}