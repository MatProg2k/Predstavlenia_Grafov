#pragma once
#include "AMatrix.h"

AMatrix::AMatrix(std::vector<std::vector<int>> matrix)
{
	this->matrix = matrix;
}

std::vector<std::vector<int>> AMatrix::MatrixToList()
{
	std::vector<std::vector<int>> list;
	for (int i = 0; i < this->matrix.size(); i++)
	{
		std::vector<int> temp;
		for (int j = 0; j < this->matrix[i].size(); j++)
		{
			if (this->matrix[i][j] == 1)
			{
				temp.push_back(j);
			}
		}
		list.push_back(temp);
	}

	return list;
}

void AMatrix::Show()
{
	std::cout << "Матрица смежности:" << std::endl;
	for (int i = 0; i < this->matrix.size(); i++)
	{
		for (int j = 0; j < this->matrix[i].size(); j++)
		{
			std::cout << this->matrix[i][j] << "	";
		}
		std::cout << std::endl;
	}
}