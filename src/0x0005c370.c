/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04B8252F4A8A504453C3CBA5513BA6D7A496176F953B20F68C5228CAD23E22AB
 * Entry: 0x0005c370, Ghidra index: 950, label: FUN_0005c370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005c370(int *param_1)

{
  uint in_EAX;
  int in_ECX;
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)(in_ECX + 4);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 8) - (int)piVar1 >> 2;
  }
  if (uVar2 < in_EAX) {
    if (piVar1 == (int *)0x0) {
      in_EAX = 0;
    }
    else {
      in_EAX = *(int *)(in_ECX + 8) - (int)piVar1 >> 2;
    }
  }
  iVar3 = 0;
  if (0 < (int)in_EAX) {
    do {
      if (*piVar1 == *param_1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < (int)in_EAX);
  }
  return 0;
}
