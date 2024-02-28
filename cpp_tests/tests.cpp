#include <iostream>
#include <vector>

using namespace std;

void bonAppetit(vector<int> bill, int k, int b) 
{
    int ana_share = bill[k];
    int bill_sum{ 0 };

    for (size_t i = 0; i < bill.size(); ++i)
    {
        bill_sum += bill[i];
    }

    if (b == bill_sum)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << b - ana_share;
    }
}

int main()
{

	

	return 0;
}