/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D8163B33412F275387F4F7B9FB2196C55801FA2DF5E1312FA23149FBED264CB
 * Entry: 0x00226b80, Ghidra index: 7651, label: FUN_00226b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00226b80(float param_1)

{
  float fVar1;
  int iVar2;
  int *unaff_ESI;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [4];
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1 = (float)unaff_ESI[0x74] - param_1;
  unaff_ESI[0x74] = (int)param_1;
  if (param_1 < 0.0 != (param_1 == 0.0)) {
    unaff_ESI[0x74] = 0x3e800000;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    iVar2 = (**(code **)(*unaff_ESI + 0x40))();
    fVar1 = *(float *)(iVar2 + 0x14);
    fStack_14 = -*(float *)(iVar2 + 0x20);
    fStack_1c = -*(float *)(iVar2 + 8);
    fStack_18 = -fVar1;
    iVar2 = FUN_002237c0(auStack_10,&fStack_1c,*(undefined4 *)(unaff_ESI[0x8d] + 0x214),0x42700000,1
                         ,unaff_ESI[0x87],unaff_ESI[2],0,1);
    if ((0 < iVar2) && (*(int **)(local_c + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(local_c + 4) + 0x40))();
      FUN_00226360();
    }
    iVar2 = local_c;
    if (local_c != 0) {
      FUN_0001d590(auStack_10,-fVar1);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
  }
  return unaff_ESI[0x7b] != 0;
}
