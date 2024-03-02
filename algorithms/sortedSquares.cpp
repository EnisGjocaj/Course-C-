//7.SortedSquares. 

//Nese e kemi nje vektor te numrave te plote te dhene ne nje rend jo zvogelues, ktheje nje vektor me katror te numreve te vektorit ku jane te rendditur ne rend jo zvogelues.

//E definojme nje klase Solution e cila do e zgjeroje prej objekt klases. Kjo klase e enkapsulon zgjidhjen e detyres. Ne kete klase e definojme metoden sortedSquares , e cila e merr nje list te numrave dhe e kthen listen e katroreve te tyre te renditru ne rend jo zvogelues.
//Pastaj e krijojme nje vektore te ri brenda funksionit sortedSqures, ku brenda funksionit e krojojme vektorine  ri me emer squares me madhesi te vektorit origjinal nums. Pasatj  e perdorim funksionin transform, i cili na ndihmon qe te kalojme ne te gjithe elementet e nje vektori dhe ti shumezojme te gjithe elementet me veten, si dhe e ruan rezultation ne pozicionin korrespodues te vektorit te katroreve. Pastaj i sortojme katroret dhe e kthejme vektorin e ri.


#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size());
        transform(nums.begin(), nums.end(), squares.begin(), [](int num) { return num * num; });
        sort(squares.begin(), squares.end());
        return squares;   
    }
};

int main() {

    Solution solution;
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = solution.sortedSquares(nums);

    cout << "Katroret e renditura te numrave:" << endl;
    for (int square : result) {
        cout << square << " ";
    }
    cout << endl;

    return 0;
}
