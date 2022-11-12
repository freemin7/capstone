#ifdef CAPSTONE_HAS_VE

#include "../../cs_priv.h"
#include "VEDisassembler.h"
#include "VEInstPrinter.h"
#include "VEMapping.h"
#include "VEModule.h"

cs_err VE_global_init(cs_struct *ud)
{
	// verify if requested mode is valid
	if (ud->mode)
		return CS_ERR_MODE;

	ud->printer = VE_printInst;
	ud->printer_info = NULL;
	ud->insn_id = VE_get_insn_id;
	ud->insn_name = VE_insn_name;
	ud->group_name = VE_group_name;
	ud->disasm = VE_getInstruction;

	return CS_ERR_OK;
}

cs_err VE_option(cs_struct *handle, cs_opt_type type, size_t value)
{
	return CS_ERR_OK;
}

#endif
