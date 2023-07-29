/*Write a program that will ask the user to enter his/her marks (out of 100). Define a method that will display grades according to the marks entered as below:

 
Marks        Grade 
91-100         AA 
81-90          AB 
71-80          BB 
61-70          BC 
51-60          CD 
41-50          DD 
<=40          Fail
*/
#include <iostream>
using namespace std;
void grade(int no){
    if (no>=91&&no<=100)
    {
        cout<<"AA";
    }
    else if (no>=81&&no<=90)
    {
        cout<<"AB";
    }
    else if (no>=71&&no<=80)
    {
        cout<<"BB";
    }
    else if (no>=61&&no<=70)
    {
        cout<<"BC";
    }
    else if (no>=51&&no<=60)
    {
        cout<<"CD";
    }
    else if (no>=41&&no<=50)
    {
        cout<<"DD";
    }
    else if (no<=40)
    {
        cout<<"fail";
    }
    
}
int main(){
    int marks;
    cin>>marks;
    grade(marks);

    return 0;
}