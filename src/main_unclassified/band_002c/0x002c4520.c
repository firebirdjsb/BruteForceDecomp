/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D26B2A0F796594557ADC8FA929391A64A1B039114BE12978E9A94C791A1F57F0
 * Entry: 0x002c4520, Ghidra index: 10055, label: FUN_002c4520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c4520(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0x14);
  puVar4 = (uint *)(*(uint *)(unaff_ESI + 0x18) & 0xfffffff0);
  (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x10) + 0x7c) + 0x20))
            (puVar4 + ((*puVar4 & 0xfff) + 1) * -4);
  puVar4 = (uint *)(*(uint *)(unaff_ESI + 0x2c) & 0xfffffff0);
  (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x24) + 0x7c) + 0x20))
            (puVar4 + ((*puVar4 & 0xfff) + 1) * -4);
  iVar2 = *(int *)(unaff_ESI + 0x10);
  iVar3 = *(int *)(unaff_ESI + 0x24);
  FUN_002b5590(&stack0xffffffa4);
  if ((*(uint *)(iVar2 + 0x70) & 0x2000) != 0) {
    FUN_002bccd0(*(undefined4 *)(iVar1 + 0xc),iVar2,&stack0xffffffa4);
  }
  if ((*(uint *)(iVar3 + 0x70) & 0x2000) != 0) {
    FUN_002bccd0(*(undefined4 *)(iVar1 + 0xc),iVar3,&stack0xffffffa4);
  }
  if (*(int *)(unaff_ESI + 8) != 0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 8) + 4) = *(undefined4 *)(unaff_ESI + 0xc);
  }
  if (*(undefined4 **)(unaff_ESI + 0xc) == (undefined4 *)0x0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x24) = *(undefined4 *)(unaff_ESI + 8);
  }
  else {
    **(undefined4 **)(unaff_ESI + 0xc) = *(undefined4 *)(unaff_ESI + 8);
  }
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x1c) + 4) = *(undefined4 *)(unaff_ESI + 0x20);
  }
  if (*(undefined4 **)(unaff_ESI + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
    return;
  }
  *(undefined4 *)(*(int *)(unaff_ESI + 0x24) + 0x24) = *(undefined4 *)(unaff_ESI + 0x1c);
  return;
}
