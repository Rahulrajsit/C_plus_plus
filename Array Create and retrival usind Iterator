/*********************************************************
      Array Create and retrival usind Iterator 
 ********************************************************/
#include<iostream>
#include<array>
#include<vector>

using namespace std;

int main() {
	array<int, 10> my;
	int i = 0;
  
  //Insert data in array  
	for (i = 0; i < my.size(); i++) {
		my.at(i) = i + 1;
	}
  
  //Normal data print 
	for (i = 0; i < 10; i++) {
		cout << my.at(i) << ' ';
	}
	cout << "\nFront:" << my.front() << endl;
	cout << "End:" << my.back() << endl;

  //using Iterator
	for (int& x : my) cout << x << ' ';
	cout << endl;

  //using begin and end retrive
	for (auto i = my.begin(); i < my.end(); i++)
		cout << *i << ' ';

	cout << "\nSize is: " << my.size();
	cout << "\nMax_Size is: " << my.max_size();
	return 0;
}
