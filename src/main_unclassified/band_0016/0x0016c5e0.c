/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E9F4247CE4AD19A9ABE7BE029BBDA1D40EC5DD033B5A120AD396BF8CDEAC218
 * Entry: 0x0016c5e0, Ghidra index: 4783, label: FUN_0016c5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016c5e0(float param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char *in_EAX;
  uint uVar8;
  
  if (*in_EAX == '\0') {
    FUN_0016c190();
    *in_EAX = '\x01';
  }
  iVar1 = *(int *)(in_EAX + 0x10);
  fVar7 = (float)*(int *)(*(int *)(iVar1 + *(int *)(in_EAX + 4) * 4) + 0xc);
  fVar5 = fVar7;
  if (fVar7 < param_1) {
    fVar5 = param_1;
  }
  fVar6 = (float)*(int *)(*(int *)(iVar1 + *(int *)(in_EAX + 8) * 4) + 0xc);
  if ((fVar6 < fVar5) || (fVar6 = param_1, fVar7 < param_1)) {
    param_1 = fVar6;
    fVar7 = param_1;
  }
  param_1 = fVar7;
  uVar8 = FUN_0016c3c0(param_1);
  if (uVar8 != 0xffffffff) {
    iVar2 = *(int *)(iVar1 + 4 + uVar8 * 4);
    iVar3 = *(int *)(iVar1 + 8 + uVar8 * 4);
    iVar4 = *(int *)(iVar2 + 0xc);
    fVar5 = (param_1 - (float)iVar4) / (float)(*(int *)(iVar3 + 0xc) - iVar4);
    if ((uVar8 & 1) == 0) {
      fVar7 = 0.5;
    }
    else {
      fVar7 = -0.5;
    }
    FUN_0016bc20(in_EAX,*(undefined4 *)(iVar1 + uVar8 * 4),iVar2,iVar3,
                 *(undefined4 *)(iVar1 + 0xc + uVar8 * 4),((1.0 - fVar7) + fVar7 * fVar5) * fVar5,
                 param_2);
  }
  return;
}
