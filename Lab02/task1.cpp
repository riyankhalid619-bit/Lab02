#include <iostream>
using namespace std;
int main(){
    int sales[5];
    int* p = sales;

    cout<<"Enter sales of 5 days : ";
    for(int i=0;i<5;i++){
        cin>>*(p+i);
    }
    cout<<"\n";

       cout<<"The sales of 5 days are : { ";

     for(int i=0;i<5;i++){
        cout<<*(p+i)<<" ";
    }

    cout<<"}\n";

    int total=0;
     for(int i=0;i<5;i++){
        total+=*(p+i);
    }
cout<<"The total items sold over 5 days is : "<<total<<"\n";


*(p+2)+=2;
cout<<"The sales of five days after update in items of 3rd day are respectively : {";
 for(int i=0;i<5;i++){
        cout<<*(p+i)<<",";
    }
    cout<<"}\n";

    int sum=0;
  for(int i=0;i<5;i++){
        sum+=*(p+i);
    }
cout<<"The total items sold over 5 days after update in third day's sale is : "<<sum;


return 0;

}