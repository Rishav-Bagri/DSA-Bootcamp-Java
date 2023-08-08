#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
    int arr[55]={65,55,58,41,35,1, 23, 45, 67, 89, 101, 345, 789, 567, 908, 234, 876, 543, 210, 987, 654, 321, 123, 456, 789, 987, 654, 321, 234, 567, 890, 123, 345, 678, 910, 111, 222, 333, 444, 555, 666, 777, 888, 999, 1234, 5678, 9012, 3456, 7890, 2345, 6789, 9012, 3456, 7890, 12345};
    int mid,s=0,e=55-1,key;
    sort(arr , arr + 55);
    cout<<"enter the key ";
    cin>>key;
    for (int i = 0; i < 55; i++)
    {
        mid=(s+e)/2;
        if (arr[mid]==key)
        {
            cout<<"key present "<<mid<<" index";
            break;
        }
        if (s==e)
        {
            cout<<"key absent";
            break;
        }
        
        else
        {
            if (key>arr[mid])
            {
                s=mid+1;
            }
            if (key<arr[mid])
            {
                e=mid-1;
            }
            
        }
    
        
    }
     

    return 0;
}