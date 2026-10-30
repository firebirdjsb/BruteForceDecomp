/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4ACCFD22E4EEC2036C5B4A90268C40186750276D045891DB841AAA2AB1B3F842
 * Entry: 0x00333875, Ghidra index: 12415, label: thunk_FUN_0033378c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint thunk_FUN_0033378c(int param_1)

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
