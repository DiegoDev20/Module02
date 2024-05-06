

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *d=dest;
	while(n>0)
	{	
		*dest=*src;
		src++;
		dest++;
		n--;
	}
	*dest='\0';
	return d;
}
