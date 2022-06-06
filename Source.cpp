#include <vector>
#include <algorithm>
#include <iostream>
#include <ctime>
#include <array> 
using namespace std;
int RandomNumber() { return (std::rand() % 100); }

bool IsEven(int i) { return ((i % 2) == 0); }

int main()
{
	srand(unsigned(std::time(0)));
	int N;
	cout << "Enter N: "; cin >> N;
	vector<int> a(N);
	generate(a.begin(), a.end(), RandomNumber);
	for (int& y : a)
		cout << y << "  ";
	cout << endl;

	vector<int> u(a.size());
	auto p = copy_if(a.begin(), a.end(), u.begin(), [](int i) {return i % 2 != 1; });
	for (int& y : u)
		cout << y << "  ";
	cout << endl;
	
	u.resize(p - u.begin());



	auto result = std::min_element(u.begin(), u.end()); 

	std::cout << "min is " << *result;
	//std::cout << ", at position " << std::distance(u.begin(), result);


	return 0;
}
