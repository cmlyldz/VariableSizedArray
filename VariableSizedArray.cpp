#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int k, q;
	cin >> k >> q;

	std::vector<std::vector<int>> arr;
	vector<vector<int>> quest;

	int tmp, tmp2;
	for (int i = 0; i < k; i++)
	{
		cin >> tmp;
		std::vector<int> vec;
		for (int j = 0; j < tmp; j++)
		{
			cin >> tmp2;
			vec.push_back(tmp2);
		}
		arr.push_back(vec);
	}

	for (int i = 0; i < q; i++)
	{
		std::vector<int> vec;
		for (int j = 0; j < 2; j++)
		{
			cin >> tmp2;
			vec.push_back(tmp2);
		}
		quest.push_back(vec);
	}

	for (auto& i : quest)
		cout << arr.at(i.at(0)).at(i.at(1)) << "\n";

	return 0;
}

