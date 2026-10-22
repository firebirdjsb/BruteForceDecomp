/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D84F53350DE361AB3328095AFAA8AA9B6DD10FD7712A672767D40F994AA1088B
 * Entry: 0x000b4f20, Ghidra index: 2184, label: FUN_000b4f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b4f20(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int unaff_retaddr;
  float fVar5;
  float fStack_1c;
  int iStack_c;
  int local_8 [2];
  
  (**(code **)(*param_1 + 0x2c))(local_8);
  iVar4 = *(int *)(unaff_retaddr + 0x28);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar4 + -0x2c;
  }
  iVar3 = (int)*(short *)(unaff_retaddr + 8) - (int)*(short *)(iVar3 + 8);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -0x2c;
  }
  iVar4 = (int)*(short *)(unaff_retaddr + 10) - (int)*(short *)(iVar4 + 10);
  fVar2 = (float)(iStack_c - iVar3);
  fVar1 = (float)(local_8[0] - iVar4);
  if (0.0 <= fVar2) {
    fVar5 = (float)param_1 * *(float *)(unaff_retaddr + 0x48);
    if (fVar2 <= fVar5) {
      fVar5 = fVar2;
    }
  }
  else {
    fVar5 = -((float)param_1 * *(float *)(unaff_retaddr + 0x44));
    if (fVar5 <= fVar2) {
      fVar5 = fVar2;
    }
  }
  if (0.0 <= fVar1) {
    fStack_1c = (float)param_1 * *(float *)(unaff_retaddr + 0x40);
    if (fVar1 <= fStack_1c) {
      fStack_1c = fVar1;
    }
  }
  else {
    fStack_1c = -((float)param_1 * *(float *)(unaff_retaddr + 0x40));
    if (fStack_1c <= fVar1) {
      fStack_1c = fVar1;
    }
  }
  *(short *)(unaff_retaddr + 4) = (short)iVar3 + (short)(int)fVar5;
  *(short *)(unaff_retaddr + 6) = (short)iVar4 + (short)(int)fStack_1c;
  return;
}
