#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec{ 2,2,3,2,3,6,2 };
	std::vector<int> pair_count;	

	for(size_t i = 0; i < vec.size(); ++i)
	{
		int sum{ 1 };

		for (size_t j = ++i; j < vec.size(); ++j)
		{						
			if (vec[i] == vec[j])
			{
				++sum;
			}			
		}

		if (sum > 1)
		{
			pair_count.push_back(sum / 2);
		}
	}

	for (size_t i : pair_count)
	{
		std::cout << i << "\n";
	}

	return 0;
}