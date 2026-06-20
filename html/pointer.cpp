#include<iostream>
using namespace std;
 int main(){
   /* int i=3;
    int *p=&i;


    char c='abcd';  
    char *ptr=&c;

    cout<<c<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
     


    cout<<endl<<"address of i"<<p<<endl;
    cout<<"address of i"<<&i<<endl;
    cout<<"value is"<<*p<<endl;
    cout<<"address of p"<<&p<<endl;

    
    cout<<"size of i "<<sizeof(i)<<endl;
    cout<<"size of p "<<sizeof(p)<<endl;

    cout<<"address before the increament"<<p<<endl;

    //INCREAMENT of a pointer 
    p=p+1;
   cout<<"after"<<*p<<endl;

   cout<<"addresss after increament"<<p<<endl;

   //COPYING A POINTER
  int *q=p;
  
  cout<<p<<" -"<<q<<endl;
  cout<<*p<<" -"<<*q;
  */
 
  //array
  int arr[]={2,7,5,2,9};
  cout<<"address of first memory"<<arr<<endl;
  cout<<"address of first index"<<&arr[0]<<endl;

  cout<<*arr<<endl;
  cout<<*arr+1<<endl;
  cout<<*(arr+2)<<endl;

  int x=3;
  cout<<x[arr]<<endl;
  cout<<arr[x];
  
  int temp[5]={3,6};
  cout<<sizeof(temp)<<endl;
  cout<<sizeof(*temp);

  
  int *ptr=&temp[0];
 


 }