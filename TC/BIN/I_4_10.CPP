//Program to find the number of occurrences of every alphabets
//in the text entered by the user.

#include<iostream.h>

void main()
{
	int occ[26], i=0, a;
	for(;i<26;i++)occ[i]=0;
	i=0;
	char ch, str[100];
	cout<<"\n\tEnter a string : ";
	cin.getline(str, 99);
	while(str[i]!='\0')
	{
		(char)ch=str[i];
		a=(int)ch;
		if(ch>='a'&&ch<='z')
			occ[a-97]++;
		if(ch>='A'&&ch<='Z')
			occ[a-65]++;
		i++;
	}
	i=0;
	cout<<"\n\tNo. of occurences of each alphabet : ";
	while(i<26)
	{
		ch=(char)(i+65);
		cout<<'\t'<<ch<<'\/';
		ch+=32;
		cout<<ch<<" : "<<occ[i++]<<'\t';
	}
}