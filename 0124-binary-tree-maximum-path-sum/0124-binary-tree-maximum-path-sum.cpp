class Solution {

    int calc(TreeNode* root,int &maxi){
         if(root==NULL){
            return 0;
        }

       int left = max(0,calc(root->left,maxi));
       int right= max(0,calc(root->right,maxi));

        maxi=max(maxi,root->val+left+right);

        return root->val+max(left,right);    
        }
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;

        if(root==NULL){
            return 0;
        }
        calc(root,maxi);
        return maxi;
    }
};