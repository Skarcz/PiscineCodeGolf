char *ft_strcpy(char*dest, char*src)
{
int i=0;
while(src[i])
{
dest[i]=src[i];
i++;
}
dest[i]='\0';
return dest;
}
// Tweaks like removing spaces and breaking norminette compliance.
// wc -c 115 Bytes