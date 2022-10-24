#include<iostream>

using namespace std;

int main(){
	int n = 3;
	int*** array = new int**[n];
	for(int i = 0; i<n;i++){
		array[i] = new int*[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array[i][j] = new int[n];
		}
	}
	
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				array[i][j][k] = count;
				count++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				cout << array[i][j][k] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			delete[] array[i][j];
		}
	}
	delete[] array;
	return 0;
}
