#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int get_line(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
int main()
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    char above80[100][MAXLINE];
    int count = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > 80)
        {
            copy(above80[count], line);
	    ++count;
	}
    for (int i = 0; i < count; ++i)
	    printf("Longest lenth: %d \n %s \n \n================\n", i, above80[i]);
    return 0;
}
/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;
    int count;
    count = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        ++count;
        if (i < lim - 1)
        {
            s[i] = c;
        }
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return count;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    if (i < 999)
        while ((to[i] = from[i]) != '\0')
            ++i;
}
