#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> MissRepeating(vector<vector<int>> grid, int n) {
    vector<int> ans;
    unordered_set<int> s;

    int a = 0, b = 0;
    int expSum = (n * n) * (n * n + 1) / 2;
    int actSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            actSum += grid[i][j];
            if (s.find(grid[i][j]) != s.end()) {
                a = grid[i][j];   // repeating number
            }
            s.insert(grid[i][j]);
        }
    }

    b = expSum-(actSum -a); // missing number
    ans.push_back(a); // repeating
    ans.push_back(b); // missing
    return ans;
}

int main() {
    vector<vector<int>> grid = {
        {9, 1, 7},
        {8, 9, 2},
        {3, 4, 6}
    };

    vector<int> result = MissRepeating(grid, 3);

    cout << "Repeating: " << result[0] << ", Missing: " << result[1] << endl;

    return 0;
}
