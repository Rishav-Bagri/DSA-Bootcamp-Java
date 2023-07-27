#include <iostream>
using namespace std;
int main(){

    int money,sau,bees,ek;
    cin>>money;
    switch (1) {
    case 1:
        sau=money/100;
        money=money-(sau*100);
    case 2:
        bees=money/20;
        money=money-(bees*20);

    case 3:
        ek=money/1;
        money=money-(ek*1);
        cout<<"sau k "<<sau<<" note"<<endl<<"bees k "<<bees<<" note"<<endl<<"ek k "<<ek<<" note";
 
    }    



    return 0;
}