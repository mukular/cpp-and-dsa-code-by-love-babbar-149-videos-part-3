/* Q.1. You are given a string 'STR' consisting of lowercase English letters.
Your task is to return all permutations of the given string in lexicographically increasing order.
String A is lexicographically less than string B, if either A is a prefix of B (and A != B),
or there exists such i (1 <= i <= min(|A|, |B|)), that A[i] < B[i], and for any j(1 <= j < i)
A[i] = B[j]. Here |A| denotes the length of the string A.

For example:
If the string is "bca", then its permutations in lexicographically increasing
order are {"abc", "acb", "bac", "bca", "cab", "cba"}.

Note:
Given string contains unique characters.

Constraints:
1 <= |STR| <= 9
where |STR| is the length of the string.

Sample Input 1:
abc
bc
c

Sample output 1:
abc acb bac bca cab cba
bc cb
c
*/

/*
class Solution
{
    private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index)
    {
        // base case
        if(index >= nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int j = index; j<nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, ans, index+1);
            // backtrack
            swap(nums[index], nums[j]);
        }
    }
    public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
}
*/