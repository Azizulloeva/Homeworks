#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef double(*pfun)(double);
double f(double x){return x-cos(x);}
double g(double x){return x*x+2*x;}
double neuton(pfun act,double a,double b,double fall=0.001)
{
	double x=0;
	double m=0;
	if (a>b)
	{
		int t=a;
		a=b;
		b=t;
	}
	if (a*(-1)==b)b++;
	do
	{
		m=(a+b)/2;
		x=act(m);
		if (m>0)
		{
			if (x>0+fall)b=m;
			if (x<0+fall)a=m;
		}
		if (m<0)
		{
			if (x>0+fall)a=m;
			if (x<0+fall)b=m;
		}
		if (x<=0+fall && x>=0-fall)return m;
	}while(true);
}
int main()
{
	setlocale(LC_ALL,"Rus");
	int fu=0;
	double a,b;
	pfun arr[]={f,g};
	do
	{
		cout << "1. f \n";
		cout << "2. g \n";
		cout << "Ââĺäčňĺ íîěĺđ ôóíęöčč, ęîňîđóţ âű őîňčňĺ ďĺđĺäŕňü â ďđîăđŕěěó: ";
		cin >> fu;
		if (fu<0 || fu>2)cout << "Íĺâĺđíî ââĺä¸ííűĺ äŕííűĺ, ďîďđîáóéňĺ ĺů¸ đŕç!\n";
	}while (fu<0 || fu>2);
	cout << "Ââĺäčňĺ â ęŕęîě îňđĺçęĺ íŕőîäčňń˙ đĺřĺíčĺ\na: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "Ęîđĺíü óđŕâíĺíč˙ = " << neuton(arr[fu-1],a,b) << "\n";
	delete[] arr;
}