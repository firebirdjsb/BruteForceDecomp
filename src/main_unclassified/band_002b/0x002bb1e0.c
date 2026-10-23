/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DC575770321916241D30FB49406193360C681A521263D435FAF5B84C7852E5B
 * Entry: 0x002bb1e0, Ghidra index: 9900, label: FUN_002bb1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb1e0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 100) = 1;
  uVar3 = *(undefined4 *)(iVar2 + 0x108);
  uVar4 = *(undefined4 *)(iVar2 + 0x10c);
  *(double *)(param_1 + 0x70) = *(double *)(iVar2 + 0x108) - (double)*(float *)(iVar2 + 0xb4);
  FUN_002bb180();
  uVar5 = (uint)*(ushort *)(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x54) + uVar5 * 4);
    *(undefined1 *)(iVar2 + 0x70) = 1;
    uVar1 = *(undefined1 *)(*(int *)(iVar2 + 0x90) + 100);
    *(undefined1 *)(*(int *)(iVar2 + 0x90) + 100) = 0x21;
    FUN_002bfdd0(iVar2);
    *(undefined1 *)(*(int *)(iVar2 + 0x90) + 100) = uVar1;
  }
  return;
}
