#include<iostream>
#define SPACE 10
using namespace std;

class TreeNode {
    public:
        int value;
        TreeNode* left;
        TreeNode* right;

        TreeNode(){
            value = 0;
            left = NULL;
            right = NULL;
        };

        TreeNode(int v){
            value = v;
            left = NULL;
            right = NULL;
        };
};

class BST{
    public: 
        TreeNode* root;

        // constructor
        BST(){root = NULL;};

        bool isEmpty(){
            if (root == NULL) return true;
            else return false;
        };

        void insertNode(TreeNode* new_node){
            if (root == NULL) 
            {
                root = new_node;
                cout << "New node added as root node!" << endl;
            } 
            else 
            {
                TreeNode* temp = root;
                while (temp != NULL){
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
                    } else if (new_node->value > temp->value)
                    {
                        temp = temp->right;
                    }
                }
            }
        }

        void print2D(TreeNode*r, int space){
            if (r == NULL) return;
            space += SPACE; 
            print2D(r -> right, space);
            cout << endl;
            for (int i = SPACE; i < space; i++)
                cout << " ";
            cout << r -> value << "\n";
            print2D(r -> left, space);
        }
};


int main(){
    int option;
    int val;
    BST my_bst;
    do {
        cout << "Select BST operation, enter 0 to quit: " << endl;
        cout << "1. Insert Node" << endl;
        cout << "4. Print BST" << endl;
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
            case 4:
                cout << "The BST looks like below: " << endl;
                my_bst.print2D(my_bst.root, 5);
                break;
            default:
                cout << "Please select valid operations" << endl;
        }
    } while (option != 0); 
}