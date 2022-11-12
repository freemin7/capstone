#include <capstone/capstone.h>

void VE_get_insn_id(cs_struct *h, cs_insn *insn, unsigned int id);
const char *VE_insn_name(csh handle, unsigned int id);
const char *VE_group_name(csh handle, unsigned int id);