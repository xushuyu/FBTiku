#include <vector>
#include <string>
#include <map>
#include <stack>
#include <unordered_map>
#include <iostream>
#include <algorithm> // std::find

#include "FbTiku.h"

using namespace std;


vector<int> FirstOne::firstOne(vector<vector<int>> board) {
    vector<int> res;

    if (board.size() == 0) return res;

    int m = board.size(), n = board[0].size();

    int idx = 1;//= binaryLowerBound(board[0],1);

    for (int i = 1; i < m; ++i)
    {
        idx = idx == -1 ? n - 1 : idx;

        if (board[i][idx] == 0) continue;

        while (idx - 1 >= 0 && board[i][idx-1])
            --idx;

        if (board[i][idx] == 1)
        {
            res = { i,idx };

        }
        else
            idx = -1;
    }

    return res;
}

int BinarySearch::lower(int target, const vector<int> &nums) {
    if( nums.empty())
        return -1;

    int low = 0, up = nums.size() - 1;

    while( low <= up){
        int mid = (low + up)>>2;

        if( nums[mid] > target){
            low = mid + 1;
        }else{
            up = mid - 1;
        };
    }

    if( low <= nums.size() && nums[low] == target)
        return low;
    else
        return -1;

}

int BinarySearch::search(int target, const vector<int> &nums) {
    if( nums.empty())
        return -1;

    int low = 0, up = nums.size() - 1;

    while( low <= up){
        int mid = (low + up) >> 1;

        if(nums[mid] > target){
            up = mid -1;
        }else if(nums[mid] < target){
            low = mid + 1;
        }else{
            return mid;
        }
    }

    return -1;
}

void BinarySearch::testSearch() {


    vector<int> input = {0,0,0,1,2,2,2,3};
    int res = lower(2,input);

    cout<<res<<endl;
}

int BinarySearch::upper(int target, const vector<int> &nums) {
    return 0;
}

int main(){


    BinarySearch::testSearch();
    system("pause");
}