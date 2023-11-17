#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>

int main(){
  void *shared_memory;
  char buff[100];
  int shmid,bytesRead;
  shmid=shmget((key_t)2345,1024,0666|IPC_CREAT);
  printf("key of shared memory is %d \n",shmid);
  shared_memory=shmat(shmid,NULL,0);
  printf("shared memory attached at %p \n",shared_memory);
  printf("Give some input\n");
  if ((bytesRead = read(0, buff, sizeof(buff))) == -1) {
      perror("read");
      return 1;
  }
  strcpy(shared_memory,buff);
  printf("you wrote: %s\n",(char*)shared_memory);
  return 0;  
}