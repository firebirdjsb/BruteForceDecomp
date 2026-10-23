/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37F6CB851D87D6D847DECEFA6227E7124D2B3DA8B93C834306A37BBDFB7B0B22
 * Entry: 0x0021a700, Ghidra index: 7512, label: FUN_0021a700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0021a700(int *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined8 uStack_8;
  
  iVar2 = FUN_0015ed30(param_1[0x3a]);
  if (iVar2 == 1) {
    if (*(int *)(param_1[0x3a] + 0xc) == 1) {
      if ((*(byte *)(param_1 + 0x43) & 2) == 0) {
        return 0;
      }
      *(undefined4 *)(param_1[0x3a] + 0xc) = 0;
      FUN_0021c700();
      return 1;
    }
  }
  else if (((iVar2 == 2) && ((*(byte *)(param_1 + 0x43) & 1) != 0)) &&
          (piVar1 = *(int **)(*(int *)(param_1[2] + 0xbf0) + 0x38), piVar1 != (int *)0x0)) {
    pfVar3 = (float *)(**(code **)(piVar1[0x12] + 0xc))();
    fStack_10 = pfVar3[2];
    fStack_14 = pfVar3[1];
    fStack_18 = *pfVar3;
    iVar2 = (**(code **)(*piVar1 + 0x130))();
    fVar5 = (float)param_1[0x2b];
    fStack_c = *(float *)(iVar2 + 8) * fVar5;
    fVar4 = *(float *)(iVar2 + 0x14) * fVar5;
    fVar5 = *(float *)(iVar2 + 0x20) * fVar5;
    uStack_8 = CONCAT44(fVar5,fVar4);
    fStack_18 = fStack_18 - fStack_c;
    fStack_14 = fStack_14 - fVar4;
    fStack_10 = fStack_10 - fVar5;
    (**(code **)(*param_1 + 0x38))(&fStack_18);
  }
  return 1;
}
