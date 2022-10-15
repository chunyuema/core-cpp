#include <cstdio>
#include <cstring>
#include <cstdint>

constexpr size_t maxlen = 127;
const char *file_name = "text.file";
const char *str = "A example of c string";

struct mystruct
{
    uint8_t num;
    uint8_t len;
    char s[maxlen + 1];
};

void write_binary_file()
{
    puts("This function write the struct into binary files");
    FILE *fwb = fopen(file_name, "wb");
    static mystruct s1;
    for (int i = 0; i < 5; i++)
    {
        s1.num = i;
        s1.len = (uint8_t)strlen(str);
        if (s1.len > maxlen)
        {
            s1.len = maxlen;
        }
        strncpy(s1.s, str, maxlen);
        s1.s[s1.len] = 0;
        fwrite(&s1, sizeof(s1), 1, fwb);
    }
    puts("Finished writing the binary file");
}

void read_binary_file()
{
    puts("This function reads the binary file");
    FILE *frb = fopen(file_name, "rb");
    static mystruct s2;
    size_t rc;
    while ((rc = fread(&s2, sizeof(s2), 1, frb)))
    {
        printf("{num = %d,len = %d, s = %s}\n",
               s2.num, s2.len, s2.s);
    }
    fclose(frb);
    remove(file_name);
}
int main()
{
    // write_binary_file();
    // read_binary_file();
    return 0;
}