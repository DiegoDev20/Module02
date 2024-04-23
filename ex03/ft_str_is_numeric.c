int ft_str_is_numeric(char *str)
{
	if(!*str)
		return 1;
	while(*str)
	{
		if(*str>='0' && *str<='9')
			return 1;
		str++;
	}
	return 0;
	
}
