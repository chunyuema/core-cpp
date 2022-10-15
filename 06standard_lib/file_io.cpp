#include <cstdio>

constexpr int maxstring = 1024;
constexpr int repeat = 5;
const char *file_name = "test_file.txt";
const char *str = "An example c_string.\n";

void create_file()
{
    puts("This function writes into a file");
    // open in write mode
    FILE *fw = fopen(file_name, "w");
    for (int i = 0; i < repeat; i++)
    {
        fputs(str, fw);
    }
    fclose(fw);
    puts("Finish writing the file");
}

void read_file()
{
    puts("This function reads from a file");
    // open in read mode
    char buffer[maxstring];
    FILE *fr = fopen(file_name, "r");
    while (fgets(buffer, maxstring, fr))
    {
        fputs(buffer, stdout);
    }
    fclose(fr);
    remove(file_name);
}

int main()
{
    // create_file();
    read_file();
    return 0;
}