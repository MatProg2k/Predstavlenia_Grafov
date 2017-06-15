#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define INF INT_MIN
#define PLM INT_MAX

class AList
{
private:

	std::vector<std::vector<int>> list;
public:

	AList(std::vector<std::vector<int>> list);
	std::vector<std::vector<int>> ListToMatrix();
	void Show();
};