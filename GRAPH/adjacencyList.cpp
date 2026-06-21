#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>


class graph{

    public:
    unordered_map<int,list<int>>adj;

    void addedge(int u,int v,bool direction){
         // direction =0->undirection
         //direction= 1->direction

         adj[u].push_back(v);

         if(direction==0){
            adj[v].push_back(u);
         }
        }


        void print(){
            for(auto i : adj){
                cout<<i.first<<"->";

                for(auto j: i.second){
                    cout<<j<<",";
                }
            }
        }

    

};


int main(){

    int n;
    cout<<"enter the no of nodes";
    cin>>n;

    int m;
    cout<<"enter the no of edges";
    cin>>m;

    graph g;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        //creating a indirection garph
        g.addedge(u,v,0);
    }
   // print the graph

   g.print();

   return 0;
}
 