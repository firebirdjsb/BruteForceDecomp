/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C50EDD450C2E64341B4420AB36B1C19857AC0B3B9C74E0D365E8E61A8B1050D5
 * Entry: 0x00302600, Ghidra index: 11082, label: FUN_00302600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00302600(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_4;
  
  if (*(ushort *)(param_1 + 0x1c) <= *(ushort *)(param_1 + 0x1e)) {
    FUN_00306780(4);
  }
  *(int *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0x1e) * 4) = in_EAX;
  *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
  piVar5 = (int *)(in_EAX + 8);
  local_4 = 2;
  do {
    iVar3 = *(ushort *)(param_1 + 0x26) - 1;
    iVar1 = *piVar5;
    if (-1 < iVar3) {
      piVar4 = (int *)(*(int *)(param_1 + 0x28) + iVar3 * 4);
      do {
        if (*piVar4 == iVar1) {
          if (-1 < iVar3) goto LAB_003026ae;
          break;
        }
        iVar3 = iVar3 + -1;
        piVar4 = piVar4 + -1;
      } while (-1 < iVar3);
    }
    if (*(ushort *)(param_1 + 0x24) <= *(ushort *)(param_1 + 0x26)) {
      FUN_00306780(4);
    }
    *(int *)(*(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x26) * 4) = iVar1;
    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
    pbVar2 = *(byte **)(iVar1 + 0x90);
    if ((*pbVar2 & 0xc) == 0) {
      if (*(ushort *)(param_1 + 8) <= *(ushort *)(param_1 + 10)) {
        FUN_002ccf80();
      }
      *(byte **)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 10) * 4) = pbVar2;
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
    }
LAB_003026ae:
    piVar5 = piVar5 + -1;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
      return;
    }
  } while( true );
}
