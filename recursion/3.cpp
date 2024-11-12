#include <iostream>
#include <math.h>
using namespace std;



int is_sorted(int arr[],int n){
    if (n==1)
    {
        return 1;
    }
    
    return is_sorted(arr,n-1)&&(arr[n-2]<arr[n-1]);
}

int sum(int arr[],int n){
    if (n==0)
    {
        return 0;
    }
    return sum(arr,n-1)+arr[n-1];
    
}

int linear_search(int *arr,int size,int key){
    if (size==0)
    {
        return 0;
    }
    
    if (arr[0]==key)
    {
        return 1;
    }
    return (linear_search(arr+1,size-1,key));
    
}

int b_s(int *arr,int st,int e,int key){
    
    int mid=(st+e)/2;
    if (st>e)
    {
        return 0;
    }
    
    if (arr[mid]==key)
    {
        return 1;
    }
    else if (arr[mid]>key)
    {
        return b_s(arr,st,mid-1,key);
    }
    else if (arr[mid]<key)
    {
        return b_s(arr,mid+1,e,key);
    }
    
    
}

char isupper(string& s,int i=0){
    if (s[i]=='\0')
    {
        return 0;
    }
    if (s[i]>='A'&&s[i]<='Z')
    {
        return s[i];
    }else
    {
        
    }
    return isupper(s,i+1);
    
}

int string_length(char* p){
    
    if (*p=='\0')
    {
        return 0;cout<<p;
    }
    return 1+string_length(p+1);
    
}

int sum_digits(int n){
    if (n==0)
    {
        return 0;
    }
    return n%10 + sum_digits(n/10);
    
}

int pro_digits(int n){
    if (n==0)
    {
        return 1;
    }
    return n%10 * pro_digits(n/10);
    
}

int isprime(int n,int i=2){
    if (n<=2)
    {
        return (n==2)?1:0;
    }

    if (n%i==0)
    {
        return 0;
    }
    
    if (i*i>n)
    {
        return 1;
    }
    
    
    return isprime(n,i+1);
    
    
    
    

    
}

int sum_of_natural_nos(int n){
    if (n==0)
    {
        return 0;
    }
    return n+sum_of_natural_nos(n-1);
    
}

void consecutive_duplicates(char*s){
    if(s[0]=='\0')return;
    if (s[0]==s[1])
    {
        for (int i = 0; s[i]!='\0'; i++)
        {
            s[i]=s[i+1];
        }
        consecutive_duplicates(s);
        
    }
    consecutive_duplicates(s+1);
    
}

int main(){
    int arr[5]={1,2,3,4,5};
    int b;
    string s= "geeks for geeeeeeks   KJKJKJJJJ";
    // getline(cin,s);

    consecutive_duplicates(&s[0]);
    cout<<s;
    // b=b_s(arr,0,4,1);
    // cout<<sum_of_natural_nos(5);
    // cout<<string_length(&s[0]);
    // cout<<b;
    return 0;
}