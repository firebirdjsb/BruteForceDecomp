/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8823B3C842ED7A79E24EBEF9578DAEECF6060AA21AD902A3E54AB6356E64497
 * Entry: 0x00353d20, Ghidra index: 13101, label: FUN_00353d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353d20(int param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar2 = *(int **)(param_1 + 0x34);
  uVar6 = -(uint)(piVar2 != (int *)(param_1 + 0x34)) & (uint)(piVar2 + -5);
  uVar5 = param_2[1];
  uVar4 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 & 0xff00 | uVar5 << 0x10) << 8;
  *(uint *)(param_1 + 0x9c) = uVar4;
  *(uint *)(param_1 + 0xb0) =
       (uint)(ushort)(*(ushort *)((int)param_2 + 10) >> 8 | *(ushort *)((int)param_2 + 10) << 8);
  uVar5 = *param_2;
  *(uint *)(param_1 + 0xa8) =
       (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 & 0xff00 | uVar5 << 0x10) << 8;
  *(uint *)(param_1 + 0xac) = uVar4;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_003531c0(param_1);
  }
  piVar2 = *(int **)(uVar6 + 0x18);
  iVar3 = *(int *)(uVar6 + 0x14);
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  FUN_003455a6(uVar6);
  puVar1 = (uint *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(uint *)(param_1 + 0xcc) < *puVar1) {
    *puVar1 = *(uint *)(param_1 + 0xcc);
  }
  uVar5 = *puVar1;
  uVar4 = uVar5 * 2;
  *(uint *)(param_1 + 0xb4) = uVar4;
  if (uVar4 < *(uint *)(param_1 + 0xb0)) {
    uVar4 = *(uint *)(param_1 + 0xb0);
  }
  *(uint *)(param_1 + 0xb8) = uVar4;
  uVar4 = *(uint *)(param_1 + 0x58) >> 1;
  if (uVar4 < uVar5) {
    uVar5 = uVar4;
  }
  *(uint *)(param_1 + 0xd0) = uVar5;
  if (uVar5 == 0) {
    *(uint *)(param_1 + 0xd0) = 1;
  }
  *(undefined1 *)(param_1 + 0x7c) = 4;
  FUN_00345541(0xffffffff,0x40);
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    KeSetEvent(param_1 + 0x10,1,0);
  }
  iVar3 = *(int *)(param_1 + 0x60);
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0xd) & 0x20) != 0)) {
    KeSetEvent(iVar3 + 0x10,1,0);
  }
  return;
}
