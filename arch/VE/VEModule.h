#ifndef CS_VE_MODULE_H
#define CS_VE_MODULE_H

#include "../../utils.h"

cs_err VE_global_init(cs_struct *ud);
cs_err VE_option(cs_struct *handle, cs_opt_type type, size_t value);

#endif