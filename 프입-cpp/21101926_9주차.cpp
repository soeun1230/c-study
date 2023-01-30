#include <iostream>
#include <string>
using namespace std;;

int main() {
	string s1, s2, s3;
	cout << "Enter two strings." << endl;
	getline(cin, s1);
	getline(cin, s2);

	for (int i = 0; i < s1.length(); i++) {
		if (isupper(s1[i])) {
			s1[i] = tolower(s1[i]);
		}
	}

	for (int i = 0; i < s2.length(); i++) {
		if (isupper(s2[i])) {
			s2[i] = tolower(s2[i]);
		}
	}

	s3 = s2;

	for (int i = 0; i < s1.length(); i++) {
		if (s2.find(s1[i]) <= s2.length()) {
			s2[s2.find(s1[i])] = 0;
		}
		else {
			cout << "They are not anagrams.";
			break;
		}
		if (i == s1.length() - 1) {
			for (int j = 0; j < s2.length(); j++) {
				if (s2[j] != 0) {
					cout << "They are not anagrams.";
					break;
				}
				if (j == s2.length() - 1) {
					cout << "They are anagrams !";
				}
			}
		}
	}

}