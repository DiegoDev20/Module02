char *ft_strupcase(char *str)
{
	char *t1=str;
	while(*t1)
	{
		if(*t1>='a' && *t1<='z')
			*t1=*t1-32;
		t1++;
	}
	return str;	
}
