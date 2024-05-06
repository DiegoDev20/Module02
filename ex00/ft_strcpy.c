char *ft_strcpy(char *dest,char *src)
{
	char *d=dest;
	while(*src)
	{
		*dest=*src;
		src++;
		dest++;
	}
	return d;
}
