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

//  tc of find element function is O(N) and tc of find function is O(1) as we have used set to store our tree nodes wala values while traversing only
// sc -  o(N) set use korechi bole
class FindElements {
public:
 unordered_set<int>ps;
 void dfs(TreeNode* root,int x){
    if(root==NULL) return;

    root->val =x;
    ps.insert(x);
    dfs(root->left,2*x + 1);
    dfs(root->right,2*x + 2);
    

 }
    FindElements(TreeNode* root) {
        ps.clear();
        dfs(root,0);
        
    }
    
    bool find(int target) {
        return ps.count(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */