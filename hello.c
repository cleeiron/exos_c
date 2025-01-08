#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    write(1, "hello\n", 6);
    return 0;
}
