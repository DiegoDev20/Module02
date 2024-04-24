char *ft_strlowcase(char *str)
{
	char *t=str
	while(*t)
	{
		if(*t>='A' && *t<='Z')
			*t=*t+32;
		t++;
	}
	return str;
}
