/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C156C4A225B9E15A043FD7E1B14548F6F36CB11EDD522FD60E1C09D26CD47427
 * Entry: 0x002fe5ac, Ghidra index: 11027, label: __strnicmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f518;
/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2003 Release */

int __strnicmp(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_0040f518 == 0) {
    iVar1 = ___ascii_strnicmp();
    return iVar1;
  }
  do {
    iVar1 = FUN_002ef0af(*param_1);
    param_1 = param_1 + 1;
    iVar2 = FUN_002ef0af(*param_2);
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    if ((param_3 == 0) || (iVar1 == 0)) break;
  } while (iVar1 == iVar2);
  return iVar1 - iVar2;
}
