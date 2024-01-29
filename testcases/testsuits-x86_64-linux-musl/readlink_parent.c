#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/resource.h>

#define BUFFER_SIZE 1024

int main() {
    printf("Hi, before fork() !\n");
 
    // creaate a new process
    pid_t pid = fork();
    if (pid == -1) {
        return -1;
    } else if (pid == 0) {
        // child process
        char *const dummy[1] = {NULL};
        execve("./readlink_test", dummy, dummy);
    } else {
        wait4(pid, NULL, WCONTINUED, NULL);
    }

    printf("Ho, child dead!\n");
    
    return 0;
}
