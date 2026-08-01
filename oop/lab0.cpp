#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using std::cout;
using std::setw;

//check for prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
//calculate sum
int calculateSum(const std::vector<std::vector<int>>& A, int i, int j) {
    int rows = A.size();
    int cols = A[0].size();
    int sum = 0;

    //center
    if (isPrime(A[i][j]))
        sum += A[i][j];

    // bottom row
    if (i + 1 < rows) {
        for (int y = 0; y < cols; y++) {
            if (isPrime(A[i + 1][y]))
                sum += A[i + 1][y];
        }
    }

  
    for (int k = 1; k <= 3; k++) {
        int x = i - k;
        if (x >= 0) {
            // left diagonal
            int y1 = j - k;
            if (y1 >= 0 && isPrime(A[x][y1]))
                sum += A[x][y1];

            // right diagonal
            int y2 = j + k;
            if (y2 < cols && isPrime(A[x][y2]))
                sum += A[x][y2];
        }
    }

    return sum;
}

//for printing matrix
void printMatrix(const std::vector<std::vector<int>>& A, std::ostream& out) {
    for (const auto& row : A) {
        for (int val : row) {
            out << val << " ";
        }
        out << '\n';
    }
}


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

    std::ofstream file("lab0.txt");
    if (!file.is_open()) {
        cout << "Error opening file\n";
        return 1;
    }

    cout << "The matrix is:\n\n";
    printMatrix(A, cout);
    cout << "\n\n";

    file << "The matrix is:\n\n";
    printMatrix(A, file);
    file << "\n\n";

    // Header
    const std::string header = "------------------------------------------\n"
                               "| No. |  i  |  j  |   Result (Sum)     |\n"
                               "------------------------------------------\n";

    cout << header;
    file << header;

    int counter = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int sum = calculateSum(A, i, j);

            cout << "| " << setw(3) << counter
                 << " | " << setw(3) << i
                 << " | " << setw(3) << j
                 << " | " << setw(18) << sum << " |\n";

            file << "| " << setw(3) << counter
                 << " | " << setw(3) << i
                 << " | " << setw(3) << j
                 << " | " << setw(18) << sum << " |\n";

            counter++;
        }
    }

    file.close();
    cout << "\nFile saved as lab0.txt\n";

    return 0;
}