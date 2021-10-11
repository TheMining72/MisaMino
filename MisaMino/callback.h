#ifndef CALLBACK_H
#define CALLBACK_H

#ifdef _WIN32
typedef int(__stdcall * Callback)();

extern Callback Abort;
#else
int Abort();
void SetAbort(int* extaborting);
#endif

#endif