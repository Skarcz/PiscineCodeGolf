char *c(char*d,char*s){
int i=0;
while((d[i]=s[i]))
i++;
return d;
}
// We can squeeze the while loop into the condition itself.
// wc -c 68 Bytes