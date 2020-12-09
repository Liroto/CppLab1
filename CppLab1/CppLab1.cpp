#include <iostream>
#include <string>
#include <array>
using namespace std;


void processArray(int arr[], int n) 
{
	int iterator = 1;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			arr[i] = pow(2, iterator);
		}
		else
		{
			arr[i] = pow(3, iterator);
			iterator++;
		}
		if (arr[i] > 9 && arr[i] < 100) {
			count++;
		}
		cout << arr[i] << endl;
	};

	cout << "There are a " << count << " two-digit numbers:" << endl;
	int counter = 0;
	int *result_massive = new int[count];
	

	for (int j = 0; j < n; j++)
	{
		if (arr[j] > 9 && arr[j] < 100) 
		{
			result_massive[counter] = arr[j];
			counter++;
		}	
	}

	for (int i = 0; i <= sizeof(result_massive)/*4*/; i++)
	{
		cout << result_massive[i] << endl;
	}
}

int main()
{
	const int n = 16;
	int nums[n] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };

	processArray(nums, n);
	cout << "Main function is finished." << endl;
}
