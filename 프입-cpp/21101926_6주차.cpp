#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	double ra = (RAND_MAX - rand()) / static_cast<double>(RAND_MAX);
	cout << ra;
	return 0;
}