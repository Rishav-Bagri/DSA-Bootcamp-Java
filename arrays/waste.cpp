#include <iostream>
#include <vector>
using namespace std;

int plusOne(int digits[]) {
        vector<int> v;
        int num=0;
        if(digits[4-1]<9){
            v.insert(v.begin(),1+ digits[4-1]);
            for(int i= 4-2;i>=0;i--){
                v.insert(v.begin(), digits[i]);
            }
        }   
        int j=2;

        if (digits[4 - 1] == 9) {
            v.insert(v.begin(), 0);
            for(int k=4-2;k>0;k--) {
                if (digits[k] != 9){
                    j++;
                    break;
                }
                v.push_back(0);
            }
            
            int c=4 - j;
        
            int a=digits[c]+1;
            v.insert(v.begin(), a);
            // reverse(v.begin(), v.end());
            j++;
            for(int i= 4-j-1;i>=0;i--){
                v.insert(v.begin(), digits[i]);
                j++;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            cout<<v[i]<<" ";
        }
        return 0;
}    
int main(){
    int arr[4]={4,4,2,1};
    plusOne(arr);

    return 0;
}