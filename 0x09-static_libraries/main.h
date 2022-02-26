#ifndef MAIN_H
#define MAIN_H

int _putchar(char);

/** 0x02 **/
int _islower(int c);
int _isalpha(int c);
int _abs(int);

/** 0x04 **/
int _isupper(int c);

/** 0x05 **/
void _puts(char *str);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

/** 0x06 **/
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

/** 0x07 **/
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */
