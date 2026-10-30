/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9CF706D25CEABAAB1E606E3B067831ED3B4AD7862B1896A18AC8117634D592E
 * Entry: 0x00078400, Ghidra index: 1426, label: FUN_00078400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000782c0(int param_1);

void FUN_00078400(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_000782c0(param_3);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 == 1) {
      uVar4 = (uint)*(float *)(iVar3 + 4);
    }
    else if (iVar1 == 2) {
      uVar4 = *(uint *)(iVar3 + 4);
    }
    else if (iVar1 == 3) {
      uVar4 = (uint)*(byte *)(iVar3 + 4);
    }
    else {
      uVar4 = 0;
    }
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 == 1) {
      fVar2 = (float)(int)*param_4;
      if ((int)*param_4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      *(float *)(iVar3 + 4) = fVar2;
    }
    else if (iVar1 == 2) {
      *(uint *)(iVar3 + 4) = *param_4;
    }
    else if (iVar1 == 3) {
      *(bool *)(iVar3 + 4) = *param_4 != 0;
    }
    if ((*(code **)(param_1 + 0x20) != (code *)0x0) && (*param_4 != uVar4)) {
      (**(code **)(param_1 + 0x20))(param_1,iVar3,param_2,param_3,*(undefined4 *)(param_1 + 0x24));
    }
  }
  return;
}
