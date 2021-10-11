#include "callback.h"

int* abortingmm = 0;

int Abort() {
  return *abortingmm;
}

void SetAbort(int* extaborting) {
  abortingmm = extaborting;
}