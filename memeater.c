#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char** argv) {
    int max = -1;
    int mb = 0;
	int step = 1024*1024*50;
    char* buffer;

    if(argc > 1)
        max = atoi(argv[1]);

    while((buffer=malloc(step)) != NULL && mb != max) {
        memset(buffer, 0, step);
        mb+=step / 1024 / 1024;
        printf("Allocated %d MB\n", mb);
        sleep(1);
    }
return 0;
}
