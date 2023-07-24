#include <iostream>
using namespace std;
int main(){;
  int i, n ,b,c;
  cin>>n;
  b=1;
  c=b;
  i=b;
  while (c<=n)
  {
    int a;

    a=n%i;

    if (a==0)
    {
      cout<<i<<" ";
    }
    i=i+1;
    c=c+1;
  }
  


  return 0;
}

