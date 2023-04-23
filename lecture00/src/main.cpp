#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 8192

static int resolve(const char *name)
{
  char buffer[BUF_SIZE];
  int i;

  printf("Starting read file...\n");
  int input_fd = open(name, O_RDONLY);
  if ( input_fd == -1 )
  {
    return 1;
  }
  ssize_t bytes_read = read(input_fd, &buffer, BUF_SIZE);
  printf("%.*s", int(bytes_read), buffer);
  close(input_fd);
  printf("Successfully exited\n");
  return 0;
}

static int do_connect()
{
  const char *name = "/tmp/test";
  return resolve(name);
}

int main()
{
  int code = do_connect();
  return code;
}
