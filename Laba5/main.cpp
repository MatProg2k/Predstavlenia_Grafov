#include <iostream>

#include "AMatrix.h"
#include "AList.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");

	AMatrix matrixGraph
	(
		{
			{ 0, 1, 0, 0, 0, 1 },
			{ 0, 0, 1, 0, 0, 0 },
			{ 0, 0, 0, 1, 0, 0 },
			{ 1, 0, 0, 0, 1, 0 },
			{ 1, 0, 0, 0, 1, 1 },
			{ 1, 0, 1, 0, 1, 0 }
		}
	);

	matrixGraph.Show();
	std::cout << std::endl;
	
	AList listGraph(matrixGraph.MatrixToList());
	listGraph.Show();
	std::cout << std::endl;

	AMatrix matrixGraph_2(listGraph.ListToMatrix());
	matrixGraph_2.Show();
	std::cout << std::endl;
	
	system("pause");
	return 0;
}