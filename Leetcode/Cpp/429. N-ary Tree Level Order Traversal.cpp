/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        queue<Node *> q;
        vector<vector<int>> v;
        vector<int> t;
        q.push(root);
        q.push(NULL);
        if (root == NULL)
        {
            return v;
        }
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if (temp == NULL)
            {
                v.push_back(t);
                t.clear();
                if (q.empty())
                {
                    return v;
                }
                else
                    q.push(NULL);
            }
            else
            {
                t.push_back(temp->val);
                for (auto x : temp->children)
                    q.push(x);
            }
        }
        return v;
    }
};