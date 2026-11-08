#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/* Helper functions for strmapi and striteri */
static char	sample_mapi(unsigned int i, char c)
{
	return (c + (char)i);
}

static void	sample_iteri(unsigned int i, char *c)
{
	*c = *c + (char)i;
}

int main(void)
{
    printf("Starting Libft Tests...\n");

    /* ================================================================= */
    /* Part 1: Character Classification & Conversion                     */
    /* ================================================================= */
    assert(ft_isalpha('A') == 1);
    assert(ft_isalpha('z') == 1);
    assert(ft_isalpha('5') == 0);

    assert(ft_isdigit('0') == 1);
    assert(ft_isdigit('9') == 1);
    assert(ft_isdigit('a') == 0);

    assert(ft_isalnum('z') == 1);
    assert(ft_isalnum('7') == 1);
    assert(ft_isalnum(' ') == 0);

    assert(ft_isascii(0) == 1);
    assert(ft_isascii(127) == 1);
    assert(ft_isascii(128) == 0);

    assert(ft_isprint(' ') == 1);
    assert(ft_isprint('~') == 1);
    assert(ft_isprint('\n') == 0);

    assert(ft_toupper('c') == 'C');
    assert(ft_toupper('C') == 'C');
    assert(ft_toupper('7') == '7');

    assert(ft_tolower('Z') == 'z');
    assert(ft_tolower('z') == 'z');
    assert(ft_tolower('$') == '$');

    /* ================================================================= */
    /* Part 1: String & Search Manipulation                              */
    /* ================================================================= */
    assert(ft_strlen("42 Heilbronn") == 12);
    assert(ft_strlen("") == 0);

    char dst1[10] = "xxxxx";
    assert(ft_strlcpy(dst1, "Hello", 10) == 5);
    assert(strcmp(dst1, "Hello") == 0);

    char dst2[6] = "xxxxx";
    assert(ft_strlcpy(dst2, "Hello", 3) == 5);
    assert(strncmp(dst2, "He", 3) == 0);

    char dst3[10] = "Hi ";
    assert(ft_strlcat(dst3, "42", 10) == 5);
    assert(strcmp(dst3, "Hi 42") == 0);

    char dst4[4] = "Hi ";
    assert(ft_strlcat(dst4, "42", 4) == 5);
    assert(strcmp(dst4, "Hi ") == 0);

    assert(ft_strchr("hello", 'e') == strchr("hello", 'e'));
    assert(ft_strchr("hello", '\0') == strchr("hello", '\0'));
    assert(ft_strchr("hello", 'z') == NULL);

    assert(ft_strrchr("hello", 'l') == strrchr("hello", 'l'));
    assert(ft_strrchr("hello", '\0') == strrchr("hello", '\0'));
    assert(ft_strrchr("hello", 'z') == NULL);

    assert(ft_strncmp("abc", "abd", 2) == 0);
    assert(ft_strncmp("abc", "abd", 3) < 0);
    assert(ft_strncmp("abc", "abc", 5) == 0);

    assert(ft_strnstr("hello world", "lo", 8) == strstr("hello world", "lo"));
    assert(ft_strnstr("hello world", "world", 5) == NULL);
    char const *haystack = "hello world";
    assert(ft_strnstr(haystack, "", 5) == haystack);

    assert(ft_atoi("  \t\n -42") == -42);
    assert(ft_atoi(" +123abc45") == 123);
    assert(ft_atoi("0") == 0);
    assert(ft_atoi("-2147483648") == -2147483648);

    /* ================================================================= */
    /* Part 1: Memory Operations                                         */
    /* ================================================================= */
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

    /* ================================================================= */
    /* Part 1: Allocations                                               */
    /* ================================================================= */
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

    /* ================================================================= */
    /* Part 2: Additional String Functions                               */
    /* ================================================================= */
    /* ft_substr */
    char *sub1 = ft_substr("hello world", 6, 5);
    assert(sub1 != NULL);
    assert(strcmp(sub1, "world") == 0);
    free(sub1);

    char *sub2 = ft_substr("hello", 10, 5);
    assert(sub2 != NULL);
    assert(strcmp(sub2, "") == 0);
    free(sub2);

    /* ft_strjoin */
    char *join1 = ft_strjoin("42", " Heilbronn");
    assert(join1 != NULL);
    assert(strcmp(join1, "42 Heilbronn") == 0);
    free(join1);

    /* ft_strtrim */
    char *trim1 = ft_strtrim("   xxHello Worldxx   ", " x");
    assert(trim1 != NULL);
    assert(strcmp(trim1, "Hello World") == 0);
    free(trim1);

    char *trim2 = ft_strtrim("aaaaa", "a");
    assert(trim2 != NULL);
    assert(strcmp(trim2, "") == 0);
    free(trim2);

    /* ft_split */
    char **tab = ft_split("  hello   42  world  ", ' ');
    assert(tab != NULL);
    assert(strcmp(tab[0], "hello") == 0);
    assert(strcmp(tab[1], "42") == 0);
    assert(strcmp(tab[2], "world") == 0);
    assert(tab[3] == NULL);
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);

    /* ft_itoa */
    char *s_num1 = ft_itoa(0);
    assert(strcmp(s_num1, "0") == 0);
    free(s_num1);

    char *s_num2 = ft_itoa(12345);
    assert(strcmp(s_num2, "12345") == 0);
    free(s_num2);

    char *s_num3 = ft_itoa(-2147483648);
    assert(strcmp(s_num3, "-2147483648") == 0);
    free(s_num3);

    /* ft_strmapi */
    char *mapped = ft_strmapi("0000", sample_mapi);
    assert(mapped != NULL);
    assert(strcmp(mapped, "0123") == 0);
    free(mapped);

    /* ft_striteri */
    char to_iter[] = "0000";
    ft_striteri(to_iter, sample_iteri);
    assert(strcmp(to_iter, "0123") == 0);

    /* ================================================================= */
    /* Part 2: File Descriptor Functions                                 */
    /* ================================================================= */
    int fd = open("test_fd.tmp", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    assert(fd != -1);

    ft_putchar_fd('A', fd);
    ft_putstr_fd("BC", fd);
    ft_putendl_fd("D", fd);
    ft_putnbr_fd(-42, fd);
    close(fd);

    fd = open("test_fd.tmp", O_RDONLY);
    assert(fd != -1);
    char buf[32];
    int bytes = read(fd, buf, 31);
    assert(bytes > 0);
    buf[bytes] = '\0';
    close(fd);
    unlink("test_fd.tmp");

    assert(strcmp(buf, "ABCD\n-42") == 0);

    printf("ALL TESTS PASSED SUCCESSFULLY! (Part 1 + Part 2)\n");
    return (0);
}
