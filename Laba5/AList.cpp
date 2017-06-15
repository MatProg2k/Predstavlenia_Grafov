#pragma once
#include "AList.h"

AList::AList(std::vector<std::vector<int>> list)
{
	this->list = list;
}

std::vector<std::vector<int>> AList::ListToMatrix()
{
	std::vector<std::vector<int>> matrix;

	for (int i = 0; i < this->list.size(); i++)
	{
		std::vector<int> temp;
		for (int j = 0; j < this->list.size(); j++)
		{
			temp.push_back(0);
		}
		matrix.push_back(temp);
	}

	for (int i = 0; i < this->list.size(); i++)
	{
		for (int j = 0; j < this->list[i].size(); j++)
		{
			matrix[i][this->list[i][j]] = 1;
		}
	}

	return matrix;
}

void AList::Show()
{
	std::cout << "Список смежности:" << std::endl;
	for (int i = 0; i < this->list.size(); i++)
	{
		std::cout << i << ": ";
		for (int j = 0; j < this->list[i].size(); j++)
		{
			std::cout << this->list[i][j] << " ";
		}
		std::cout << std::endl;
	}
}