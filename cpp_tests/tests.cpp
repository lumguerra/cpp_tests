#include <iostream>
#include <vector>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int array_i = 0;
    int result = 0;

    while (array_i <= s.size() - m) { // Corrected loop condition
        int sum = 0;

        for (size_t i = array_i; i < m + array_i; ++i) {
            sum += s[i];
        }

        if (sum == d) {
            ++result;
        }

        ++array_i;
    }

    return result;
}

int main() {

    vector<int> s{ 2, 2, 1, 3, 2 };
    int d{ 4 };
    int m{ 2 };
    
    std::cout << birthday(s, d, m);

	return 0;
}