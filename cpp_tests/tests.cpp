#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> broken_records{ 4, 0 };
	broken_records[0]++;

	std::cout << broken_records[0];

	return 0;
}