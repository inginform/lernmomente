// Viele Compiler unterstützen eine Anweisung die nicht im C-Standard definiert ist. 
// Das ist das #pragma once. Es hat den gleichen Effekt wie ein Include Guard, aber ist einfacher
// zu schreiben und eliminiert einige Fehlerquellen. Insbesondere bezüglich des Namens des
// Include Guards.
// Allerdings gibt es durchaus Compiler im Embedded Bereich, die diese Anweisung nicht kennen.
#pragma once

#include "Guard.h"

struct Pragma
{
	int member;
};
