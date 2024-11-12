#include <iostream>
using namespace std;
int factorial(int n){
    if(n==1||n==0)return n;
    return factorial(n-1)*n;
}

int power(int x,int n){
    if (n==0)
    {
        return 1;
    }
    return power(x,n-1)*x;
}

void counting(int n){
    
    if (n==1)
    {
        cout<<n<<" ";
    }else
    {
        counting(n-1);
        cout<<n<<" ";
    }
    
    

    
}

int fibonacci(int n){
    if (n==2 || n==1)
    {
        
        return n-1;
    }
    
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int reverse(int n) {
    static int reversedNum = 0; // Static variable to store the reversed number

    if (n == 0) {
        return 0; // Base case: If the number is 0, return 0
    }

    reversedNum = reversedNum * 10 + n % 10; // Build the reversed number
    reverse(n / 10); // Recursive call with the remaining digits

    return reversedNum;
}

void sayno(int n){
    int a;
    string word;
    if (!(n>0))
    {
        return ;
    }
    
    switch (n%10) {
        case 0:
            word = "Zero ";
            break;
        case 1:
            word = "One ";
            break;
        case 2:
            word = "Two ";
            break;
        case 3:
            word = "Three ";
            break;
        case 4:
            word = "Four ";
            break;
        case 5:
            word = "Five ";
            break;
        case 6:
            word = "Six ";
            break;
        case 7:
            word = "Seven ";
            break;
        case 8:
            word = "Eight " ;
            break;
        case 9:
            word = "Nine ";
            break;
        
    }
    sayno(n/10);
    cout<<word<<" ";

}

int main(){
    
    // int f=factorial(5);
    // cout << f << endl;

    // cout<< power(2,29);

    // counting(10);
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<fibonacci(i)<<" ";
    // }

    sayno(9657);
    


    return 0;
}