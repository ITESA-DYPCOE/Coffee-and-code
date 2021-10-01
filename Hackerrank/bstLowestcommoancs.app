

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if(v1<root->data && v2<root->data)
        {
            return lca(root->left,v1,v2);
        }
        else
        if(v1>root->data && v2>root->data)
        {
            return lca(root->right,v1,v2);
        }
        else {
            return root;
    }
    }

