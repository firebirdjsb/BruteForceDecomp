/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B83710B0CFFD9CA5DB33993979842E1D7A961BC547C5827CD580E7257E5CF3E1
 * Entry: 0x00343343, Ghidra index: 12706, label: FUN_00343343
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00343343(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    iVar3 = (int)param_1 - (int)pcVar1;
  }
  return iVar3;
}
