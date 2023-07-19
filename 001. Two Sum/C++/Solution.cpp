#include <iostream>
#include <vector>

using namespace std;

int* twoSum(int arr[], int size, int target);
void arrPass(int arr[], int size);
vector<int> twoSumV(vector<int>& nums, int target);

int main() {
    int arr[] = {2, 7, 11, 15};
    vector<int> vect = {2, 7, 11, 15};
    int target = arr[2] + arr[3];

    arrPass(arr, 4);

    int *result = twoSum(arr, sizeof(arr), target);

    for(int i = 0; i < 2; i++)
        cout << result[i] << " ";
    
    cout << endl;

    vector vRes = twoSumV(vect, target);
    for (int v : vRes)
        cout << v << " ";
    
    cout << endl;

    return 0;
}

vector<int> twoSumV(vector<int>& nums, int target)
{
    vector<int> res;
    res.assign(2, 0);

    for (int i = 0; i < nums.size() - 1; i++)
        for (int j = i + 1; j < nums.size(); j++)
            if (nums[i] + nums[j] == target)
            {
                res[0] = i;
                res[1] = j;
                return res;
            }

    return res;
}

int* twoSum(int arr[], int size, int target)
{
    int* res = new int[2];

    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    
    return res;
}

void arrPass(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;
}