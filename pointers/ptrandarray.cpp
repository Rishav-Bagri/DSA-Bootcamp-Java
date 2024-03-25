#include <iostream>
using namespace std;
int main(){
    int arr[10]={20,60,45,5,511,65,165,16,1,15};

    /*
    cout<<"the adress of ptr arr[0] is "<<arr<<endl;
    cout<<"the adress of ptr arr[0] is "<<&arr[0]<<endl;

    cout << "*arr -       " << *arr      << endl;
    cout << "*&arr[0] -   " << *&arr[0]  << endl;
    cout << "*arr+1 -     " << *arr+1    << endl;
    cout << "*(arr+1) -   " << *(arr+1)  << endl;
    cout << "*(arr)+1 -   " << *(arr)+1  << endl;



    cout << "2[arr] -     " << 2[arr]    << endl;
    cout << "5[arr] -     " << 5[arr]    << endl;
    */

   /*
    int *p=&arr[0];
    cout << "sizeof(arr) -     " << sizeof(arr)    << endl;
    cout << "sizeof(arr) -     " << sizeof(p)    << endl;
    */

    int *p=&arr[0];
    cout << p <<endl;
    p=p+1;
    cout << p <<endl;

    


    return 0;
}