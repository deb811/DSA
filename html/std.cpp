#include<iostream>
#include<vector>  //capacity,size,pushback,front,back,at,pop

using namespace std;

int main(){
    vector<int> v;
    cout<<"capacity"<<v.capacity()<<endl;

    cout<<"size"<<v.size()<<endl;

    
    //capacity is the elements present in the array and it gets double ie 1,2,2,4,8....16...
    v.push_back(2);
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity"<<v.capacity()<<endl;

    //size tells the actual element size present in the array vector
    cout<<"size"<<v.size()<<endl;

    cout<<"index at 1 = "<<v.at(1)<<endl; //at any index

    cout<<"front "<<v.front()<<endl;

    cout<<"back "<<v.back()<<endl;



    cout<<"before pop"<<endl;
    for(int i:v){
        
       cout<<i<<" ";
       }
    
    cout<<endl;
    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
  }
   
  cout<<endl;
  vector<int>a(10);
  for(int i:a){
    cout<<i<<" ";
  }


}

