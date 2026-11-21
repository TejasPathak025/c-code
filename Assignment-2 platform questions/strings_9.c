bool isIsomorphic(char* s, char* t) {
    int ms[256] = {0}, mt[256] = {0}, i;
    unsigned char a, b;
    for (i = 0; s[i] != '\0'; i++) {
        a = s[i];
        b = t[i];
        if (ms[a] != mt[b]) return false;
        ms[a] = mt[b] = i + 1;
    }
    return true;
}
