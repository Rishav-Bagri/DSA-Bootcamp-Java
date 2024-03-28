#include <iostream>
using namespace std;

int getSum(int *arr,int n){
    static int sum=0;
    for (int  i = 0; i < n; i++)
    {
        
        sum+=arr[i];
    }
    return sum;
}

int main(){


    
    int n;
    cin>>n;
    /* array
    //variable size aray
    int *arr = new int[n];

    // input in an array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //printing an array
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    cout<<endl<<getSum(arr,n);
    delete(arr);
    */


    // //2d array

    // //initialize
    // int ** matrix = new int * [n];
    // for (int i = 0; i < n; i++)
    // {
    //     matrix[i] = new int [n];
    // }
    
    // //taking input
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin>>matrix[i][j];
    //     }
        
    // }
    
    // //output
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //freeing memory
    // for (int i = 0; i < n; i++)
    // {
    //     matrix[i] = new int [n];
    //     delete [] matrix[i];
    // }
    
    // delete [] matrix;



    //jaggered array
    int **jA = new int * [n];

    int *size =new int [n];
    cout<<"input sizes of row"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>size[i];
        jA[i]= new int [(size[i])];
    }

    for (int i = 0; i < n; i++)
    {
        for(int j=0 ; j<size[i] ; j++){
            cin>>jA[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for(int j=0 ; j<size[i] ; j++){
            cout<<jA[i][j]<<" ";
        }
        cout<<endl;
    }


    // Free memory
    for (int i = 0; i < n; i++) {
        delete[] jA[i];
    }
    delete [] jA;
    delete [] size;




    return 0;
}