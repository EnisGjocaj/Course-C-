//6. Sortimi i vektorit 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {64, 25, 12, 22, 11};
    sort(vec.begin(), vec.end());
    cout << "Vektori i sortuar: ";
    for (int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << endl;
    return 0;
}
