#include <iostream>
using namespace std;

int main() {
    int rows, colms;

    // Prompt user for dimensions
    std::cout << "Enter the number of rows (maximum <=3): ";
    std::cin >> rows;
s   if (rows > 3) {
        cout << "Maximum rows out of limit. Setting rows to 3." << std::endl;
        rows = 3;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> columns;
    if (cols > 3) {
        cout << "Maximum columns exceeded. Setting columns to 3." << std::endl;
        cols = 3;
    }

    // Dynamically allocate a array
    double** dynamicArray = new double*[rows];
    for (int m = 0; m < rows; ++m) {
        dynamicArray[m] = new double[colmn];
    }

    // Assign value element
    for (int m = 0; m < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << m << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    // values output
    cout << "Array values:" << std::endl;
    for (int m = 0; m < rows; ++m) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamicArray[m][j] << "\t";
        }
        std::cout << std::endl;
    }
   

// for cleaning memory allocation
    for (int m = 0; m < rows; ++i) {
        delete[] dynamicArray[m];
    }
     
    
    
    delete[] dynamicArray;
    

    return 0;
}
