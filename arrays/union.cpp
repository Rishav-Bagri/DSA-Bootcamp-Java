#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={1,2,3};
    vector<int> a;
    vector<int> b;
    for(int i=0;i<5;i++){
        a.push_back(arr1[i]);
    }
    for(int i=0;i<3;i++){
        a.push_back(arr2[i]);
    }
    sort(a.begin(), a.end());
    b.push_back(a[0]);
    for(int i=1;i<a.size();i++){
        if(a[i-1]==a[i]){
            continue;
        }
        else{
            b.push_back(a[i]);
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<" ";
    }
}