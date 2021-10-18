#include <iostream>



int main() {
	using namespace std;
	bool flag = 0;
	const size_t n = 3;
	char matrix[n][n];
	size_t placePositionI, placePositionJ;



	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			matrix[i][j] = '.';

			if (i ==1 && j == 1) {

				matrix[i][j] = 'X';

			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			cout << matrix[i][j] << ' ';

		}
		cout << endl;
	}

	cout << "Enter where to place O: ";
	cin >> placePositionI >> placePositionJ;

	matrix[placePositionI][placePositionJ] = 'O';

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			if (matrix[i][j] == '.'&&!flag) {

				matrix[i][j] = 'X';
				flag = 1;
			
			}
		}
	}
	flag = 0;



	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			cout << matrix[i][j] << ' ';

		}
		cout << endl;
	}

	cout << "Enter where to place O: ";
	cin >> placePositionI >> placePositionJ;

	matrix[placePositionI][placePositionJ] = 'O';

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			if (matrix[i][j] == '.' && !flag) {

				matrix[i][j] = 'X';
				flag = 1;

			}
		}
	}
	flag = 0;



	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			cout << matrix[i][j] << ' ';

		}
		cout << endl;
	}

	return 0;
}
