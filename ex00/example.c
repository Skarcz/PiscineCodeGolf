char *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest) ;
}

//Norminette compliant version of the ft_strcpy function. 
//It copies the string pointed to by src to the buffer pointed to by dest. 
//The function returns a pointer to the destination string dest.
// wc -c 188 Bytes