/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF777F748BEDADBB48BC642588122D2083EAC63DC8DA6562E709D5125E3E9E24
 * Entry: 0x0007d400, Ghidra index: 1490, label: FUN_0007d400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0007d400(void)

{
  int iVar1;
  int *in_ECX;
  uint unaff_ESI;
  
  iVar1 = (**(code **)(*in_ECX + 0x104))();
  if ((((iVar1 != 0) && (-1 < (int)unaff_ESI)) && (*(int *)(iVar1 + 4) != 0)) &&
     (unaff_ESI < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x3c))) {
    return 1;
  }
  return 0;
}
