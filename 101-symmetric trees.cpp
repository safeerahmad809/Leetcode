class solution {
public:
    bool symmetric(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr)
            return true;
        
        if(p==nullptr || q==nullptr || p->val!=q->val)
            return false;
        
        return symmetric(p->left,q->right) and symmetric(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return symmetric(root->left,root->right);
    }
};
