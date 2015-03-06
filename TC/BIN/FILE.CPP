#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>

/*

class word
{
	char *str;
	char *word;

	public:

		void search(char *str)
		{









using namespace std;

ifstream file("C:\TC\BIN\Word.txt");


struct _word
{
	char *str;
	char *word;
}x;

void extract()
{
	char ch;
	int i=0;
	do
	{
		file>>(char)*(x.str + i);
		i++;
	}while(ch!='.');
	x.str = new char[i];
	file.seekg(0);
	file.get(x.str,file.tellg());
	puts(x.str);
	i=0;
	do
	{
		file>>ch;
		i++;
	}while(ch!='.');
	x.word = new char[i];
	file.seekg((-i),ios::cur);
	file.get(x.word,i);
	puts(x.word);
}
*/
void main()
{
	clrscr();
	fstream file("Word2.txt",ios::out);
	file<<"Hello World!";
//	extract();
//	cout<<x.str;
//	cout<<x.word;
file.close();
	file.open("Word.txt",ios::in);
	char str[100],ch;
	while(!file.eof())
	{
		file.get(ch);
		cout<<ch;
	}
	getch();
}
