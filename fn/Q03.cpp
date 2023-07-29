// #A person is eligible to vote if his/her age is greater than or equal to 18. Define a method to find out if he/she is eligible to vote.
#include <iostream>
using namespace std;
bool vote_age(int n){
    if (n>=18)
    {
        return true;
    }
    else
    {
        return 0;
    }
    
}
int main(){
    int age ;
    cin>>age;
    cout<<"The number of chances for vote is "<<vote_age(age);

    return 0;
}