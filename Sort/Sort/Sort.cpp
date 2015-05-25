//  Insertion Sort
//
//  Copyright (c) 2015 Steven Vargas. All rights reserved.
//


#include <iostream>
using namespace std;

int InsertionSort( int x[], int &n)
{
    int temp=0, i=0;
    for (int j=0;  j<n; j++)
    {
        do{
            temp=x[j];
            i=j-1;
        }
        while (i>0 && x[j]>temp);
        
        do{
            x[i+1]=x[i];
            i=i-1;
            x[i+1]=temp;
        }
        while (temp<n);
        return temp;
    }
}


int main (){
    int m;
    cout<< "Please enter you array size"<<endl;
    cin>> m;
    int* a= new int[m];
    for(int i=0; i<m;i++){
        cout<< "Please fill in array"<<endl;
        cin>>a[i];
    }
    cout<<"Array is:"  <<InsertionSort(a,m)<<endl;
    
    system("pause");
}