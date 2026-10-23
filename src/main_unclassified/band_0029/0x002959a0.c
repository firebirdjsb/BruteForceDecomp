/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7577151416B6E6E48E1DE5D6507FEA3305543EB2DC193CB0B229FA6890DF70BB
 * Entry: 0x002959a0, Ghidra index: 9327, label: FUN_002959a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002959a0(void)

{
  int *piVar1;
  int in_EAX;
  uint uVar2;
  
  **(int **)(in_EAX + 0x18) = **(int **)(in_EAX + 0x18) + -1;
  piVar1 = *(int **)(in_EAX + 0x18);
  if (*piVar1 < 0) {
    uVar2 = (*(code *)piVar1[2])(piVar1);
  }
  else {
    uVar2 = (uint)*(byte *)piVar1[1];
    piVar1[1] = (int)((byte *)piVar1[1] + 1);
  }
  if (uVar2 == 0x23) {
    do {
      **(int **)(in_EAX + 0x18) = **(int **)(in_EAX + 0x18) + -1;
      piVar1 = *(int **)(in_EAX + 0x18);
      if (*piVar1 < 0) {
        uVar2 = (*(code *)piVar1[2])(piVar1);
      }
      else {
        uVar2 = (uint)*(byte *)piVar1[1];
        piVar1[1] = (int)((byte *)piVar1[1] + 1);
      }
    } while ((uVar2 != 10) && (uVar2 != 0xffffffff));
  }
  **(int **)(in_EAX + 0x18) = **(int **)(in_EAX + 0x18) + 1;
  piVar1 = (int *)(*(int *)(in_EAX + 0x18) + 4);
  *piVar1 = *piVar1 + -1;
  return;
}
