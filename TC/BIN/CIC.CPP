#include<iostream.h>
#include<string.h>
#include<conio.h>

int max(int arr[])
{
	int max=arr[0],pos=0;
	for(int i=1;i<26;i++)
	{
	/*	if(arr[i]==0)
		{
			max=0;
			cout<<(char)(i+65);
			break;
		}   */
		if(arr[i]>max)
		{
			pos=i;
			max=arr[i];
		}
	}
	arr[pos]=-1;
	return pos+65;
}

void main()
{
	clrscr();
	char str[]="CLUSTER INNOVATION CENTRE";
	char a[26];
	int keys,lonk;
	cout<<"\n\tEnter no. of keys : ";
	cin>>keys;
	cout<<"\n\tEnter max no of letters on one key : ";
	cin>>lonk;
	int al[26],c,l;
	for(int y=0;y<26;y++)al[y]=0;
	for(int i=0,n=strlen(str); i<=n ;i++)
	{
		c=(int)(str[i]);
		al[c-65]++;
	}
	for(int x=0;x<n;x++)cout<<al[x];
	for(int k=0;k<lonk;k++)
	{
		cout<<"\n\nLetter "<<k+1<<" on ";
		for(int j=0;j<keys;j++)
		{
			cout<<"Key"<<j+1<<" : ";
			l=max(al);
			if(l==0)
				break;
			cout<<(char)l;
		}
		if(l==0)
			break;
	}
	cout<<"\n\tAnd the rest keys can be placed after any key in any way";
	getch();
}