#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    /* --- Character Classification & Conversion --- */
    assert(ft_isalpha('A') == 1);
    assert(ft_isalpha('5') == 0);

    assert(ft_isdigit('9') == 1);
    assert(ft_isdigit('a') == 0);

    assert(ft_isalnum('z') == 1);
    assert(ft_isalnum(' ') == 0);

    assert(ft_isascii(127) == 1);
    assert(ft_isascii(128) == 0);

    assert(ft_isprint(' ') == 1);
    assert(ft_isprint('\n') == 0);

    assert(ft_toupper('c') == 'C');
    assert(ft_toupper('C') == 'C');

    assert(ft_tolower('Z') == 'z');
    assert(ft_tolower('$') == '$');

    /* --- String Manipulation --- */
    assert(ft_strlen("42 Heilbronn") == 12);
    assert(ft_strlen("") == 0);

    char dst1[10] = "xxxxx";
    assert(ft_strlcpy(dst1, "Hello", 10) == 5);
    assert(strcmp(dst1, "Hello") == 0);
    
    char dst2[3] = "xxxxx";
    assert(ft_strlcpy(dst2, "Hello", 3) == 5);
    assert(strncmp(dst2, "He", 3) == 0);

    char dst3[10] = "Hi ";
    assert(ft_strlcat(dst3, "42", 10) == 5);
    assert(strcmp(dst3, "Hi 42") == 0);
    
    char dst4[4] = "Hi ";
    assert(ft_strlcat(dst4, "42", 4) == 6);
    assert(strcmp(dst4, "Hi ") == 0);

    assert(ft_strchr("hello", 'e') == strchr("hello", 'e'));
    assert(ft_strchr("hello", 'z') == NULL);

    assert(ft_strrchr("hello", 'l') == strrchr("hello", 'l'));
    assert(ft_strrchr("hello", 'z') == NULL);

    assert(ft_strncmp("abc", "abd", 2) == 0);
    assert(ft_strncmp("abc", "abd", 3) < 0);

    assert(ft_strnstr("hello world", "lo", 8) == strstr("hello world", "lo"));
    assert(ft_strnstr("hello world", "world", 5) == NULL);

    assert(ft_atoi("  \t\n -42") == -42);
    assert(ft_atoi(" +123abc45") == 123);

    /* --- Memory Manipulation --- */
    char mem1[6] = "xxxxx";
    ft_memset(mem1, 'A', 5);
    mem1[5] = '\0';
    assert(strcmp(mem1, "AAAAA") == 0);

    char mem2[4] = "abc";
    ft_memset(mem2, 0, 3);
    assert(mem2[0] == 0 && mem2[1] == 0 && mem2[2] == 0);

    char bz1[6] = "hello";
    ft_bzero(bz1, 2);
    assert(bz1[0] == 0 && bz1[1] == 0 && bz1[2] == 'l');

    char bz2[3] = "hi";
    ft_bzero(bz2, 0);
    assert(strcmp(bz2, "hi") == 0);

    char mcpy1[5];
    ft_memcpy(mcpy1, "abc", 4);
    assert(strcmp(mcpy1, "abc") == 0);
    assert(ft_memcpy(NULL, NULL, 5) == NULL);

    char mmov1[10] = "123456";
    ft_memmove(mmov1 + 2, mmov1, 4); 
    assert(strcmp(mmov1, "121234") == 0);

    char mmov2[10] = "123456";
    ft_memmove(mmov2, "abc", 4);
    assert(strcmp(mmov2, "abc") == 0);

    assert(ft_memchr("hello", 'l', 3) == memchr("hello", 'l', 3));
    assert(ft_memchr("hello", 'o', 3) == NULL);

    assert(ft_memcmp("abc", "abc", 3) == 0);
    assert(ft_memcmp("a\0b", "a\0c", 3) < 0);

    /* --- Malloc Functions --- */
    int *cal1 = (int *)ft_calloc(5, sizeof(int));
    assert(cal1 != NULL);
    assert(cal1[0] == 0 && cal1[4] == 0);
    free(cal1);

    void *cal2 = ft_calloc(0, 0);
    assert(cal2 != NULL);
    free(cal2);

    char *dup1 = ft_strdup("42 Heilbronn");
    assert(dup1 != NULL);
    assert(strcmp(dup1, "42 Heilbronn") == 0);
    free(dup1);

    char *dup2 = ft_strdup("");
    assert(dup2 != NULL);
    assert(strcmp(dup2, "") == 0);
    free(dup2);

    return (0);
}