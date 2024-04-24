unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    char *t1 = dest;
	int cant=0;
	if(src==NULL || dest==NULL)
		return 0;
    while (size-1>0 && *src) 
	{
        *t1 =*src;
        t1++;
       	src++;
		cant++;
		size--;
    }
    *t1 = '\0';
    return cant;
}
