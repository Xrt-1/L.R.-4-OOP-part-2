#pragma once
#include <iostream>

class Model {
private:
	int A, B, C;
public:
	Model():A(0), B(0), C(0) {	
	}
	int getA() {
		if (A<0) A = 0;
		return A;

	}
	int getC() {
		if (C < 0) C = 0;
		return C;
	}
	int getB() {
		if (B < 0) B = 0;
		return B;
	}
	void setA(int a) {
		if (0 <= a && a <= 100) {
			if (a <= B) {
				A = a;
			}
		}
		else if (a > 100) A = 100;

	}
	void setB(int b) {
		if (0 <= b && b <= 100) {
			if (b < A) {
				A = A - (B - b);
				B = b;
			}
			else if (b <= C) {
				B = b;
			}
		}
		else if (b > 100) B = 100;

	}
	void setC(int c) {
		if (0 <= c && c <= 100) {
			if (c < B) {
				B = B - (C - c);
				A = A - (C - c);
			}
			C = c;
		}
		else if (c > 100) C = 100;
		
	}


};