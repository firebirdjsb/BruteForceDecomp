/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D98B64F943A0F46489618222165A706606315E69D80B7697B63A6C332F3C1AC1
 * Entry: 0x001259d0, Ghidra index: 3700, label: FUN_001259d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001259d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_EAX;
  int *piVar4;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 8) + 0xbe4);
  puVar2 = *(undefined4 **)(iVar1 + 0x1348);
  piVar4 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar4 = (int *)*puVar2;
  }
  piVar3 = *(int **)(iVar1 + 0x1348);
  if (piVar4 != piVar3) {
    while (iVar1 = piVar4[2], *(int *)(iVar1 + 0xe0) != in_EAX) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == piVar3) {
        return;
      }
    }
    if (iVar1 != 0) {
      if ((*(byte *)(*(int *)(iVar1 + 0xf0) + 0x94) & 1) != 0) {
        FUN_00125a80();
        return;
      }
      FUN_00125a30();
    }
  }
  return;
}
