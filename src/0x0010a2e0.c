/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6F4946CC952FF7D69F9260284540300FBE9D6EFEDEB5A029AE1FB3713B56D38
 * Entry: 0x0010a2e0, Ghidra index: 3425, label: FUN_0010a2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010a2e0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int unaff_EDI;
  float local_8;
  float local_4;
  
  if ((*(int *)(unaff_EDI + 0x84) == 1) && (param_1[2] == 8.40779e-45)) {
    local_8 = *(float *)(unaff_EDI + 0x14) * 0.5 + param_2;
    fVar1 = *(float *)(unaff_EDI + 0x18) * 0.5;
  }
  else {
    if ((uint)param_1[9] < 8) {
      pfVar2 = param_1 + 4;
    }
    else {
      pfVar2 = (float *)param_1[4];
    }
    FUN_000ccae0(*(undefined4 *)(unaff_EDI + 0xf0),pfVar2,&local_8,&local_4,0,0x3f800000);
    local_8 = local_8 * 0.5 + *param_1 + param_2;
    fVar1 = local_4 * 0.5 + param_1[1];
  }
  param_3 = fVar1 + param_3;
  pfVar2 = (float *)(unaff_EDI + 0xb8);
  iVar4 = 2;
  do {
    local_4 = ((*(float *)(unaff_EDI + 0xac) - 1.0) / *pfVar2) * pfVar2[1] + 1.0;
    FUN_000b2110(pfVar2 + -2,&param_2);
    if ((uint)param_1[9] < 8) {
      pfVar3 = param_1 + 4;
    }
    else {
      pfVar3 = (float *)param_1[4];
    }
    FUN_000ccd20(*(undefined4 *)(unaff_EDI + 0xf0),local_8,param_3,
                 (((uint)(param_2._2_2_ >> 8) * 0x100 + ((uint)param_2 & 0xff)) * 0x100 +
                 ((uint)param_2 >> 8 & 0xff)) * 0x100 + (param_2._2_2_ & 0xff),pfVar3,6,local_4,0,0,
                 0xffffffff);
    pfVar2 = pfVar2 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}
