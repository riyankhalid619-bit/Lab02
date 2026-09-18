#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of students : ";
cin>>n;
//validating n(1-10)
while(n<1 || n>10){
    cout<<"Enter valid number of students(1-10) : ";
    cin>>n;
}

int* p=new int[n];
int* q=new int[n+1];

cout<<"Enter n-marks : ";
for(int i=0;i<n;i++){
    cin>>p[i];
}

for(int i=0;i<n;i++){
//using pointer approach instead of directly "q[i]=p[i]"
   *(q+i) = *(p+i);
}
cout<<"Enter marks of newly added student : ";
for(int i=n;i<n+1;i++){
    cin>>q[i];
}

delete[] p;
p=q;
q=NULL;

cout<<"Marks after addition of new student : ";
for(int i=0;i<n+1;i++){
    cout<<p[i]<<" ";
}

return 0;
}