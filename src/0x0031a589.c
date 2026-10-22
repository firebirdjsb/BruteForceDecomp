/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A6A1FAB533B8A733C348FD651091223CDF2B5F28D871BDE8B22555BC936BC5A
 * Entry: 0x0031a589, Ghidra index: 12259, label: FUN_0031a589
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0031a589(uint param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = param_1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(int *)(param_1 + 0x1c) = param_3;
  FUN_00314a1f(2);
  FUN_00314a12(param_2);
  puVar3 = (undefined4 *)FUN_003148cf(0x626f5344,param_3 * 0x30,1);
  *(undefined4 **)(param_1 + 0x40) = puVar3;
  if (-1 < (int)((-(uint)(puVar3 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e)) {
    for (iVar5 = (param_3 * 3 & 0xfffffffU) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    piVar1 = (int *)(param_1 + 0x1c);
    param_1 = 0;
    if (*piVar1 != 0) {
      iVar5 = 0;
      do {
        uVar4 = XAPILIB__CreateEventA(0,0,0,0);
        *(undefined4 *)(*(int *)(iVar2 + 0x40) + 0x10 + iVar5) = uVar4;
        if (*(int *)(*(int *)(iVar2 + 0x40) + 0x10 + iVar5) == 0) {
          return 0;
        }
        param_1 = param_1 + 1;
        iVar5 = iVar5 + 0x30;
      } while (param_1 < *(uint *)(iVar2 + 0x1c));
    }
  }
  return 0;
}
