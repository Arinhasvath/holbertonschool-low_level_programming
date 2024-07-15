#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }

    unsigned int len1 = 0, len2 = 0;
    
    while (s1[len1] != '\0')
    {
        len1++;
    }
    
    while (s2[len2] != '\0')
    {
        len2++;
    }

    if (n >= len2)
    {
        n = len2;
    }

    char *concat = malloc(len1 + n + 1);
    if (concat == NULL)
    {
        return NULL;
    }

    unsigned int i;
    for (i = 0; i < len1; i++)
    {
        concat[i] = s1[i];
    }

    for (unsigned int j = 0; j < n; j++, i++)
    {
        concat[i] = s2[j];
    }

    concat[i] = '\0';
    
    return concat;
}
int main(void) {
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    if (concat == NULL) {
        printf("failed\n");
        return 1;
    }
    printf("%s\n", concat);
    free(concat);
    return 0;
}