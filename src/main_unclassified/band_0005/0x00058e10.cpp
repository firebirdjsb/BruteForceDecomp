/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60A0AB89ECB8353357D9D2CD44EEE1C2105392202FE320AE9358304C58F6E726
 * Entry: 0x00058e10, Ghidra index: 886, label: FUN_00058e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d29b0(undefined4 guest_out_word);

int FUN_00058e10(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_3c [6];
  undefined4 local_18 [5];
  undefined1 local_4;
  undefined1 local_3;
  
  if ((*(uint *)(param_1 + 0x24) & 0xffff0000) == 0xffff0000) {
    local_4 = 0;
    local_3 = 0;
    puVar4 = local_18;
    puVar5 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_000d29b0();
    iVar1 = *unaff_EBX;
    if (*(int *)(iVar1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x18;
    }
    *(int *)(*(int *)(iVar1 + 4) + -0x18 + iVar3 * 0x18) = param_1;
    iVar1 = *(int *)(*unaff_EBX + 4);
    sVar2 = 0;
    if (iVar1 != 0) {
      sVar2 = (short)((*(int *)(*unaff_EBX + 8) - iVar1) / 0x18);
    }
    *(short *)(param_1 + 0x26) = sVar2 + -1;
  }
  return *(int *)(*unaff_EBX + 4) + *(short *)(param_1 + 0x26) * 0x18;
}
