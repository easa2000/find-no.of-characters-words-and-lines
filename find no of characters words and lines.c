// program to read multiple lines of text a* is entered then count no of characters, words and lines

#include<stdio.h>
void main()
{
    char str[200];
    int char_count = 0, word_count = 0, line_count = 0,i=0;
    printf("\n Enter a * to end");
    printf("\n Enter the text: ");
    scanf("%c",&str[i]);
    while(str[i] != '*')
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i] = '\0';
    i=0;
    while(str[i] != '\0')
    {
        if(str[i] == '\n' || i == 79)
           line_count++;
        if(str[i] == ' ' && str[i+1] != ' ')
           word_count++;
        char_count++;

        i++;
    }

    printf("\n Total count of word is %d",word_count+1);
    printf("\n Total count of lines is %d",line_count + 1);
    printf("\n Total count of character is %d",char_count);

}
