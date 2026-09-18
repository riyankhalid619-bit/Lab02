#include <iostream>
using namespace std;
int main(){
    int n=3;
    int* values = new int[n];
    cout<<"Enter values : ";
    for(int i=0;i<n;i++){
        cin>>values[i];
    }
cout<<"The values are : ";
    for(int i=0;i<n;i++){
        cout<<values[i]<<" ";
    }
    delete[] values;
    values=NULL;
return 0;

}