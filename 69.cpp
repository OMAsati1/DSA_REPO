#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *&root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

Node *MinNode(Node *root)
{
    Node *temp = root;
    while (temp->left)
    {
        temp = temp->left;
    }
    return temp;
}
Node *MaxNode(Node *root)
{
    Node *temp = root;
    while (temp->right)
    {
        temp = temp->right;
    }
    return temp;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(Node *root) // LNR
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root) // NLR
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root) // LRN
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Node *findPredecessor(Node *root, Node *target)
// {
//     if (target->left)
//     {
//         return MaxNode(target->left);
//     }
//     Node *predecessor = NULL;
//     while (root)
//     {
//         if (target->data > root->data)
//         {
//             predecessor = root;
//             root = root->right;
//         }
//         else if (target->data < root->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             break;
//         }
//     }
//     return predecessor;
// }

// Node *findSuccessor(Node *root, Node *target)
// {
//     if (target->right)
//     {
//         return MinNode(target->right);
//     }
//     Node *successor = NULL;
//     while (root)
//     {
//         if (target->data < root->data)
//         {
//             successor = root;
//             root = root->left;
//         }
//         else if (target->data > root->data)
//         {
//             root = root->right;
//         }
//         else
//         {
//             break;
//         }
//     }
//     return successor;
// }
Node *findPredecessor(Node *root, Node *target)
{
     Node *predecessor = NULL;
    while (root)
    {
        if (target->data <= root->data)
        {
            root = root->left;
        }
        else  
        {
            predecessor = root;
            root = root->right;
        }
      
    }
    return predecessor;
}

Node *findSuccessor(Node *root, Node *target)
{
    Node *successor = NULL;
    while (root)
    {
        if (target->data >= root->data)
        {
            root = root->right;
        }
        else  
        {
            successor = root;
            root = root->left;
        }
      
    }
    return successor;
}

Node* deleteFromBST(Node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if (root->data==val)
    {
        //0 child
        if (root->left==NULL && root->right==NULL)
        {
           delete root;
           return NULL;
        }
        
        //1 child
        //left child
        if (root->left!=NULL && root->right==NULL)
        {
           Node* temp=root->left;
           delete root;
           return temp;
        }
        //right child
        if (root->left==NULL && root->right!=NULL)
        {
          Node* temp=root->right;
           delete root;
           return temp;
        }
        
        //2 child
        if (root->left!=NULL && root->right!=NULL)
        {
            // int mini=MinNode(root->right)->data;
            // root->data=mini;
            // root->right=deleteFromBST(root->right,mini);
            // return root;
            
           // OR..............................................
           int maxi=MaxNode(root->left)->data;
            root->data=maxi;
            root->left=deleteFromBST(root->left,maxi);
            return root;
        }
        
    }
    else if (root->data>val)
    {
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else
    {
        root->right=deleteFromBST(root->right,val);
        return root;
    }
    
    
    
}

int main()
{
    //50 20 70 10 30 90 110 -1
    Node *root = NULL;
    cout << "enter data to create BST" << endl;
    takeInput(root);
    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);
    cout << "inorder travelsal output: ";
    inorder(root);
    cout << endl;
    cout << "preorder travelsal output: ";
    preorder(root);
    cout << endl;
    cout << "postorder travelsal output: ";
    postorder(root);
    cout << '\n';
    cout << "Minimum element in tree is: " << MinNode(root)->data << endl;
    cout << "Maximum element in tree is: " << MaxNode(root)->data << endl;
    cout << '\n';
    cout << '\n';
    //for finding predecessor and successor
  /*  int targetValue;
    cout << "Enter node value to find predecessor and successor: ";
    cin >> targetValue;

    Node *target = new Node(targetValue);
    Node *predecessor = findPredecessor(root, target);
    Node *successor = findSuccessor(root, target);
    if (predecessor)
    {
        cout << "Inorder predecessor is: " << predecessor->data << endl;
    }
    else
    {
        cout << "No inorder predecessor exists." << endl;
    }

    if (successor)
    {
        cout << "Inorder successor is: " << successor->data << endl;
    }
    else
    {
        cout << "No inorder successor exists." << endl;
    }
    */
   int v;
   cout<<"Enter the value of the node which you want to delete"<<endl;
   cin>>v;
   root=deleteFromBST(root,v);
    cout<<"Modified tree after deletion of node  "<<v<< " will look like"<<endl;
     cout << "Printing the BST" << endl;
    levelOrderTraversal(root);
    cout << "inorder travelsal output: ";
    inorder(root);
    cout << endl;
    cout << "preorder travelsal output: ";
    preorder(root);
    cout << endl;
    cout << "postorder travelsal output: ";
    postorder(root);
    cout << '\n';
    cout << "Minimum element in tree is: " << MinNode(root)->data << endl;
    cout << "Maximum element in tree is: " << MaxNode(root)->data << endl;
    cout << '\n';
    cout << '\n';
    return 0;
}