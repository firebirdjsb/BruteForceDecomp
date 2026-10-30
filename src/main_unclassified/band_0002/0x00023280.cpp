/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCF337FC3E50B75F346561B46E2217637308BA04396CE07A9033120DCACA3BC4
 * Entry: 0x00023280, Ghidra index: 220, label: FUN_00023280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_00023140(int param_1,float *param_2);
extern void FUN_00306c80(void);

undefined4 FUN_00023280(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char in_AL;
  undefined2 extraout_var;
  undefined4 uVar4;
  float *in_ECX;
  int unaff_ESI;
  float10 fVar5;
  float10 fVar6;
  
  if (in_AL != '\0') {
    fVar1 = *(float *)(unaff_ESI + 0x1c) - in_ECX[2];
    fVar2 = *(float *)(unaff_ESI + 0x18) - in_ECX[1];
    fVar3 = *(float *)(unaff_ESI + 0x14) - *in_ECX;
    fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
    fVar3 = *(float *)(unaff_ESI + 0x60) * *(float *)(unaff_ESI + 0x60);
    if (fVar3 < fVar1) {
      return CONCAT22((short)((uint)fVar2 >> 0x10),
                      (ushort)(fVar3 < fVar1) << 8 | (ushort)(isnan(fVar3) || isnan(fVar1)) << 10 |
                      (ushort)(fVar3 == fVar1) << 0xe);
    }
  }
  FUN_00023140(unaff_ESI,in_ECX);
  fVar5 = (float10)FUN_00306c80();
  fVar5 = fVar5 * (float10)57.295776;
  fVar6 = (float10)*(float *)(unaff_ESI + 0x5c) * (float10)0.5 + (float10)param_1;
  uVar4 = CONCAT22(extraout_var,
                   (ushort)(fVar5 < fVar6) << 8 | (ushort)(isnan(fVar5) || isnan(fVar6)) << 10 |
                   (ushort)(fVar5 == fVar6) << 0xe);
  if (fVar5 >= fVar6) {
    return uVar4;
  }
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}
