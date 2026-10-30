/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DEB61D18E75E22937295693753E8F0B08A5011EED201E9FB651441509D65D50
 * Entry: 0x002eb062, Ghidra index: 10610, label: __fsopen
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2003 Release */

void __fsopen(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = __getstream();
  if (iVar1 == 0) {
    _DAT_0040f4d8 = 0x18;
    return;
  }
  __openfile(param_1,param_2,param_3,iVar1);
  return;
}
