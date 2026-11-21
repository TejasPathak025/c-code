int firstUniqChar(char* s) {
    int cnt[26] = {0}, i;
    for (i = 0; s[i] != '\0'; i++) cnt[s[i] - 'a']++;
    for (i = 0; s[i] != '\0'; i++) {
        if (cnt[s[i] - 'a'] == 1) return i;
    }
    return -1;
}
