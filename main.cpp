#include <bits/stdc++.h>
#include "lexycal_analyzer.h"

using namespace std;

int main(int argc, char const *argv[])
{
    programToCompile = fopen(input_file_name.c_str(), "r");
    if (!programToCompile)
    {
        fprintf(stderr, "Failed to open %s: %s\n", "programToCompile", strerror(errno));
    }
};