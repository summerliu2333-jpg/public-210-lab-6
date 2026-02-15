//COMSC-210-5068, Lab 6,Yang Liu
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

void enterArrayData(double* arr, int size) {
    cout << "---- Start entering array data ----" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Please enter the value of element " << i << ": ";
        cin >> *(arr + i); 
    }
    cout << "---- Array data entry completed ----" << endl;
}

void outputArrayData(double* arr, int size) {
    cout << "---- Array data output ----" << endl;
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    cout << "---- Output completed ----" << endl;
}


void enterArrayData(double* arr, int size);
void outputArrayData(double* arr, int size);
double sumArray(double* arr, int size);

int main(){

    double* myArray = new double[ARRAY_SIZE];
    
    enterArrayData(myArray, ARRAY_SIZE);
    
    outputArrayData(myArray, ARRAY_SIZE);

    delete[] myArray;

return 0;
}