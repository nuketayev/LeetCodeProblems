int lengthOfLongestSubstring(char* s) {
    int charindex[128];
    char currentchar;
    int max;
    int current;
    int start;
    int end;
    int i;

    max = 0;
    end = 0;
    start = 0;
    i = 0;

    while(i < 128)
    {
        charindex[i] = -1;
        i++;
    }
    while(s[end] != '\0')
    {
        currentchar = s[end];
        if (charindex[currentchar] >= start)
            start = charindex[currentchar] + 1;

        charindex[currentchar] = end;

        current = end - start + 1;
        if (max < current)
        {
            max = current;
        }
        end++;
    }
    return (max);
}