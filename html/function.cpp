#include <iostream> 
using namespace std;

//declaring and calling a function
void array(int arr[],int size){

  for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
 }

}

//function for the max and min elements of an array
/*
int getmax(int array[],int n){
  int max= INT_MIN;

  for(int i=0;i<n;i++){
    if( array[i]>max ){
    max=array[i];
  }
}
 return max;

}

int getmin(int array[],int n){
  int min=INT_MAX;

  for(int i=0;i<n;i++){
    if( array[i]<max ){
    max=array[i];
  }
}
 return max;

}

*/


int main(){
 


  //declaring an array
  int arr[6]={88,56,76,42,87,74};

  //accessing an array at any any index
  cout<<"value at 0"<<arr[0]<<endl;
  cout<<"value at 0"<<arr[1]<<endl;
  cout<<"value at 0"<<arr[2]<<endl;
  cout<<"value at 0"<<arr[5]<<endl;


  //declaring an array of some elements
  
   int num[4]={2,3};
   array(num,4);
   cout<<endl<<"okay"<<endl;

   //declaring an array with 0 elements

   int a[6];
   array(a,6) ;

   int sizeofa = sizeof(a)/sizeof(int);
   cout<<endl<<"size of a is "<<sizeofa;



  //finding max and min elements in an array
  /*
   int size;
   cin>>size;

   int num[50];
   for(int i=0;i<size;i++){
    cin>>num[i];
   }
  cout<<getmax(num,size);
  cout<<getmin(num,size);  

  */
  return 0;
  

}

