/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60ED13005A37B42B851F52FD4AB79EA8447577B2473C6DC0E33901FE34779A34
 * Entry: 0x0003cfd0, Ghidra index: 443, label: FUN_0003cfd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003cfd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)(in_EAX + 0xc) & 1) == 0) &&
     (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 2U >> 1)) {
    FUN_00263d10();
  }
  iVar3 = *(int *)(in_EAX + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)(in_EAX + 8) << 1;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 1;
  if (*(int *)(*(int *)(in_EAX + 4) + uVar5 * 4) == 0) {
    uVar2 = FUN_002ea01d(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar5 * 4) = uVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)(in_EAX + 4) + uVar5 * 4) + (uVar4 & 1) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(uint *)(in_EAX + 0xc) = uVar4;
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
