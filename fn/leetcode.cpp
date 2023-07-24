// #include <iostream>
// using namespace std;
// int main(){
//     int a,n,i,product=1,sum=0;
//     cin>>n;
//     i=n;

//     while(n>0){
//         a=n%10;
//         product=a*product;
//         n=n/10;

//     }
//     while(i>0){
//         a=i%10;
//         sum=a+sum;
//         i=i/10;
//         // cout<<sum;
//     }
//     int answer;
//     answer=product-sum;
//     cout<<answer;
    
// }  

// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int a,i,product=1,sum=0;
        
//         i=n;

//         while(n>0){
//             a=n%10;
//             product=a*product;
//             n=n/10;

//         }
//         while(i>0){
//             a=i%10;
//             sum=a+sum;
//             i=i/10;
//             // cout<<sum;
//         }
//         int answer;
//         answer=product-sum;
//         return answer;
//     }
// };
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a,count=1;
        for (int i = 0; i < n; i++)
        {
            a=n%10;
            n=n/10;
            if (a==1)
            {
                count++;
            }
            else
            {
                continue;
            }
            
            
        }
        return count;
        

        
    }
};

