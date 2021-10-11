#include "callback.h"

#ifdef _WIN32
Callback Abort = 0;
#else
int* abortingmm = 0;

int Abort() {
  return *abortingmm;
}

void SetAbort(int* extaborting) {
  abortingmm = extaborting;
}
#endif