/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F258C9619CF42AF192DD390089D33F478E08817C1C9D3D3197E3894A9CDE647
 * Entry: 0x002f1292, Ghidra index: 10775, label: FID_conflict:__ld12tod
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b72b0;
/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2003 Release */

void FID_conflict___ld12tod(undefined4 param_1,undefined4 param_2)

{
  __ld12cvt(param_1,param_2,&DAT_003b72b0);
  return;
}
