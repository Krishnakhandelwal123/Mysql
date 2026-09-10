class Solution {
    pair<int, int> answer(TreeNode* root, int& count) {
        if (root == NULL) {
            return {0, 0};
        }
        pair<int, int> left = answer(root->left, count);
        pair<int, int> right = answer(root->right, count);

        int subtreesum=left.first+right.first+root->val;
        int subtreecount=left.second+right.second+1;
        if(subtreesum/subtreecount==root->val){
            count++;
        }
        return {subtreesum,subtreecount};
    }

public:
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        pair<int, int> ans = answer(root, count);
        return count;
    }
};