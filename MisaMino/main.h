#ifndef MAIN_H
#define MAIN_H

#include "Bot.h"
#include "callback.h"
#include "stuff.h"

#define DLL extern "C" __declspec(dllexport)

extern Bot MisaBot;
std::string action();

#endif