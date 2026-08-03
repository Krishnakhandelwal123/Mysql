class Solution {
    unordered_set<int> st;

    bool dfs(TreeNode* root, int k){

            if(root==NULL){
                return false;
            }
            if(st.find(k-root->val)!=st.end()){
                return true;
            }
            st.insert(root->val);

            return dfs(root->left,k)||dfs(root->right,k);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        return dfs(root,k);
    }
};