#include<iostream>
using namespace std;
bool check(int arr[],int n){
    //base case
    if(n==0 || n==1){
       
        return 1;
    }

    if( arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining= check(arr+1 , n-1);
        return remaining;
    }
   
}


int main(){

    int arr[5]={4,5,7,9,11};
    int size=5;

    bool ans=check(arr,size);

    if(ans==true){
        cout<<"array is sorted "<<endl;

    }

    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}