//
// Created by gary on 2018/1/9.
//

#ifndef FBTIKU_FBTIKU_H
#define FBTIKU_FBTIKU_H

#endif //FBTIKU_FBTIKU_H

#include <vector>
#include <string>
#include <map>
#include <stack>
#include <unordered_map>
#include <iostream>
#include <algorithm> // std::find

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr)
    {
    }
};

class FirstOne{
    vector<int> firstOne(vector<vector<int>> board);
};