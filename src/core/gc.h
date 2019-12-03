#ifndef GC_H
#define GC_H

#include "../common/utility.h"
#include "../interface/lime.h"
#include "../interface/api.h"

LimeResult gc_allocate(LimeStack stack, LimeValueType type, u64 additional);

LimeResult gc_add_library(LimeValue library);

#endif