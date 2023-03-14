//Maliya Baxter lab4
//task 1
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <pthread.h>

int value = 0;
void *runner(void *param); //the thread 

int main(int argc, char *argv[]){
    pid_t pid;
    pthread_t tid; pthread_attr_t attr;

    pid = fork();
    if(pid == 0) //child process
    pthread_attr__init()
}