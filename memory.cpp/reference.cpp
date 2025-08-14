#include<iostream>
using namespace std;

int getsum(int *arr,int n){

    int sum=0;

    for(int i=0; i<n; i++){
         
        sum+=arr[i];
    }
    return sum;
}



int main (){
    int n=0;
    cin>>n;

    int *arr =new int [n];
    
    for(int i=0; i<n; i++){

        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
     
    cout<<endl;
    int ans=getsum(arr,n);


    cout<<ans<<endl;
   
    return 0;

}