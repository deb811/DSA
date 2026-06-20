// #include<iostream>
// using namespace std;
// class  node{
//     public:
//     int data;
//     node*  right;
//     node* left;

//     //constructor 
//      node(int val){
//         data=val;
//         right =left =NULL;
//      }


// };

// //function 
// static int index=-1;
// node* buildtree(vector<int>& preorder[]){
//     index++;
//     if (preorder[index]==-1){
//         return NULL;
//     }

//     node* root= new node(preorder[index]);

//     root->left= buildtree(preorder);

//     root->right = buildtree(preorder);

//     return root;

// }



// int main(){
//   vector <int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
   
//    node* root=buildtree(preorder);

//    cout<<root<<endl;


// }

#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // constructor
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// global index to track preorder position
static int index = -1;

// function to build tree from preorder array with -1 as NULL
Node* buildTree(vector<int>& preorder) {
    index++;
    if (index >= preorder.size() || preorder[index] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// preorder print function (to check tree structure)

//( inorder=left--root--right)

// (postorder= left--right--left)

void preorderPrint(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    index = -1; // reset before building
    Node* root = buildTree(preorder);

    cout << "Preorder Traversal of Built Tree: ";
    preorderPrint(root);
    cout << endl;

    return 0;
}
