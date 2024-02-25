// 3. Merge Sorted Array, bashkimi i dy vektoreve te sortuar

// Na jepen dy vektorë me numra te plote nums1 dhe nums2, te renditur ne rend jo zvogelues, dhe dy numra m dhe n, qe reprezentojne numrin e elementeve ne vektoret nums1 dhe nums2 respektivisht. Ne duhet ti bashkojme keta dy vektore ne nje vektore te vetem te renditur ne rend jo zvogelues. Ky vektore perfundimtare nuk duhet te kthehet prej ndonje funksioni, por duhet te ruhet brenda nums1 , dhe te kete madhesi m + n, ku m elementet e para jane elemented qe jane bashkuar , kurse elemented e fundit n jane bere 0.

//Pra na jane dhene dy vektore ku ne duhet ti baskojme, ku vektoret kane elemente m dhe n. Meqe nums1 supozohet te kete madhesi m+n atehere ne iterojme ne vektorin nums2 dhe i vendosim elementet e tij ne fund te nums1 duke filluar prej indexit m. Pastaj e perdorim funksionin sort() per ta sortuar vektorin e ri te fituar nums1.



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};


int main() {
   
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    int m = 3; 
    vector<int> nums2 = {2, 5, 6}; 
    int n = 3; 

    solution.merge(nums1, m, nums2, n);

    cout << "Vektori i bashkuar dhe i sortuar:" << endl;
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}