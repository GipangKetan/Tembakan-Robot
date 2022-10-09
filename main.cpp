// NAMA		: Abyaz Fari Soemoprawiro
// NRP		: 5016221019
// Jurusan	: Teknik Geomatika

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int jarak;
 float a,b,c,d,e;
 cin>>a;
	if(a>=1 && a<=10)
	{
		b=1;
	}
	else if (a>=11 && a<=20)
	{
		b=3;
	}
	else if (a>=21 && a<=30)
	{
		b=5;
	}
 c= (float) a;
 d= (float) b;
 jarak = sin((2*45)/57.2958)*(c-d)*(c-d)/10;
 e=sqrt(jarak*10)+b;
 cout<<jarak;
 cout<<" ";
 cout<<e;
 return 0;
}
