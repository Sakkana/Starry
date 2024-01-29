#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    printf("Hi !\n");
 
    // execute readlink_test
    
    char buffer[BUFFER_SIZE];
    ssize_t result = readlink("/proc/self/exe", buffer, sizeof(buffer) - 1);

    if (result != -1) {
        printf("Symbolic link target path: %s\n", buffer);
    } else {
        perror("readlink");
        return 1;
    }

    return 0;
}
