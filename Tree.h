#include <iostream>
#include <iomanip>

#include <chrono>
#include <thread>
/*this_thread::sleep_for(chrono::seconds(1));
this_thread::sleep_for(chrono::milliseconds(100));*/

#include "ShearVisual.h"

using namespace std;

struct TreeNode {
    int data;
    char quality; 
    TreeNode* left;
    TreeNode* right;
};

TreeNode* insertNode(TreeNode* root, int newData, char newQuality) {
    if (root == nullptr) {
        TreeNode* newNode = new TreeNode;
        newNode->data = newData;
        newNode->quality = newQuality;
        newNode->left = newNode->right = nullptr;
        return newNode;
    }

    if (newData < root->data) {
        root->left = insertNode(root->left, newData, newQuality);
    } else if (newData > root->data) {
        root->right = insertNode(root->right, newData, newQuality);
    }

    return root;
}

TreeNode* findMin(TreeNode* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == nullptr) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        TreeNode* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);

    }
    return root;
}

void inorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}


//Branch Pruning Game---------------------------------------------------------------------------------------------------
void printBT(const string& prefix, const TreeNode* node, bool isLeft)
{
    //at first prefix is empthy
    //isLeft is false by default

    if( node != nullptr )
    {
        cout << RED << prefix << RESET;
        cout << RED << (isLeft ? "├──" : "└──" ) << RESET;  //left child(isLeft=ture) ไปขวา, right child(isLeft=false) ลงล่าง 
        
        /*  unicode
            ├ : u+251C
            ─ : u+2500
            └ : u+2514
        */

        if(node->quality=='b')cout<<PURPLE;
        else if(node->quality=='c')cout<<GREEN;
        else cout<<RED;
        cout << node->data << RESET<< endl;

        //recursive
        printBT( prefix + (isLeft ? "|   " : "    "), node->left, true);
        printBT( prefix + (isLeft ? "|   " : "    "), node->right, false);
    }
}

void printBT(const TreeNode* node)
{
    printBT("", node, false);    
}

TreeNode* insertRandomNode(TreeNode* root, char quality = 'g') {
    int newData = rand() % 10000+1; 
    char newQuality;

    if(quality=='b'){
        newQuality='b';
    }
    else{
        newQuality=(rand()%10==0)?'b':'g';
    }
    
    return insertNode(root, newData, newQuality);
}

void deleteAllNodes(TreeNode* root) {
    if (root != nullptr) {
        deleteAllNodes(root->left);
        deleteAllNodes(root->right);
        delete root;
    }
}

void printNodeMembers(TreeNode* root) {
    if (root != nullptr) {
        printNodeMembers(root->left);
        if(root->quality=='b')cout<<PURPLE;
        else if(root->quality=='c')cout<<GREEN;
        else cout<<RED;
        cout << "Data: " << root->data << ", Quality: " << root->quality <<RESET<< endl;
        printNodeMembers(root->right);
    }
}

TreeNode* cuttingbranch(TreeNode* root, int key) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->data == key&&root->quality=='b') {
        root->data = 0;
        root->quality = 'c';
    }
    
    root->left = cuttingbranch(root->left, key);
    root->right = cuttingbranch(root->right, key);
    
    return root; 
}

bool checkG(TreeNode* root) {
    if (root == nullptr) {
        return false; 
    }

    bool isFinished = false;

    if (root->quality == 'g') {
        isFinished = true; 
    }

    bool leftB = checkG(root->left);
    bool rightB = checkG(root->right);

    if (leftB || rightB) {
        isFinished = true;
    }

    return isFinished; 
}

bool findNodeG(TreeNode* root, int data) {
    if (root == nullptr) {
        return false; 
    }

    if (root->data == data && root->quality == 'g') {
        return true; 
    }

    bool NodeGLeft = findNodeG(root->left, data);
    bool NodeGRight = findNodeG(root->right, data);

    return NodeGLeft || NodeGRight;
}


bool checkB(TreeNode* root) {
    if (root == nullptr) {
        return false; 
    }

    bool isFinished = false;

    if (root->quality == 'b') {
        isFinished = true; 
    }

    bool leftB = checkB(root->left);
    bool rightB = checkB(root->right);

    if (leftB || rightB) {
        isFinished = true;
    }
    return isFinished; 
}

bool findNodeB(TreeNode* root, int data) {
    if (root == nullptr) {
        return false; 
    }

    if (root->data == data && root->quality == 'b') {
        return true; 
    }

    bool NodeBLeft = findNodeB(root->left, data);
    bool NodeBRight = findNodeB(root->right, data);

    return NodeBLeft || NodeBRight;
}

void treepruning(){
    for(int i=0;i<=15;i++){
        TreeNode* root = nullptr;
        for (int i=0; i<30; i++) {
            root = insertRandomNode(root);
        }
        printBT(root);
        if(i<=10)this_thread::sleep_for(chrono::milliseconds(100));
        if(i>10)this_thread::sleep_for(chrono::seconds(1));
        system("clear");
        deleteAllNodes(root);
    }

    TreeNode* root = nullptr;
    for(int i=0;i<15;i++){
        if(i<5) root = insertRandomNode(root, 'b');
        else root = insertRandomNode(root);
    }
    printBT(root);
    //printNodeMembers(root);
   
    while(1){
        int number;

        cout<<endl<< GREEN << "[Pruning the "<<PURPLE<< "bad branch"<< GREEN << " to make our tree grow healthier]"<<RESET<<endl;
        cout<<"Cut branch number : ";
        cin>>number;

        if (cin.fail() || cin.peek() != '\n')
        {   
            system("clear");
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        system("clear");
        bool cutG = checkG(root) && findNodeG(root,number);
        bool cutB = checkB(root) && findNodeB(root,number);

        if (cutG) {
            cout <<RED<< "DONT CUT THE HEALTHY BRANCH!!!" <<RESET<< endl<<endl<<endl;
        } 
        else if (cutB) {
            shears();
            cuttingbranch(root, number); 
        }

        bool hasB = checkB(root);
        if(!hasB){
            printBT(root);
            cout<<GREEN<<"You did a great job!"<<RESET<<endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        printBT(root);
        //printNodeMembers(root);
    }
}

