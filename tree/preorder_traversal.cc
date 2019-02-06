#include <stack>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

vector<int> PreorderTraversal(TreeNode* root) {
    vector<int> result;
    if(root == NULL) {
        return result;
    }

    stack<TreeNode*> s;
    TreeNode* curr = root;

    while(curr!=NULL || !s.empty()) {
        while(curr!=NULL) {
            result.push_back(curr->val);
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }
    return result;
}
