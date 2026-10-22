/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DD3E0365A088B70A0CCB1F694EB475B42B8B851ACDE6D93E6C1E5EE6E1F04C6
 * Entry: 0x002bd330, Ghidra index: 9943, label: FUN_002bd330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd330(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x90);
  uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x90);
  puVar3 = (ushort *)FUN_002c4c10(uVar1);
  if (puVar3 == (ushort *)0x0) {
    iVar4 = FUN_002ea01d(0x38);
    if (iVar4 == 0) {
      puVar3 = (ushort *)0x0;
    }
    else {
      puVar3 = (ushort *)FUN_002c5c60();
    }
    *(undefined4 *)(puVar3 + 0x18) = uVar1;
    *(undefined4 *)(puVar3 + 0x16) = uVar2;
    if (*(ushort *)(param_1 + 0x3c) <= *(ushort *)(param_1 + 0x3e)) {
      FUN_002ccf80();
    }
    *(ushort **)(*(int *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) * 4) = puVar3;
    *(short *)(param_1 + 0x3e) = *(short *)(param_1 + 0x3e) + 1;
  }
  if (*puVar3 <= puVar3[1]) {
    FUN_002ccf80();
  }
  *(int *)(*(int *)(puVar3 + 2) + (uint)puVar3[1] * 4) = param_2;
  puVar3[1] = puVar3[1] + 1;
  return;
}
