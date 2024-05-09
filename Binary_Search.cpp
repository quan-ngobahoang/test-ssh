#include <iostream>
#include <vector>
using namespace std;

int Binary_Search(vector<int> vec, int left, int right, int number){
	while(left <= right){
		int mid = left + (right - left) / 2;
		if (vec[mid] == number){
			return mid;
		}
		if (vec[mid] < number){
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return -1;
}

int main (int argc, char *argv[]){
	vector<int> vec {1,2,3,5,6,8,13,16,19,22,25};
	int result = Binary_Search(vec, 0, vec.size() - 1, 16);
	if (result == -1){
		cout << "Number not in vec" << endl;
	} else {
		cout << "Number in the index: " << result << endl;
	} 
	system("pause");
	return 0;
}