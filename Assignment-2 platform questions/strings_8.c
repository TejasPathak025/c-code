bool isAnagram(char* s, char* t) {
    int cnt[26] = {0}, i;
    for (i = 0; s[i] != '\0'; i++) cnt[s[i] - 'a']++;
    for (i = 0; t[i] != '\0'; i++) cnt[t[i] - 'a']--;
    for (i = 0; i < 26; i++) {
        if (cnt[i] != 0) return false;
    }
    return true;
}
