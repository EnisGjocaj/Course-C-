//1. Algoritmi per gjetjen e Dy Shumave.

//Ky algoritem na kerkon per ti gjetur dy numra ne vektore qe shuma e tyre na jep vleren e kerkuar. Ne duhet ti kthejme indekset e dy numrave.
//Menyra qe ne do e perdorim eshte me Brute Force, ku do te kemi parasysh çdo qift te elementeve dhe te shohim nese shuma e tyre e jep vleren e kerkuar. Kjo behet me unaza te degezuara , ku njera prej tyre , unaza e jashtme iteron prej elementiti te pare deri te i parafundit, dhe unaza e brendshme prej elementit te dyte deri te i fundit.


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // Nuk ka zgjodhje
    }
};


int main() {
    
    
    Solution solution;
    vector<int> nums = {2, 7, 11, 15}; 
    int target = 17; 
    vector<int> result = solution.twoSum(nums, target);

    // rezultati
    if (result.size() == 2) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
