#pragma once
#include "types.h"
#include "utils/be_val.h"

uint64_t
OSGetAtomic64(be_val<uint64_t> *ptr);

uint64_t
OSSetAtomic64(be_val<uint64_t> *ptr, uint64_t value);

BOOL
OSCompareAndSwapAtomic64(be_val<uint64_t> *ptr, uint64_t compare, uint64_t value);

BOOL
OSCompareAndSwapAtomicEx64(be_val<uint64_t> *ptr, uint64_t compare, uint64_t value, uint64_t *old);

uint64_t
OSSwapAtomic64(be_val<uint64_t> *ptr, uint64_t value);

int64_t
OSAddAtomic64(be_val<int64_t> *ptr, int64_t value);

uint64_t
OSAndAtomic64(be_val<uint64_t> *ptr, uint64_t value);

uint64_t
OSOrAtomic64(be_val<uint64_t> *ptr, uint64_t value);

uint64_t
OSXorAtomic64(be_val<uint64_t> *ptr, uint64_t value);

BOOL
OSTestAndClearAtomic64(be_val<uint64_t> *ptr, uint32_t bit);

BOOL
OSTestAndSetAtomic64(be_val<uint64_t> *ptr, uint32_t bit);