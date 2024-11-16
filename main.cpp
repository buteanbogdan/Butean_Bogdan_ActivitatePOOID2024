#include <stdio.h>
#include <iostream>
using namespace std;

enum culoareSteag {albastru = 10, galben = 20, rosu = 30};

int main() {
	culoareSteag s1 = culoareSteag::galben;
	cout << s1 << endl;
	
}