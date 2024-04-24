char *ft_strcapitalize(char *str)
{
	char *t=str;
	while(*t)
	{
		if(*t>='A' && *t<='Z')
			*t=*t+32;
		if(*(t-1)==' ' || *(t-1)=='\0' || (*(t-1)>=42 && *(t-1)<=47))
		{
			if(*t>='a' && *t<='z')
				*t=*t-32;	
		}
		t++;
	}
	return str;
}
