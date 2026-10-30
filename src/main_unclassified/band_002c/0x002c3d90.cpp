/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96C3BB8AA8C25BDB6EA96384A223F3AD34CA33E39ADF89E460C25C75BF57690B
 * Entry: 0x002c3d90, Ghidra index: 10051, label: FUN_002c3d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c3d90(float param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = (int)param_1;
  fVar4 = (float10)FUN_002c3cb0(param_2);
  iVar3 = *(ushort *)((int)param_1 + 2) - 1;
  param_1 = 0.0;
  if (-1 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 4) + iVar3 * 4);
      FUN_002c3cf0(iVar1,(float)fVar4);
      if (*(char *)(iVar1 + 0x34) == '\x01') {
        FUN_002c37d0(iVar1,param_2);
      }
      else {
        fVar5 = (float10)FUN_002c2fc0(iVar1,param_2);
        param_1 = (float)(fVar5 + (float10)param_1);
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (0.0 < param_1) {
      *(float *)(iVar2 + 0x28) = param_1 + *(float *)(iVar2 + 0x28);
    }
  }
  return;
}
