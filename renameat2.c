#include <unistd.h>
#include <linux/fs.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv){
  int ret;
  const char* foo = "foo";
  const char* bar = "bar";
  ret = syscall(316, 0, foo, 0, bar, RENAME_EXCHANGE);
  printf("flags: %d\n", RENAME_EXCHANGE);
  printf("foo: %s, bar: %s\n", foo, bar);
  printf("exit: %d\n", ret);
  printf("errno: %s\n", strerror(errno));
  exit(ret);
}
