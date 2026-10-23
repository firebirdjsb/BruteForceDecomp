/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D80F1A0E5DC2FA6E2022B9BB636F084BFCC641DE988ABD53F758CFEFCEF694F
 * Entry: 0x0002a870, Ghidra index: 284, label: FUN_0002a870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0002a870(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar6 = (int *)FUN_000120f0();
  piVar7 = (int *)FUN_00049ca0();
  if (piVar7 != (int *)0x0) {
    iVar8 = (**(code **)(*piVar6 + 0x40))();
    iVar9 = (**(code **)(*piVar7 + 0x40))();
    fVar1 = *(float *)(iVar9 + 0x28);
    fVar2 = *(float *)(iVar8 + 0x28);
    fVar3 = *(float *)(iVar9 + 0x24);
    fVar4 = *(float *)(iVar8 + 0x24);
    *(float *)(in_ECX + 0x450) = *(float *)(iVar9 + 0x2c) - *(float *)(iVar8 + 0x2c);
    *(float *)(in_ECX + 0x448) = fVar3 - fVar4;
    *(float *)(in_ECX + 0x44c) = fVar1 - fVar2;
    *(undefined4 *)(in_ECX + 0x44c) = 0;
    fVar1 = 1.0 / SQRT(*(float *)(in_ECX + 0x450) * *(float *)(in_ECX + 0x450) +
                       *(float *)(in_ECX + 0x44c) * *(float *)(in_ECX + 0x44c) +
                       *(float *)(in_ECX + 0x448) * *(float *)(in_ECX + 0x448));
    *(float *)(in_ECX + 0x448) = fVar1 * *(float *)(in_ECX + 0x448);
    *(float *)(in_ECX + 0x44c) = fVar1 * *(float *)(in_ECX + 0x44c);
    *(float *)(in_ECX + 0x450) = fVar1 * *(float *)(in_ECX + 0x450);
  }
  if (*(int *)(in_ECX + 0x8f4) != 0) {
    if ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 != 0) {
      cVar5 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,(undefined4 *)(in_ECX + 0x438),0,0x3f800000
                          );
      uStack_c = *(undefined4 *)(in_ECX + 0x440);
      uStack_14 = *(undefined4 *)(in_ECX + 0x438);
      uStack_10 = *(undefined4 *)(in_ECX + 0x43c);
      if (cVar5 != '\0') {
        FUN_000255d0(param_1,0);
        FUN_0004d970(in_ECX + -0x40,param_1,3,1,1);
        return 1;
      }
      iVar8 = FUN_00055aa0();
      *(uint *)(iVar8 + 0x88) = *(uint *)(iVar8 + 0x88) | 2;
      iVar8 = (**(code **)(piVar6[0x6d] + 0x28))();
      fStack_18 = -*(float *)(iVar8 + 0x20);
      fStack_1c = -*(float *)(iVar8 + 0x14);
      fStack_20 = -*(float *)(iVar8 + 8);
      (**(code **)(piVar6[0x6d] + 0x3c))(&fStack_20);
      FUN_0004e8f0();
    }
  }
  return 2;
}
