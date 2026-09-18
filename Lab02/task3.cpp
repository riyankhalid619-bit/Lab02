#include <iostream>
using namespace std;
int main(){
    int sales[2][3];
    int (*rowPtr)[3]=sales;

    int val;
cout<<"Enter non-negative values in a 2x3 grid for sales of each branch for 3-days : ";
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cin>>val;
            if(val<0){
                cout<<"Enter valid sales : ";
                c--;
            }
            else{
                *(*(rowPtr+r)+c)=val;
            }
        }
    }
    cout<<endl;

    cout<<"The sales for respective branch for 3 days are as follow : \n";
    cout<<"\t Day1 Day2 Day3\n";
    for(int r=0;r<2;r++){
       cout<< "BRANCH "<<(r+1)<<" :  ";
        for(int c=0;c<3;c++){
            cout<<*(*(rowPtr +r)+c)<<"  ";
        }
        cout<<"\n";
    }

    cout<<"\nTHE TOTAL SALES FOR EACH BRANCH ARE AS FOLLOW : \n";
for(int r=0;r<2;r++){
    int total=0;
    cout<<"Total sales of Branch "<<(r+1)<<" is : ";
     for(int c=0;c<3;c++){
        total+=*(*(rowPtr+r)+c);
        }
        cout<<total;
        cout<<endl;
    }


    cout<<"\nTHE TOTAL SALES FOR EACH DAY ARE AS FOLLOW : \n";
for(int c=0;c<3;c++){
    int total=0;
    cout<<"Total sales of Day "<<(c+1)<<" is : ";
     for(int r=0;r<2;r++){
        total+=*(*(rowPtr+r)+c);
        }
        cout<<total;
        cout<<endl;
    }
}