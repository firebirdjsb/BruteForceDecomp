/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24431DA714E10318799721C23766A9E8613DFBF45FB1EC3B60CA407D97B8CA56
 * Entry: 0x00317292, Ghidra index: 12172, label: FUN_00317292
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00317292(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  int *piVar5;
  
  FUN_00316656(param_1);
  if ((*(ushort *)((int)in_ECX + 0x12) & 0x2000) == 0) {
    FUN_003174e3();
    (**(code **)(*in_ECX + 0x1c))(3);
    (**(code **)(*in_ECX + 0x1c))(1);
  }
  iVar2 = FUN_0031841f();
  if (-1 < iVar2) {
    FUN_003118f0();
    piVar3 = (int *)FUN_003118c0(in_ECX[0x2e]);
    FUN_00311923();
    piVar5 = piVar3 + 2;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *param_1;
      param_1 = param_1 + 1;
      piVar5 = piVar5 + 1;
    }
    piVar3[8] = 0;
    piVar3[9] = -0x7ffffff6;
    MmLockUnlockBufferPages(piVar3[2],piVar3[3],0);
    FUN_003118f0();
    *piVar3 = (int)(in_ECX + 0x2c);
    puVar1 = (undefined4 *)in_ECX[0x2d];
    piVar3[1] = (int)puVar1;
    *puVar1 = piVar3;
    *(int **)(*piVar3 + 4) = piVar3;
    FUN_00311923();
    if ((*(byte *)((int)in_ECX + 0x12) & 0x20) == 0) {
      FUN_00316fda();
    }
  }
  return iVar2;
}
