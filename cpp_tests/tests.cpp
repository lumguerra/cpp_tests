#include <iostream>
#include <vector>

int main()
{

	std::vector<int> types_arr{ 0,0,0,0,0 };
	std::vector<int> arr{ 1, 4, 4, 4, 5, 3 };

	for (size_t i = 0; i < arr.size(); ++i)
	{
		switch (arr[i])
		{
		case 1:
			types_arr[0] += 1;
			break;
		case 2:
			types_arr[1] += 1;
			break;
		case 3:
			types_arr[2] += 1;
			break;
		case 4:
			types_arr[3] += 1;
			break;
		case 5:
			types_arr[4] += 1;
			break;
		}
	}

	int higher_i{ 0 };
	int higher_num = types_arr[higher_i];


	for (size_t i = 1; i < types_arr.size(); ++i)
	{
		if (types_arr[i] > higher_num)
		{
			higher_num = types_arr[i];
			higher_i = i;
		}
	}

	std::cout << higher_i + 1;

	return 0;
}