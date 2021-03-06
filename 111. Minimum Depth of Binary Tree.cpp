/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        int res = 0;
        
        if(root == NULL)
            return res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int hight = 1;
        
        while(!q.empty()){
            int sz = q.size();    
            for(int i = 0; i < sz; ++i){
                TreeNode* cur = q.front();
                q.pop();
                if(cur -> left == NULL && cur -> right == NULL)
                    return hight;
                
                if(cur -> left != NULL)
                    q.push(cur -> left);
                if(cur -> right != NULL)
                    q.push(cur -> right);
            }
            
            ++hight;
            
        }
        
        return res;
    }
};