char *c(char*d, char*s)
{
int i=0;
while(s[i])
{
d[i]=s[i];
i++;
}
d[i]='\0';
return d;
}
// No need for long names
// wc -c 89 Bytes