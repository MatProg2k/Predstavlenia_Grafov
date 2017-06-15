#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
//AMatrix.h
#define INF INT_MIN
#define PLM INT_MAX

class AMatrix
{
private:

	std::vector<std::vector<int>> matrix;
public:

	AMatrix(std::vector<std::vector<int>> matrix);
	std::vector<std::vector<int>> MatrixToList();
	void Show();
};