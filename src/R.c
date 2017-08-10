#include <stdio.h>
int main(int argc, char const *argv[])
{
	char cmd[150]={0},ch=0;
	int i = 0;
	FILE *ini;
	if((ini = fopen("R.ini","r")) == NULL)
	{
		puts("Fail run R! Not ini.\n");
		return 0;
	}

	for (; (ch = fgetc(ini))!= 10 ; ++i)
	{
		cmd[i]=ch;
	}
	fclose(ini);

	// strcat(cmd,"php5\\php a.php");
	i = 1;
	for (; i < argc; ++i)
	{
		strcat(cmd," ");
		strcat(cmd,argv[i]);
		// printf("%s\n", argv[i]);
	}
	// puts(cmd);
	system(cmd);
	return 0;
}