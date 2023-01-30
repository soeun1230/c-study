#include <iostream>
#include <vector>
using namespace std;

string d(string n) {
	int big = n.size();
	int sum = int(n);
	for (int i = 0; i < big; i++) {
		sum = sum + n[i];
	}
	return sum;
}

int main() {
	cout<<d(11);

}
