/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8B69399E44AF106D0D05B5B1901866FB7DA3B538F6393E639A891ABA5EAEF37
 * Entry: 0x0033378c, Ghidra index: 12412, label: FUN_0033378c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033378c(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_ECX + 200);
  do {
    if (*piVar2 == param_1) goto LAB_003337a9;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 5;
  } while (iVar1 < 0xc);
  iVar1 = -1;
LAB_003337a9:
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0xd8 + iVar1 * 0x14);
  }
  return -(uint)(iVar1 != 0) & iVar1 + 0xdcU;
}
