#include<iostream>
using namespace std;

bool search(int num[],int size,int key){
    for(int i=0;i<size;i++){
        if(num[i]==key){
            return 1;
        }
       
       
    }
    return 0;
}

int main(){
    int arr[5] = { 4 ,8 , 2 , 0, 3};
    cout<<"enter key";
    int key;
    cin>>key;

     bool found=search(arr,5,key);
     if(found){
        cout<<"key is present";
     }
     else{
     cout<<"key is not present";
     }
     return 0;

}