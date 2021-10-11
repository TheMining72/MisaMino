#ifndef MAIN_H
#define MAIN_H

#include "Bot.h"
#include "callback.h"
#include "stuff.h"

void setup();
#ifdef _WIN32
void set_abort(Callback handler);
#else
void set_abort(int* aborting);
#endif
void configure(AI::AI_Param param, bool holdAllowed, bool allSpin, bool TSDonly, int search_width, bool allow180, bool srsplus);
void update_next(const char* queue);
void update_current(const char* piece);
void update_hold(const char* piece);
void update_incoming(int attack);
void update_combo(int combo);
void update_b2b(int b2b);
void update_field(const char* field);
void update_reset();

std::string action();

void action(char* str);

bool alive();

void findpath(const char* _field, const char* _piece, int x, int y, int r, bool hold, char* str, int len);

#endif