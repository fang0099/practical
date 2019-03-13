#include <stack>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

vector<int> PostorderTraversal(TreeNode* root) {
    vector<int> result;
    if(NULL == root) {
        return result;
    }
    stack<TreeNode*> s;
    TreeNode* curr = root;
    TreeNode* previsited = NULL;
    while(curr!=NULL || !s.empty()) {
        while(curr!=NULL) {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        if(curr->right == NULL || curr->right == previsited) {
            result.push_back(curr->val);
            s.pop();
            previsited = curr;
            curr = NULL;
        } else {
            curr = curr->right;
        }
    }

    return result;
}
