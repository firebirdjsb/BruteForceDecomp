/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16BA6F764BB474031FCBE2AD9C8D71E6D78E1BCDBCE729EDFBA580032536F10A
 * Entry: 0x00155e20, Ghidra index: 4471, label: FUN_00155e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00155e20(int param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined4 local_70;
  char local_60;
  int local_58;
  int local_28;
  
  bVar1 = *(byte *)(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if ((bVar1 & 4) != 0) {
    *(byte *)(param_1 + 0x26) = bVar1 | 2;
    return;
  }
  *(float *)(param_1 + 0x1c) = param_2 + *(float *)(param_1 + 0x1c);
  local_84 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x204);
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  if ((iVar2 == 0xc) || (iVar2 == 0x10)) {
    *(byte *)(param_1 + 0x26) = bVar1 | 2;
    return;
  }
  if (iVar2 == 4) {
    bVar4 = *(byte *)(param_1 + 0x94) >> 5;
  }
  else {
    bVar4 = *(byte *)(*(int *)(param_1 + 0xc) + 0xc) >> 1;
  }
  if (((bVar4 & 1) != 0) && ((bVar1 & 2) == 0)) {
    *(byte *)(param_1 + 0x26) = bVar1 | 4;
    cVar5 = FUN_00022bc0(&local_88);
    if ((cVar5 == '\x01') && (*(short *)(param_1 + 0x20) != -1)) {
      FUN_000d4240(local_88);
      FUN_000d4270(local_80);
      FUN_000d1420(local_70);
      iVar3 = local_28;
      while (local_58 != iVar3) {
        FUN_001f3840();
        FUN_000d4210();
      }
      if (local_60 != '\0') {
        FUN_000d0b20();
      }
    }
  }
  if (((*(byte *)(param_1 + 0x26) & 4) == 0) && (*(short *)(param_1 + 0x20) != -1)) {
    cVar5 = FUN_00022bc0(&local_88);
    if (cVar5 == '\x01') {
      if ((iVar2 == 4) && (*(int *)(*(int *)(param_1 + 0xc) + 0x2c) == 3)) goto LAB_00156020;
      FUN_000d4240(local_88);
      FUN_000d4270(local_80);
      FUN_000d1420(local_70);
      if (local_28 != local_58) {
        do {
          FUN_001f3800();
          FUN_000d4210();
        } while (local_58 != local_28);
        if (local_60 == '\0') goto LAB_00156020;
      }
    }
    FUN_000d0b50();
  }
LAB_00156020:
  *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 2;
  return;
}
