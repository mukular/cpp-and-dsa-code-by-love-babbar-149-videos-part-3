/* Q.1. Consider a rat placed at (0, 0) in a square matrix of order N * N. 
It has to reach the destination at (N - 1, N - 1). Find all possible paths 
that the rat can take to reach from source to destination. The directions 
in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). 
Value 0 at a cell in the matrix represents that it is blocked and rat cannot
move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

Example 1:
Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.

Example 2:
Input:
N = 2
m[][] = {{1, 0},
         {1, 0}}
Output:
-1
Explanation:
No path exists and destination cell is blocked.

returns the list of paths in lexicographically increasing order. 
Note: In case of no path, return an empty list. The driver will output "-1" automatically.

Expected Time Complexity: O((3N^2)).
Expected Auxiliary Space: O(L * X), L = length of the path, X = number of paths.

Constraints:
2 ≤ N ≤ 5
0 ≤ m[i][j] ≤ 1
*/

/*
class Solution
{
    private:
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
    {
        if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path)
    {
        // base case
        if(x == n-1 && y == n-1)
        {
            ans.push_back(path);
            return;
        }
        visited[x][y] = 1;
        
        // down
        int newx = x+1;
        int newy = y;
        if(isSafe(newx, newy, n, visited, m))
        {
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        // left
        newx = x;
        newy = y-1;
        if(isSafe(newx, newy, n, visited, m))
        {
            path.push_back('L');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        // Right
        newx = x;
        newy = y+1;
        if(isSafe(newx, newy, n, visited, m))
        {
            path.push_back('R');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        // Up
        newx = x-1;
        newy = y;
        if(isSafe(newx, newy, n, visited, m))
        {
            path.push_back('U');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        if(m[0][0] == 0)
        {
            return ans;
        }
        int srcx = 0;
        int srcy = 0;

        vector<vector<int>> visited = m;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        string path = "";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(), ans.end());
        return ans;
    }
}
*/