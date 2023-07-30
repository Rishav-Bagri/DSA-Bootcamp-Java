#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int size,sum=0;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
    

    return 0;
}