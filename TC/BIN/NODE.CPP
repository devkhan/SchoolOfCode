struct node
{
	char *word;
	node *next;
}*f,*l,*t;

void list(char *line)
{
	int n=strlen(line),nc=0;
	for(int i=0;i<n;i++)
	{
