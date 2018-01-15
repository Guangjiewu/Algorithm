void *movemem(void* dest, const void *src, size_t n)
{
	char *p1 = dest;
	const char *p2 = src;
	if(p1>p2)
	{
		p1+=n;
		p2+=n;
		while(n--!=0)
		{
			*--p1 = *--p2;
		}
		
	}
	
	else
	{
		while(n--!=0)
		{
		   *p1++ = *p2++;
		}
	}
	
	return p1;
}