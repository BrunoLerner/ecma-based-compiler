#include "./lexycal_analyzer.cpp"
#include <errno.h>

using namespace std;

int main(int argc, char const *argv[])
{
    programToCompile = fopen("program.txt", "r");
    if (!programToCompile)
    {
        fprintf(stderr, "Failed to open program: %s\n", strerror(errno));
    }

    do
    {
        token = nextToken();
        printf("%d\n", token);
        if (token == CHARACTER)
        {
            printf("CHAR\n");
            printf("id=%d\n%c\n", tokenSecundario, getCharConst(tokenSecundario));
        }
        if (token == NUMERAL)
        {
            printf("INT\n");
            printf("id=%d\n%d\n", tokenSecundario, getIntConst(tokenSecundario));
        }
        if (token == STRINGVAL)
        {
            printf("STRING\n");
            printf("id=%d\n%s\n", tokenSecundario, getStringConst(tokenSecundario).c_str());
        }
        if (token == ID)
        {
            printf("ID\n");
            printf("id=%d\n", tokenSecundario);
        }
        printf("\n");
    } while (token != END);
};