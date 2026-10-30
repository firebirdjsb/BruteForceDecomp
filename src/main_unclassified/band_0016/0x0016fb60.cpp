/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91FAB432A6721770E5CB7427FDC307BEB13356FA4012CB07BA9BA091C352FD51
 * Entry: 0x0016fb60, Ghidra index: 4835, label: FUN_0016fb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016fb60(float param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float *extraout_ECX;
  float *unaff_ESI;
  float10 fVar4;
  float fVar5;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar4 = (float10)FUN_0016fe00(param_1);
  fVar5 = (float)fVar4;
  fVar3 = extraout_ECX[0x15];
  if (((uint)fVar3 & 1) != 0) {
    pfVar2 = (float *)FUN_0012b250((int)extraout_ECX[0x18] + 0x14,fVar5);
    fVar5 = *pfVar2;
    fStack_24 = pfVar2[3];
    fStack_28 = pfVar2[2];
    fStack_2c = pfVar2[1];
    goto LAB_0016fdc8;
  }
  if ((((uint)fVar3 & 2) == 0) && (((uint)fVar3 & 4) == 0)) {
    if (((uint)fVar3 & 8) == 0) {
      fVar4 = (float10)fsin((float10)fVar5);
      fVar3 = (float)fVar4;
      fVar4 = (float10)fcos((float10)fVar5);
      fVar1 = (float)fVar4;
      fVar5 = *extraout_ECX + extraout_ECX[4] * fVar1 + extraout_ECX[8] * fVar3;
      fStack_2c = extraout_ECX[1] + extraout_ECX[5] * fVar1 + extraout_ECX[9] * fVar3;
      fStack_28 = extraout_ECX[2] + extraout_ECX[6] * fVar1 + extraout_ECX[10] * fVar3;
      fStack_24 = extraout_ECX[3] + extraout_ECX[7] * fVar1 + extraout_ECX[0xb] * fVar3;
      goto LAB_0016fdc8;
    }
    if (param_1 < extraout_ECX[0x12]) {
      pfVar2 = (float *)FUN_0012b250(extraout_ECX[0x18],param_1 / extraout_ECX[0x12]);
      fVar5 = *pfVar2;
      fStack_24 = pfVar2[3];
      fStack_28 = pfVar2[2];
      fStack_2c = pfVar2[1];
      goto LAB_0016fdc8;
    }
    fVar3 = (float)((int)extraout_ECX[0x18] + 0x14);
    fVar5 = (param_1 - extraout_ECX[0x12]) / (1.0 - extraout_ECX[0x12]);
  }
  else {
    fVar3 = extraout_ECX[0x18];
  }
  pfVar2 = (float *)FUN_0012b250(fVar3,fVar5);
  fVar5 = *pfVar2;
  fStack_24 = pfVar2[3];
  fStack_28 = pfVar2[2];
  fStack_2c = pfVar2[1];
LAB_0016fdc8:
  *unaff_ESI = fVar5;
  unaff_ESI[2] = fStack_28;
  unaff_ESI[1] = fStack_2c;
  unaff_ESI[3] = fStack_24;
  return;
}
