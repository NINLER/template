#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

typedef long long 			ll;
typedef unsigned long long	ull; 

ll a,b,p;

// Fast power code
ll power(ll a,ll b,ll p)
{
	ll ans=1%p;
	while(b)
	{
		if(b%2)
			ans=ll((ans*a)%p);
		a=ll((a*a)%p);
		b>>=1;
	}
	return ans;
}
// Fast power code

void PRINT_STRING(string output,bool newline=false,int delay=20)
{
	for(int i=0; i<output.size(); i++)
	{
		cout<<output[i];
		Sleep(delay);
	}
	if(newline)
		cout<<endl;
}

int main()
{
	PRINT_STRING("Copyright (C) 2021 NINLER , All rights reserved.",true);
	Sleep(500);
	PRINT_STRING("This program is a template for calculate a^b mod p .",true);
	Sleep(500);
	while(true)
	{
		PRINT_STRING("Input a,b,p (0 < a,b,p) .(Input a negative number to exit.)",true);
		Sleep(500);
		cin>>a;
		if(a<0)
		{
			PRINT_STRING("Thanks for using!",true);
			return 0;
		}
		cin>>b>>p;
		if(a==0)
		{
			PRINT_STRING("a is not a positive number!",true);
			continue;
		}
		if(b<=0)
		{
			PRINT_STRING("b is not a positive number!",true);
			continue;
		}
		if(p<=0)
		{
			PRINT_STRING("p is not a positive number!",true);
			continue;
		}
		PRINT_STRING("The result of a^b mod p is ");
		cout<<power(a,b,p);
		PRINT_STRING(" .",true);
		Sleep(500);
	}
	return 0;
}
