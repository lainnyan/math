#include <iostream>
#include <ctime>

using namespace std;

int Multi(int* arr, int N)
{
	int a =1;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == 0)
		{
			int j = i + 1;
			while (arr[j] != 0)
			{
				a *= arr[j];
				j++;
			}
		}
		return a;
	}
}

void  EvenSort(int*& arr, int N)
{
	for (int i = 1; i < N;i++)
	{

	}
}
void InsertionSort(int*& arr, int N)
{
	int key;
	for (int j, i = 1; i < N; i++)
	{
		key = arr[i];
		j = i;
		while (j > 0 && arr[j - 1] > key)
		{
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}

int main()
{
	setlocale(0, "Rus");
	int N, index = 0, indexFirst,indexSecond;
	cout << "Введите размер массива: ";
	cin >> N;

	int* arr = new int[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	int max = arr[0];
	//InsertionSort(arr, N);
	//cout << "Номер максимального элемента массива: " << N;
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i+1;
		}
	}
	cout << "Номер максимального элемента массива: "<<index<<endl;

	cout << Multi(arr, N);
}
