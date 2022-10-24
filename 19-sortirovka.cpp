#include<iostream>

using namespace std;

const int n_max = 1000;

void Merge(int arr[], int begin, int end)
{
    int i = begin,
            t = 0,
            mid = begin + (end - begin) / 2,
            j = mid + 1,
            d[n_max];

    while (i <= mid && j <= end){

        if (arr[i] <= arr[j]) {
            d[t] = arr[i]; i++;
        }
        else {
            d[t] = arr[j]; j++;
        }
        t++;
    }

    while (i <= mid){
        d[t] = arr[i]; i++; t++;
    }

    while (j <= end){
        d[t] = arr[j]; j++; t++;
    }

    for (i = 0; i < t; i++)
        arr[begin + i] = d[i];
}

void MergeSort(int *arr, int left, int right)
{
    int  temp;
    if (left<right)
        if (right - left == 1) {
            if (arr[right]<arr[left]){
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }
        else {
            MergeSort(arr, left, left + (right - left) / 2);
            MergeSort(arr, left + (right - left) / 2 + 1, right);
            Merge(arr, left, right);
        }
}



void input(int *m, int &n)
{
    cout << "Vvedite razmer massiva\n";
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> m[i];
    }

}
void print(int *m, int n)
{
    for (int i = 0; i<n; i++)
        cout << m[i] << " ";
    cout << "\n";

}
int main()
{

    int n, a[n_max];
    input(a, n);
    cout << "nachalniy massiv:\n";
    print(a, n);
    MergeSort(a, 0, n - 1);
    cout << "otsortirovanniy massiv:\n";
    print(a, n);


}
