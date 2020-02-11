#include<iostream>
#include<list>
using namespace std;

int main() {
	list<int> l;

	l.push_back(20);
	l.push_front(10);
	l.push_back(20);
	l.push_back(70);
	l.insert(l.begin(),60);
	l.push_back(20);
	l.push_back(40);
	l.push_back(30);
	l.push_back(50);
	l.push_front(100);

	for (auto i = l.begin(); i != l.end();i++) {
		cout << *i << ' ';
	}

	cout << "\n----Reverse---\n";
	l.reverse();
	for (auto i = l.begin(); i != l.end(); i++) {
		cout << *i << ' ';
	}

	cout << "\n----Sorted data---\n";
	l.sort();
	for (auto i = l.begin(); i != l.end(); i++) {
		cout << *i << ' ';
	}

	cout << "\n----Unique data---\n";
	l.unique();
	for (auto i = l.begin(); i != l.end(); i++) {
		cout << *i << ' ';
	}

	cout << "\n----Iterator way to print---\n";
	list<int>::iterator i;
	for (i = l.begin(); i != l.end(); i++) {
		cout << *i << ' ';
	}
	
	cout << "\n----Iterator way 2 to print---\n";
	for (int i : l) {
		cout << i << ' ';
	}
	return 0;
}