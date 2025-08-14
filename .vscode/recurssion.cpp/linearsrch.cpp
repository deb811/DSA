#include<iostream>
using namespace std;

bool linearsrch(int arr[],int size,int key){
    //base case
    if(size==0)
    return false;

    //recursive relation
    if(arr[0]==key){
        return true;
    }
   else{
    bool remaining= linearsrch(arr+1,size-1,key);
    return remaining;
   }
}

int main(){
    int arr[5]={2,4,5,7,2};
    int size=5;
    int key=2;

    bool ans= linearsrch(arr,size,key);

    if(ans==1){
        cout<<"present";
    
    }
    else{
        cout<<"not present";
    }
    return 0;
}