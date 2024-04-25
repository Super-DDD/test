#include <stdio.h> 
#include <iostream> 
#include <vector>
#include <queue>
#include <sstream>
#include <string>
#include <algorithm>
#include <set>
#include <unordered_set>
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
using namespace std;

struct  TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) :val(x),left(nullptr),right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *) : val(x), left(left), right(nullptr) {}
};

class Solution {
    
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curSum = 0;
        int totalSum = 0;
        int start = 0;
        for(int i = 0;i < gas.size() ;i++){
            totalSum += gas[i] - cost[i] ;
            curSum += gas[i] - cost[i] ;
            if(curSum < 0){
                start = i + 1 ;
                curSum = 0 ;
            }

        }
        if(totalSum < 0) return -1;
        return start ;
    }
};





//数组转换为二叉树
TreeNode* arrayToTree(vector<string>& input_vec) {
    if (input_vec.empty()) return nullptr;

    TreeNode* root = new TreeNode(atoi(input_vec[0].c_str()));
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < input_vec.size()) {
        TreeNode* current = q.front();
        q.pop();

        if (input_vec[i] != "null") {
            current->left = new TreeNode(atoi(input_vec[i].c_str()));
            q.push(current->left);
        }
        i++;

        if (i < input_vec.size() && input_vec[i] != "null") {
            current->right = new TreeNode(atoi(input_vec[i].c_str()));
            q.push(current->right);
        }
        i++;
    }

    return root;
}
//打印二叉树
void printTree(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            if (node) {
                cout << node->val << " ";
                q.push(node->left);
                q.push(node->right);
            } else {
                cout << "null ";
            }
        }
        cout << endl;
    }
}



// int main() {
//     //复制输入数组，将其转换为二叉树
//     vector<string> input_vec = {"1", "null", "2", "2"}; // 示例输入数组
//     TreeNode* root = arrayToTree(input_vec);
//      // 展示二叉树结构
//     cout << "Binary Tree:" << endl;
//     printTree(root);


// //定义算法类对象，调用目标函数
//     Solution solution;
//     vector<int> result = solution.findMode(root);

//     // 输出查找到的众数
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

