//2. Heqja e elementit

// Jepet një vektor me numra te plote nums, dhe nje vlere e plote val. Ne duhet ti heqim nga vektori te gjithe numrat te barabate me vleren e dhene val. Renditja e elementeve mund edhe te prishet, pastaj e kthejme numrin e elementeve ne vektorin nums te cilet nuk jane te barabarte me val.

//Ne e zgjedhim kete problem duke iteruar ( kaluar ne cdo element ) vektorin e dhene nums dhe duke i pasur parasysh dy pointerë: index dhe i.Index e reprezenton pozicionin e elementit te rradhes jo val qe duhet te vendoset ne vektore, kurse i paraqet iterimin ne elementet e vektorit.Kjo nenkupton se ne i rishkruajme elementet e barabarta me val me elementet tjera ne baze te pozites se tyre index.


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main() {
    
    Solution solution;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newSize = solution.removeElement(nums, val);

    cout << "Vektori i modifikuar pasi e kemi hequr " << val << ":" << endl;
    for(int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "Madhesia e tanishme: " << newSize << endl;

    return 0;
}