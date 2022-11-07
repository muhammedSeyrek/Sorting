#include <iostream>
using namespace std;
int main(){
 	int array[] = {7, 2, 87, 32, 78, 9, 43, 1, 10};
	for(int i = 0; i < (sizeof(array) / 4) - 1; i++){
        for(int j = i + 1; j < sizeof(array) / 4; j++){
            if(array[i] > array[j]){
                int swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }							
        cout << array[i] << " ";
    }
	return 0;
}
