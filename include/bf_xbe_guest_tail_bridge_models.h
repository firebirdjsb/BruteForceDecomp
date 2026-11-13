#ifndef BF_XBE_GUEST_TAIL_BRIDGE_MODELS_H
#define BF_XBE_GUEST_TAIL_BRIDGE_MODELS_H

#include "bf_xbe_guest32_record_model.h"

// Captured machine state at entry and after the MOV/JMP transfer; these are
// explicit host model interfaces, not recovered original function prototypes.
void FUN_00344fef(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_00345079(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_00345084(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_0034508f(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_0034509a(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003450b4(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003450bf(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003450ca(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003450d5(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003450fe(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_00345109(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_00345132(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_0034768e(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_00347699(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003476a4(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003476af(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003476ba(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003476c5(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003476d0(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003476db(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_003476e6(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_0034790d(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_00330020(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_0033002b(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_00330045(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_00330050(uint32_t& guest_ecx, uint32_t& guest_eip);
void FUN_0033005b(uint32_t& guest_ecx, uint32_t& guest_eip);

#endif
