#pragma once
#include <iostream>
#include <functional>
#include <vector>
using namespace System;
using namespace System::Collections::Generic;

public delegate void DataChangedEventHandler(Object^ sender, EventArgs^ e);
public ref class Model {
private:
	int A, B, C;
	List<DataChangedEventHandler^>^ dataChangedListeners;
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
				notifyObservers();
			}
		}
		//else if (a > 100) A = 100;

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
			notifyObservers();
		}
		/*else if (b > 100) {
			B = 100;
			notifyObservers();
		}
		else if (b < 0) {
			B = 0;
		}*/

	}
	void setC(int c) {
		if (0 <= c && c <= 100) {
			if (c < B) {
				B = B - (C - c);
				A = A - (C - c);
			}
			C = c;
			notifyObservers();
		}
		/*else if (c > 100){
			C = 100;
			notifyObservers();
		}	*/	
	}

};

public class Model {
	private int value;
	public int System.EventHandler DataChanged;
	public void setValue{
		...
	DataChanged.Invoke(this,null);
	}

};