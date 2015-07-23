/**
 * Copyright (C) 2008 by The Regents of the University of California
 * Redistribution of this file is permitted under the terms of the GNU
 * Public License (GPL).
 *
 */

#include "Bruinbase.h"
#include "SqlEngine.h"

int main()
{
  // run the SQL engine taking user commands from standard input (console).
  SqlEngine::run(stdin);

  return 0;
}
