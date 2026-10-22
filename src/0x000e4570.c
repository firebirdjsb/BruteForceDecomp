/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B02E4FC2E233427C3A79B0FBDD675A55EADDF8BB898CE62DAF932DAD3C3A6562
 * Entry: 0x000e4570, Ghidra index: 2846, label: FUN_000e4570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e4570(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)(in_EAX + 0xc) & 3) == 0) &&
     (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 4U >> 2)) {
    FUN_00056aa0();
  }
  iVar3 = *(int *)(in_EAX + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)(in_EAX + 8) << 2;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*(int *)(*(int *)(in_EAX + 4) + uVar5 * 4) == 0) {
    uVar2 = FUN_002ea01d(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar5 * 4) = uVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)(in_EAX + 4) + uVar5 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(uint *)(in_EAX + 0xc) = uVar4;
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
