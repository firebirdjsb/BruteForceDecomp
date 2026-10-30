/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A881A5428F02C3106C17A7B4B6CD9102A00CE96FFE31A841839C51895814293F
 * Entry: 0x002f12a8, Ghidra index: 10776, label: FID_conflict:__ld12tod
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b72c8;
/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2003 Release */

void FID_conflict___ld12tod(undefined4 param_1,undefined4 param_2)

{
  __ld12cvt(param_1,param_2,&DAT_003b72c8);
  return;
}
