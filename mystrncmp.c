 #include "main.h"
 
 int _strncmp(const char *s1, const char *s2, size_t n)
 {
     size_t i = 0;

     while (*s1 == *s2 && i < n)
     {
         s1++;
         s2++;
         i++;
     }
      
     if (--s1 == --s2)
     {
         return (0);
     }
      return (1);
 }