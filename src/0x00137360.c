/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB6C235E941119F321CD717057C64BE871E3D5361D267A8F12B38E685DFCD6B0
 * Entry: 0x00137360, Ghidra index: 3904, label: FUN_00137360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00137360(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_3 == 0) {
    param_3 = *(uint *)(param_1 + 0x58);
  }
  if ((*(byte *)((int)param_2 + 0x26) & 8) == 0) {
    return 0;
  }
  uVar1 = 0;
  if (param_3 < 0xe3bdaee1) {
    if (param_3 == 0xe3bdaee0) {
      iVar2 = (**(code **)(*param_2 + 0xf4))();
      switch(*(undefined4 *)(iVar2 + 0x58)) {
      case 1:
        return 0x1e;
      default:
        return 0;
      case 3:
        return 0x14;
      case 4:
        return 0x28;
      case 5:
        return 10;
      }
    }
    if (param_3 == 0x12b74a88) {
      (**(code **)(*param_2 + 0xf4))();
      uVar1 = FUN_0001b460();
      return uVar1;
    }
    if (param_3 != 0x1409c600) {
      if (param_3 == 0x19690a85) {
        fVar3 = (float10)FUN_001265c0(param_2);
        return (int)(fVar3 * (float10)100.0);
      }
LAB_00137437:
      fVar3 = (float10)FUN_001264a0(param_2);
      return (int)(fVar3 * (float10)100.0);
    }
  }
  else {
    if (param_3 != 0xe63846de) {
      if (param_3 == 0xe7fad8d2) {
        return param_2[0x16a];
      }
      if (param_3 == 0xe8f64b20) {
        iVar2 = (**(code **)(*param_2 + 0xf4))();
        if (iVar2 == 0) {
          return 0;
        }
        if (*(int *)(iVar2 + 0x770) == 0) {
          return 10;
        }
        return (*(int *)(iVar2 + 0x770) != 3) - 1 & 0x14;
      }
      goto LAB_00137437;
    }
    uVar1 = (uint)(((float)param_2[0x15] / (float)param_2[0x14]) * 100.0);
  }
  return uVar1;
}
