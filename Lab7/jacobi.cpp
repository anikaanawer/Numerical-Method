#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void jacobi(vector<vector<double>>& A, vector<double>& b, int maxit, vector<double>& x) {
    int n = A.size(); //Here, n is the size of the system, which is determined by the number
                      //of rows in matrix A. x_new is a temporary vector used to store the
                      //updated values of the solution in each iteration.
    vector<double> x_new(n);

    for (int iter = 0; iter < maxit; iter++) {
        for (int i = 0; i < n; i++) {
            x_new[i] = b[i];
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    x_new[i] -= A[i][j] * x[j];//x_new=17-A[0][
                }
            }
            x_new[i] /= A[i][i]; //x_new=17/A[0][0]
        }

        x = x_new; // Update the solution vector
    }
}

int main() {
    int n;

    cout << "Enter the number of variables: ";
    cin >> n;

    vector<vector<double>> A(n, vector<double>(n));
    vector<double> b(n);
    vector<double> x(n, 0); // Initialize the solution vector with zeros

    cout << "Enter the value matrix A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the value matrix b:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int maxit;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxit;

    jacobi(A, b, maxit, x);

    cout << "Solution to the system of equations:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return 0;
}

