#pragma once

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

namespace STD_C_FUNCS
{
    size_t		strlen(const char *s);
    size_t		strlcpy(char *dst, const char *src, size_t dstsize);
    size_t		strlcat(char *dst, const char *src, size_t dstsize);
    int			strncmp(const char *s1, const char *s2, size_t n);
    int			atoi(const char *str);
    int			isalpha(int c);
    int			isprint(int c);
    int			isdigit(int c);
    int			isalnum(int c);
    int			toupper(int c);
    int			tolower(int c);
    void*       memset(void *b, int c, size_t len);
    void		bzero(void *s, size_t n);
    void*       memcpy(void *dst, const void *src, size_t n);
    void*       memchr(const void *s, int c, size_t n);
    int			memcmp(const void *s1, const void *s2, size_t n);
    char*       strnstr(const char *s, const char *need, size_t len);
    char*       strchr(const char *s, int c);
    char*       strrchr(const char *s, int c);
    void*       memmove(void *dst, const void *src, size_t len);
    int			isascii(int c);
    void*       calloc(size_t count, size_t size);
    char*       strdup(const char *s1);
    char*       substr(char const *s, unsigned int start, size_t len);
    char*       strjoin(char const *s1, char const *s2);
    char*       strtrim(char const *s1, char const *set);
    char**      split(char const *s, char c);
    char*       itoa(int n);
    char*       strmapi(char const *s, char (*f)(unsigned int, char));
    void		striteri(char *s, void (*f)(unsigned int, char*));
    void		putchar_fd(char c, int fd);
    void		putstr_fd(char *s, int fd);
    void		putendl_fd(char *s, int fd);
    void		putnbr_fd(int n, int fd);
}