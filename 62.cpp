#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class node
{
public:
  int data;
  node *left;
  node *right;
  node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};
node *buildTree(node *root)
{

  cout << "Enter the data: " << endl;
  int data;
  cin >> data;
  root = new node(data);

  if (data == -1)
  {
    return NULL;
  }

  cout << "Enter data for inserting in left of " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter data for inserting in right of " << data << endl;
  root->right = buildTree(root->right);
  return root;
}
void levelOrderTraversal(node *root)
{
  if (root == NULL)
    return;
  queue<node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty())
  {
    node *temp = q.front();
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
void reverseLevelOrderTraversal(node *root)
{
  if (root == NULL)
    return;

  queue<node *> q;
  stack<vector<int>> s; // Stack to store levels in reverse order
  q.push(root);
  q.push(NULL);             // NULL as level separator
  vector<int> currentLevel; // To store nodes at the current level

  // Perform level order traversal and store levels in stack
  while (!q.empty())
  {
    node *temp = q.front();
    q.pop();

    if (temp == NULL)
    {
      s.push(currentLevel); // Push the completed level to stack
      currentLevel.clear(); // Clear for the next level

      if (!q.empty())
      {
        q.push(NULL); // Push NULL to mark the next level
      }
    }
    else
    {
      currentLevel.push_back(temp->data); // Add node to the current level

      // Enqueue children
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

  // Now pop levels from the stack to print in reverse order

  while (!s.empty())
  {
    vector<int> level = s.top();
    s.pop();

    // Print the level
    for (int data : level)
    {
      cout << data << " ";
    }
    cout << endl; // New line after each level
  }
}
void inorder(node *root) // LNR
{
  if (root == NULL)
  {
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}
void preorder(node *root) // NLR
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
void postorder(node *root) // LRN
{
  if (root == NULL)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }

int main()
{
  node *root = NULL;
  // creating a tree
  buildFromLevelOrder(root);
   // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
  levelOrderTraversal(root);
 /*
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  root = buildTree(root);
  // level order
   cout << "Printing the level in order traveral output" << endl;
  levelOrderTraversal(root);
  cout << "Printing the level in reverse order traveral output" << endl;
  reverseLevelOrderTraversal(root);
  cout << "inorder travelsal output: ";
  inorder(root);
  cout<<endl;
  cout << "preorder travelsal output: ";
  preorder(root);
  cout<<endl;
  cout << "postorder travelsal output: ";
  postorder(root);
   */
  return 0;
}