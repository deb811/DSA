#include<iostream>
using namespace std;

int main(){
/*{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    if(age<1){
        cout<<"you are not born"<<endl;
    }
    else if (age>1 && age<18){
        cout<<"you are kid";
    }
    
    else (age>18){
        cout<<"you are eligible"<<endl;
    }
 return 0;
}
*/
 int age;
 cout<<"enter age"<<endl;
 cin>>"age";

 switch(age){
    case18:
       cout<<"you are eligible";
       break;
 case12:
       cout<<"you are not eligible";
       break;
     default:
       cout<<"you are a fool";
       break;
     


 }

return 0;
}