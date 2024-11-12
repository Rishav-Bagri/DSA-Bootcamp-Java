#include <iostream>
using namespace std;
int findAngle(int hour, int minute) {
    float min=(minute*360)/60;
    float hou=(hour*360)/12+min/12;
    float ans=(min-hou);
    if(ans>180){
        ans=360-ans;
    }
    return ans;
}
int main(){
    int h,m;
    cin>>h>>m;
    cout<<findAngle(h,m);

    return 0;
}