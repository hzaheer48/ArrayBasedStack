#include<iostream>
using namespace std;
template <typename T>
class stack {
	const int n;
	int top_ind;
	T* data;
public:
	stack(const int& s = 0) : n(s) {
		top_ind = -1;
		data = new T[n];
	}
	~stack() {
		delete[] data;
	}
	void push(const T& val) {
		top_ind++;
		data[top_ind] = val;
	}
	T top() const {
		return data[top_ind];
	}
	void pop() {
		top_ind--;
	}
	bool empty() const {
		return top_ind == -1;
	}
	void make_empty() {
		top_ind = -1;
	}
	bool full() const {
		return top_ind == n - 1;
	}
};