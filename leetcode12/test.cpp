#include <iostream>
#include <queue>

using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
#if 0
    int levelOrder(TreeNode *root)
    {
        queue<TreeNode *> myQueue;
        if(!root)
        {
            return false;
        }
        TreeNode *topVal = root;
        myQueue.push(root);

        while (!myQueue.empty())
        {
            topVal = myQueue.front();
            cout<<topVal->val;
            myQueue.pop();

            if(!topVal->left)
            {
                myQueue.push(topVal->left);
            }
            if(!topVal->right)
            {
                myQueue.push(topVal->right);
            }
        } 
        return true;   
    }
#else
     vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        if(!root)
        {
            return res;
        }

        queue<TreeNode *> myQueue;
        myQueue.push(root);

        /* 每一层结点的元素个数 */        
        int levelSize = 0;  
        TreeNode *topVal = NULL;
        while (!myQueue.empty())
        {
            levelSize = myQueue.size();
            vector<int> levelVector;
            for (int idx = 0; idx < levelSize; idx++)
            {
                topVal = myQueue.front();
                levelVector.push_back(topVal->val);
                myQueue.pop();
                
                if(topVal->left != NULL)
                {
                    myQueue.push(topVal->left);
                }

                if(topVal->right != NULL)
                {
                    myQueue.push(topVal->right);
                }
            }
            res.push_back(levelVector);
        } 
        return res;   
    }

#endif
};