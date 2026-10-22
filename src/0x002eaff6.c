/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD545F2EFA1FAF930447CC8AABC4E223FC200FB607B404F45A1801C625BF2254
 * Entry: 0x002eaff6, Ghidra index: 10608, label: __stricmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f518;
/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2003 Release */

int __stricmp(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0040f518 == 0) {
    iVar1 = ___ascii_stricmp();
    return iVar1;
  }
  do {
    iVar1 = FUN_002ef0af(*param_1);
    param_1 = param_1 + 1;
    iVar2 = FUN_002ef0af(*param_2);
    param_2 = param_2 + 1;
    if (iVar1 == 0) break;
  } while (iVar1 == iVar2);
  return iVar1 - iVar2;
}
