#include <iostream>
#include <ctime>

using namespace std;

int Multi(int* arr, int N)
{
	int a = 1;
	for (int i = 0; i < N; i++)
		if (arr[i] == 0)
		{
			int j = i + 1;
			while (arr[j] != 0)
			{
				a *= arr[j];
				j++;
			}
			return a;
		}

	return -1;
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
	cout<< "Сортировка по возрастанию:" <<endl;
	for (int i = 0; i < N; i++)
	{
	    
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int N;
	cout << "Введите размер массива: ";
	cin >> N;

	int* arr = new int[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 30;
		arr[4]=0;
		arr[7]=0;
		cout << arr[i] << " ";
	}
	cout << endl;

	int index = 1;
	for (int max = arr[0], i = 1; i < N; i++)
		if (arr[i] > max)
		{
			max = arr[i];
			index = i + 1;
		}
	cout << "Номер максимального элемента массива: " << index << endl;
	int m = Multi(arr, N);
	if (m != -1)
		cout << "Произведение элементов между двумя первыми нулями: " << m << endl;
	else
		cout << "В массиве нет нулей" << endl;
	for (int i = 1; i < N; i++)
		for (int j = i; j < N - i; j += 2)
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
    
    cout << "Сортировка по нечетным и четным индексам: "<<endl;;
	for(int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;

    InsertionSort(arr,N);

	system("pause");
	return 0;
}
