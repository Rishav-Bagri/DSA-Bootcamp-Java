#include <iostream>
using namespace std;
int max_element(int arr[]){
    int m_i= 0;
    for (int i = 1; i < 26; i++)
    {
        if (arr[i]>arr[m_i])
        {
            m_i=i;
        }
        
    }
    return m_i;
    
}

char get_max_occ_char(string s){

    int arr[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        int num;
        if (s[i]<='z')
        {
            num=s[i]-'a';
        }
        else
        {
            num=s[i]-'Z';
        }
        arr[num]++;
        
    }
    return 'a'+max_element(arr);

    
}

void delimit(string s, char $){
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='$')
        {
            cout<<endl;
        }
        else
        {
            cout<<s[i];
        }
        
        
    }
    
}

void change_spaces(string s){
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==' ')
        {
            s.replace(i,1,"@40");// string_name.replace(the index to replace ,places t replace , "string to added")
            
        }
        cout<<s[i];
    }
    
}

string removeDuplicates(string s) {
    int i=0;
    while(s.length()!=0&&i<s.length()-1){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            cout<<s<<endl;
            i=-1;
        }
        i++;
    }
    return s;
}

string compress(string s){
    string ans;
    ans.push_back(s[0]);
    int count=1;
    for (int i = 1; i < s.length(); i++)
    {
        if (ans[ans.length()-1]==s[i])
        {
            count++;
        }
        else
        {
            string c;
            while (count>0)
            {
                
                c.push_back(count%10+'0');
                count=count/10;
            }
            int st=0,e=c.length()-1;
            while (st<=e)
            {
                swap(c[st],c[e]);
                st++;
                e--;
            }
            
            ans+=c;
            count=1;
            ans.push_back(s[i]);
        }
    }
    ans.push_back(count+'0');
    for(int i=0;i<ans.length();i++){
        s[i]=ans[i];

    }
    return ans;
    
}

int main(){
    char a[50];
    string s,s2;
    // cin>>s;

    char b;
    cout<<"enter string"<<endl;
    // getline(cin,s2,','); //same as cin but to get string with spaces.
    // b=get_max_occ_char(s);  
    // cout<<s<<endl<<s2;
    // cout<<"before delimit"<<s2<<endl;
    
    // cout<<"after delimit"<<endl;
    // delimit(s2,'$');
    cin.getline(a,10);
    
    cout<<endl<<a;


    return 0;
}