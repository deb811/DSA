#include<iostream>
using namespace std;
 void reverse(int num[],int size){
       int start=0;
       int end=size-1;
     
       while(start<=end){
        swap(num[start],num[end]);
        start++;
        end--;
       }
 }
  
   void printarray(int num[],int size){
    for(int i=0; i<size; i++){
        cout<<num[i]<<" ";
    }
   }

int main(){
   int arr[4]={3,7,9,5};
 
   reverse(arr, 4);  // Call reverse function with array size 4
   printarray(arr, 4);  // Print reversed array
   
   return 0;
}