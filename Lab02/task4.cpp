#include <iostream>
using namespace std;
int main(){
    int rows,cols;
//Validating rows and columns
    cout<<"Enter number of students : ";
    cin>>rows;
   while(rows<=0){
    cout<<"Enter valid number of rows : ";
    cin>>rows;
   }

    cout<<"Enter number of subjects : ";
    cin>>cols;
    while(cols<=0){
    cout<<"Enter valid number of columns : ";
    cin>>cols;
   }

//Allocating array of pointers
    int** marks= new int*[rows];
//Allocating rows of data
    for(int i=0;i<rows;i++){
        marks[i]=new int[cols];
    }

    
for(int i=0;i<rows;i++){
    cout<<"Enter marks for Student "<<(i+1)<<" : ";
    for(int j=0;j<cols;j++){
            int score;
            cin>>score;
            if(score<0 || score>100){
                cout<<"Enter valid marks(0-100) : ";
                j--;
            }
            else{
                *(*(marks+i)+j)=score;
            }
            
        }
    }

for(int i=0;i<rows;i++){
     cout<<" Student "<<(i+1)<<" : { ";
     for(int j=0;j<cols;j++){
           cout<<*(*(marks+i)+j)<<" ";   
        }
    cout<<"}"<<endl;
    }
cout<<endl;

//Find student with maximum total of marks
int maxTotal=0,highAchiever=0;
for(int i=0;i<rows;i++){

    int total=0;
    cout<<"Student-"<<(i+1)<<" total : ";

    for(int j=0;j<cols;j++){
        total+=*(*(marks+i)+j);
    }
    cout<<total;
    if(total>maxTotal){
        maxTotal=total;
        highAchiever=(i+1);
    }
    cout<<endl;

}
cout<<"Student "<<highAchiever<<" has highest total : "<<maxTotal;

//Dellocating rows of data
for(int i=0;i<rows;i++){
    delete[] marks[i];
    marks[i]=nullptr;
}
//Dellocating row-pointer array
delete[] marks;
marks=nullptr;


}