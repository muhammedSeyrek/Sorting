#include <iostream>
using namespace std;
int main(){
	int index, k = 0;
	int array[] = {7, 2, 87, 32, 78, 9, 43, 1, 10};
    for(int i = 1; i < sizeof(array) / 4; i++){
        index = 0;
        for(int j = i - 1; j >= 0; j--){
            if(array[i - index] < array[j]){
                int swap = array[i - index];
                array[i - index] = array[j];
                array[j] = swap;
                index++;
            }
        }
        cout << array[k++] << " ";
    }
	return 0;
}
