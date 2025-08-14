#include<iostream>
using namespace std;

int fibo(int m){

    //base case
    if (m==0)
    return 0;

    if (m==1)
    return 1;

    int ans =fibo(m-1) + fibo(m-2);

    return ans;

}

int main(){
 int n=0;
 cin>>n;

 cout<<fibo(n);
}