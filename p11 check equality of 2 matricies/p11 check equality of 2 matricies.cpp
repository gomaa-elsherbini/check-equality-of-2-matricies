#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 10);
		}
	}
}
void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			//cout << setw(3) << arr[i][x] << "	";
			printf("  %0*d  ", 2, arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}
int sumOfMatrix(int arr[3][3], int Rows, int Colos)
{
	int sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
			sum += arr[i][x];
	}
	return sum;
}
bool checkEqualityOfTwoMatricies(int arr1[3][3], int arr2[3][3], int Rows, int Colos)
{
	return sumOfMatrix(arr1, Rows, Colos) == sumOfMatrix(arr2, Rows, Colos);
}
void printResult(int arr1[3][3], int arr2[3][3], int Rows, int Colos)
{
	if (checkEqualityOfTwoMatricies(arr1, arr2, Rows, Colos))
		cout << "   Yes: Matricies are equal.\n";
	else
		cout << "   No: Matricies are not equal.\n";
}

int main()
{
	srand((unsigned)time(NULL));
	int arr1[3][3],arr2[3][3];

	fill3X3MatrixWithRandomNumbers(arr1, 3, 3);
	cout << "   Matrix1: \n";
	printMatrix3X3(arr1, 3, 3);
	cout << "Sum of matrix1 = " << sumOfMatrix(arr1, 3, 3)<<endl;

	fill3X3MatrixWithRandomNumbers(arr2, 3, 3);
	cout << "   Matrix2: \n";
	printMatrix3X3(arr2, 3, 3);
	cout << "\nSum of matrix2 = " << sumOfMatrix(arr2, 3, 3)<<endl;

	printResult(arr1, arr2, 3, 3);



	return 0;
}



