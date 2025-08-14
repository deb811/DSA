#include<iostream>
using namespace std;
int getsum(int arr[],int size){

    //base case
    if (size==0){
        return 0;
    }
    if (size==1){
        return arr[0];
    }

    //recursive relation

    int remainingpart= getsum(arr+1,size-1);

    int sum=arr[0]+remainingpart;
    
    return sum;
}

int main(){
    int arr[]={2,4,5,6};
    int size =4;

    int ans=getsum(arr,size );

    cout<<ans;
   
    return 0;
}