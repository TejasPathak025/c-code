int strStr(char* haystack, char* needle) {
    int h = 0, n = 0, i, j;
    while (haystack[h] != '\0') h++;
    while (needle[n] != '\0') n++;
    for (i = 0; i + n <= h; i++) {
        for (j = 0; j < n && haystack[i + j] == needle[j]; j++);
        if (j == n) return i;
    }
    return -1;
}
