#include <iostream>
using namespace std;

class Trinode
{
public:
    char data;
    Trinode *children[26];
    bool isTerminal;
    Trinode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

class trie
{
public:
    Trinode *root;
    trie()
    {
        root = new Trinode('\0');
    }

    void insertUtil(Trinode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // assuming word will be in Capital
        int index = word[0] - 'A';
        Trinode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new Trinode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool SearchUtil(Trinode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        Trinode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return SearchUtil(child, word.substr(1));
    }

    bool Search(string word)
    {
        return SearchUtil(root, word);
    }

    void RemoveUtil(Trinode *root, string word)
    {

        if (word.length() == 0)
        {
            root->isTerminal = false;
            return;
        }

        int index = word[0] - 'A';
        Trinode *child;

        if (root->children[index] == NULL)
        {
            return;
        }
        child = root->children[index];

        RemoveUtil(child, word.substr(1));
        // Check if we can delete this node (i.e., no children and not a terminal)
        if (!child->isTerminal)
        {
            bool hasChildren = false;
            for (int i = 0; i < 26; i++) // Assuming 26 possible children (A-Z)
            {
                if (child->children[i] != NULL)
                {
                    hasChildren = true;
                    break;
                }
            }

            // If there are no children, we can delete this node
            if (!hasChildren)
            {
                delete child;
                root->children[index] = NULL;
            }
        }
    }
    void remove(string word)
    {
        RemoveUtil(root, word);
    }
    // Check if we can delete this node (i.e., no children and not a terminal)
};

int main()
{
    trie *t = new trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    t->insertWord("ES");
    t->insertWord("DOES");
    cout << "Present or Not " << t->Search("ARM") << endl;
    cout << "Present or Not " << t->Search("TIM") << endl;
    cout << "Present or Not " << t->Search("DOES") << endl;
    t->remove("DOES");
    cout << "Present or Not " << t->Search("DOES") << endl;
    return 0;
}