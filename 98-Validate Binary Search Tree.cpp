class Solution {
public:
  vector<int> v;
    bool isValidBST(TreeNode* root) {
        inorder(root);
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]) return false;
            if(v[i]==v[i+1]) return false;
        }
        return true;
    }
    void inorder(TreeNode* root){
        if(!root)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
};
