/*
 * @lc app=leetcode id=590 lang=cpp
 *
 * [590] N-ary Tree Postorder Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        stack<Node*>s;s.push(root);
        vector<int> result;
        while(!s.empty()&& root) {
            Node* n=s.top();s.pop();
            result.insert(result.begin(), n->val);
            for(auto & ch :n->children)s.push(ch);
        }
        return result;

        
    }
};
// @lc code=end

