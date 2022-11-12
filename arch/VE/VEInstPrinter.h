#ifndef CS_VEINSTPRINTER_H
#define CS_VEINSTPRINTER_H


#include "capstone/capstone.h"
#include "../../MCInst.h"
#include "../../SStream.h"
#include "../../cs_priv.h"

struct SStream;

void VE_printInst(MCInst *MI, struct SStream *O, void *Info);

#endif
