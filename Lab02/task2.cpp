#include <iostream>
using namespace std;
int main(){
int n;

cout<<"Enter number of students in class : ";
cin>>n;
int size;
    if(n<=0){
    cout<<"Error; no allocation or mark input.";
    }
else{
size=n;
    
int* marks = new int[size];

int mark;
cout<<"Enter marks of students in range of 0-100 : ";
for(int i=0;i<size;i++){
    cin>>mark;
    if(mark <0 || mark >100){
        cout<<"Please eneter valid marks(0-100) : ";
        i--;
    }
    else{
        *(marks + i)= mark;
    }
}
cout<<endl;

cout<<"Marks of all the students are : {";
for(int i=0;i<size;i++){
   cout<< *(marks + i)<<" ";
}
cout<<"}\n";

int sum=0;
for(int i=0;i<size;i++){
  sum+=*(marks + i);
}

cout<<"---------------------------------";
cout<<"\nAVERAGE AND COUNT OF STUDENTS : ";
cout<<"\n---------------------------------\n";
float average= (float)sum/size;
cout<<"The average of all students marks are : "<<average;

int count=0;

for(int i=0;i<size;i++){
    if(*(marks+i)>=50){
    count++;
}
}
cout<<"\nPass students are : "<<count;

delete[] marks;
marks=nullptr;
}
    return 0;


}
