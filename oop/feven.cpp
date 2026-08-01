#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using std::cout;
using std::setw;

int main() {
    const int ROWS = 7;
    const int COLS = 6;

    std::vector<std::vector<int>> A = {
        {2, 4, 6, 8, 10, 3},
        {5, 9, 12, 7, 14, 15},
        {11, 16, 13, 18, 20, 21},
        {22, 23, 24, 17, 26, 27},
        {2, 3, 5, 7, 11, 13},
        {29, 30, 31, 32, 33, 34},
        {35, 36, 37, 38, 39, 40}
    };

    std::ofstream file("lab10.txt");
    if (!file.is_open()) {
        cout << "Error opening file\n";
        return 1;
    }

   
    cout << "The matrix is:\n\n";
    for (const auto& row : A) {
        for (int val : row) cout << val << " ";
        cout << '\n';
    }
    cout << "\n\n";

    file << "The matrix is:\n\n";
    for (const auto& row : A) {
        for (int val : row) file << val << " ";
        file << '\n';
    }
    file << "\n\n";

    // Заголовок
    cout << "--------------------------------------\n";
    cout << "| No. |  i  |  j  |   Result (Sum)   |\n";
    cout << "--------------------------------------\n";

    file << "--------------------------------------\n";
    file << "| No. |  i  |  j  |   Result (Sum)   |\n";
    file << "--------------------------------------\n";

    int counter = 1;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int current = A[i][j];   
            long long sum = 0;       

           
            if (i + 1 < ROWS) {
                for (int c = j; c <= j + 3 && c < COLS; c++) {
                    sum += A[i + 1][c];
                }
            }

     
            for (int c = j + 3; c < COLS; c++) {
                sum += A[i][c];
            }
          

            cout << "| " << setw(3) << counter
                 << " | " << setw(3) << i
                 << " | " << setw(3) << j
                 << " | " << setw(16) << sum << " |\n";

            file << "| " << setw(3) << counter
                 << " | " << setw(3) << i
                 << " | " << setw(3) << j
                 << " | " << setw(16) << sum << " |\n";

            counter++;
        }
    }

    file.close();
    cout << "\nThe output is saved in lab10.txt\n";

    return 0;
}