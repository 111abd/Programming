#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	
	double A=(x2-x1);
	double B= (y2-y1);

	double dist = sqrt(A*A+B*B);
	cout << fixed << setprecision(4)<< dist <<endl;

	return 0;
}
