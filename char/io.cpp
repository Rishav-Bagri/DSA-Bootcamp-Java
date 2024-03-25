#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int size_of_char_array(char ch[],int n){
    int i;
    for (i = 0; i < n; i++)
    {
        if(ch[i]== '\0') break;
    }
    return i;
}

void reverse_string(char ch[],int s,int e){
    while (s<=e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    
}

bool checkPalindrome(char s[],int n)
{
    int st=0,e=n-1;
    while(st<e){
        
        if(!((s[st]>='a' && s[st]<='z')||(s[st]>='A' && s[st]<='Z') ||(s[st]>='0' && s[st]<='9'))|| s[st]==' '){
            st++;
            continue;
        }
        if(!((s[e]>='a' && s[e]<='z')||(s[e]>='A' && s[e]<='Z') ||(s[e]>='0' && s[e]<='9'))|| s[e]==' '){
            e--;
            continue;
        }
        if(s[st]!=s[e] && s[st]!=(s[e]+32) && s[st]!=(s[e]-32) ) return false;
        st++;
        e--;
    }
    return true;
}
int main(){
    int n;
    cout<<"size of string"<<endl;
    
    cin>>n;
    char ch[n];
    cout<<"enter string"<<endl;
    
    cin>>ch;
    // int b=checkPalindrome(ch,n);
    cout<<ch<<endl;
    // cout<<b<<endl;
    
    
    

    return 0;
}