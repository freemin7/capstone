#ifndef CS_VEDISASSEMBLER_H
#define CS_VEDISASSEMBLER_H

#include "../../MCInst.h"

bool VE_getInstruction(csh ud, const uint8_t *code, size_t code_len,
		MCInst *instr, uint16_t *size, uint64_t address, void *info);

#endif
