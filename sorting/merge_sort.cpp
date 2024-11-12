#include <iostream>
#include <math.h>
using namespace std;

void merge(int *arr ,int s,int mid,int e){

    int left1=mid-s+1;
    int right1=e-mid;


    int *left=new int[left1];
    int *right=new int[right1];

    int i=0,j=0,k=s;
    for ( ; i < left1; i++)
    {
        left[i]=arr[k++];
    }
    for ( ; j < right1; j++)
    {
        right[j]=arr[k++];
    }
    
    i=0,j=0,k=s;

    while (i<left1 && j<right1)
    {
        if (left[i]<right[j])
        {

            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
            
        }
        
    }
    while (i<left1)
    {
        arr[k++]=left[i++];
    }
    while (j<right1)
    {
        arr[k++]=right[j++];
    }

    delete [] left;
    delete [] right;
    

}

void m_s(int *arr,int s,int e){
    if (s>=e)
    {
        return ;
    }
    
    int mid=(s+e)/2;

    m_s(arr,s,mid);
    m_s(arr,mid+1,e);

    merge(arr,s,mid,e);

}

int main(){

    int num[100]={43,12,87,56,29,64,38,91,77,15,68,5,42,79,50,33,60,24,71,9,46,82,19,93,62,35,78,52,27,74,3,98,55,16,80,37,70,11,45,88,1,54,23,67,96,30,81,48,7,89,41,99,75,21,44,8,53,95,39,76,14,69,47,10,73,18,91,86,51,28,63,36,83,6,92,17,61,4,97,59,22,66,32,49,85,2,72,25,58,31,84,65,13,90,40,94,20,57,34,67};
    m_s(num,0,99);
    for (int i = 0; i<99;i++ )
    {
        cout<<num[i]<<" ";
    }
    
    

    return 0;
}