#include <iostream>
#include <cmath>

// Hàm kiểm tra số chính phương
bool isPerfectSquare(int number) {
	int squareRoot = sqrt(number);
	return squareRoot * squareRoot == number;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void countAndPrintPerfectSquares(int n) {
	std::cout << "Cac so chinh phuong nho hon " << n << " la: ";
	int count = 0;
	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			count++;
			std::cout << i << " ";
		}
	}
	std::cout << "\nTong cong co " << count << " so chinh phuong." << std::endl;
}

int main() {
	int n;
	std::cout << "Nhap vao mot so nguyen duong n: ";
	std::cin >> n;
	countAndPrintPerfectSquares(n);
	return 0;
}