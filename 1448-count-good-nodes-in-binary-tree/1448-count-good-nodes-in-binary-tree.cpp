class Solution {
    int count=0;

    void counti(TreeNode* root,int maxi){
        if(root==NULL){
            return;
        }

        if(root->val>=maxi){
            count++;
        }
        maxi=max(root->val,maxi);
        counti(root->left,maxi);
        counti(root->right,maxi);
    }
public:
    int goodNodes(TreeNode* root) {
        counti(root,INT_MIN);
        return count;
    }
};