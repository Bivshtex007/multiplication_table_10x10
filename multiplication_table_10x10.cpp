#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int y;
int x;

for (x=1; x<=10; x++) {
	for (y=1; y<=10; y++) {
		cout << x*y << " ";
	}
	cout << endl;
	cout << x << " ";
}

return 0;	
}
