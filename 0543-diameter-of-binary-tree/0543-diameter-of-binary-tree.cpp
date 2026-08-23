class Solution {
    pair<int,int> diam(TreeNode* root){
      if(root==NULL){
        return {0,0};
      }
      pair<int,int> left=diam(root->left);
      pair<int,int> right=diam(root->right);

      int op1=left.first;
      int op2=right.first;
      int op3=1+left.second+right.second;

      pair<int,int>ans;
      ans.first=max(op1,max(op2,op3));
      ans.second=1+max(left.second,right.second);
return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
       return diam(root).first-1;
    }
};