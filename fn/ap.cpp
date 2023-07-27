#include <iostream>
using namespace std;

int AP(int n){
    int ap=3*n+7;
    return ap;
}
int main(){
    int n;
    cin>>n;
    cout<<AP(n);

    return 0;
}