/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16820B31C596CEA05AEE4AB19ACDBBF7EAAAB8FE3AF9105CA36B3EFC055A70D2
 * Entry: 0x003433ac, Ghidra index: 12710, label: FUN_003433ac
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003433ac(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (param_2 == 0) {
      return iVar1;
    }
    param_2 = param_2 + -1;
    if (*param_1 == '\0') break;
    iVar1 = *param_1 + -0x30 + iVar1 * 10;
    param_1 = param_1 + 1;
  }
  return iVar1;
}
