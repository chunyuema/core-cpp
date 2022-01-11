#include <iostream>
#define GLOBALSPACE 5
using namespace std;

class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    };

    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    };
};

class BST
{
public:
    TreeNode *root;

    // constructor
    BST() { root = NULL; };

    bool isEmpty()
    {
        if (root == NULL)
            return true;
        else
            return false;
    };

    void insertNode(TreeNode *new_node)
    {
        if (root == NULL)
        {
            root = new_node;
            cout << "New node added as root node!" << endl;
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (temp->value == new_node->value)
                {
                    cout << "Value already exists!" << endl;
                    return;
                }
                else if ((new_node->value < temp->value) && (temp->left == NULL))
                {
                    temp->left = new_node;
                    cout << "Value inserted to left!" << endl;
                    break;
                }
                else if (new_node->value < temp->value)
                {
                    temp = temp->left;
                }
                else if ((new_node->value > temp->value) && (temp->right == NULL))
                {
                    temp->right = new_node;
                    cout << "Value inserted to right!" << endl;
                    break;
                }
                else if (new_node->value > temp->value)
                {
                    temp = temp->right;
                }
            }
        }
    }

    void print2D(TreeNode *r, int space)
    {
        if (r == NULL)
            return;
        // increase the distance between levels
        space += GLOBALSPACE;
        // recurse on the right subtree since it is printed on top
        print2D(r->right, space);
        cout << endl;
        // find the right space and print the root value
        for (int i = GLOBALSPACE; i < space; i++)
            cout << " ";
        cout << r->value << "\n";
        // recurse on the left subtree since it is printed at the bottom
        print2D(r->left, space);
    }

    void printPreorder(TreeNode *r) // (root, left, right)
    {
        if (r == NULL)
            return;
        cout << r->value << " ";
        printPreorder(r->left);
        printPreorder(r->right);
    }

    void printInorder(TreeNode *r) // (left, root, right)
    {
        if (r == NULL)
            return;
        printInorder(r->left);
        cout << r->value << " ";
        printInorder(r->right);
    }

    void printPostorder(TreeNode *r) // (left, right, root)
    {
        if (r == NULL)
            return;
        printPostorder(r->left);
        printPostorder(r->right);
        cout << r->value << " ";
    }

    TreeNode *iterativeSearch(int val)
    {
        if (root == NULL)
            return root;
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (val == temp->value)
                {
                    return temp;
                }
                else if (val > temp->value)
                {
                    temp = temp->right;
                }
                else
                {
                    temp = temp->left;
                }
            }
            return NULL;
        }
    }

    int height(TreeNode *r)
    {
        if (r == NULL)
            return -1;
        else
        {
            int lheight = height(r->left);
            int rheight = height(r->right);
            if (lheight > rheight)
                return lheight + 1;
            else
                return rheight + 1;
        }
    }

    void printGivenLevel(TreeNode *r, int level)
    {
        if (r == NULL)
            return;
        else if (level == 0)
            cout << r->value << " ";
        else
        {
            printGivenLevel(r->left, level - 1);
            printGivenLevel(r->right, level - 1);
        }
    }

    void printLevelOrderBFS(TreeNode *r)
    {
        int h = height(r);
        for (int i = 0; i <= h; i++)
        {
            printGivenLevel(r, i);
        }
    }

    TreeNode *minValNode(TreeNode *node)
    {
        TreeNode *current = node;
        while (current->left != NULL)
        {
            current = current->left;
        }
        return current;
    }

    TreeNode *deleteNode(TreeNode *r, int v)
    {
        if (r == NULL)
            return NULL;
        else if (v < r->value)
            r->left = deleteNode(r->left, v);
        else if (v > r->value)
            r->right = deleteNode(r->right, v);
        else if (r->left == NULL)
        {
            TreeNode *temp = r->right;
            delete r;
            return temp;
        }
        else if (r->right == NULL)
        {
            TreeNode *temp = r->left;
            delete r;
            return temp;
        }
        else
        {
            // find the in order successor of the node
            TreeNode *temp = minValNode(r->right);
            r->value = temp->value;
            // delete the in order successor
            r->right = deleteNode(r->right, temp->value);
        }
        return r;
    }
};

int main()
{
    int option;
    int val;
    BST my_bst;
    do
    {
        cout << "====================================================" << endl;
        cout << "BST operations: " << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Get the height of tree" << endl;
        cout << "4. Print BST" << endl;
        cout << "5. Delete Node" << endl;
        cout << "Select an operation, 0 to quit the program > " << flush;
        cin >> option;

        TreeNode *new_node = new TreeNode();

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter the value to be inserted: ";
            cin >> val;
            new_node->value = val;
            my_bst.insertNode(new_node);
            cout << endl;
            break;
        case 2:
            cout << "Enter the value to be searched: ";
            cin >> val;
            new_node = my_bst.iterativeSearch(val);
            if (new_node != NULL)
            {
                cout << "Value Found" << endl;
            }
            else
            {
                cout << "Value Not Found!" << endl;
            }
            break;
        case 3:
            cout << "The BST currently has height: " << my_bst.height(my_bst.root) << endl;
            break;
        case 4:
            cout << "The BST looks like below: " << endl;
            my_bst.print2D(my_bst.root, 5);
            cout << "Preorder printing of the tree: " << flush;
            my_bst.printPreorder(my_bst.root);
            cout << endl;
            cout << "Inorder printing of the tree: " << flush;
            my_bst.printInorder(my_bst.root);
            cout << endl;
            cout << "Postorder printing of the tree: " << flush;
            my_bst.printPostorder(my_bst.root);
            cout << endl;
            cout << "Level order printing of the tree: " << flush;
            my_bst.printLevelOrderBFS(my_bst.root);
            cout << endl;
            break;
        case 5:
            cout << "Enter the value to be deleted: ";
            cin >> val;
            new_node = my_bst.iterativeSearch(val);
            if (new_node == NULL)
            {
                cout << "Value does not exist in the BST!" << endl;
            }
            else
            {
                my_bst.deleteNode(my_bst.root, val);
                cout << "Value deleted!" << endl;
            }
            break;
        default:
            cout << "Please select valid operations" << endl;
        }
    } while (option != 0);
}