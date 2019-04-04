#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
	char entradas[1000];
	int count=0;
	while(gets(entradas))
	{
		int x=strlen(entradas);
		
		for (int i=0;i<x;i++)
		{
			
			if (entradas[i]=='"')
			{
				count=count+1;
				if(count%2==0)
				{
					cout<<'\'';
					cout<<'\'';	
				}
				else if(count%2!=0)
				{
					cout<<'`';
					cout<<'`';
				}
				
			}
			else cout<<entradas[i];
		}
}
	
    return 0;
}
