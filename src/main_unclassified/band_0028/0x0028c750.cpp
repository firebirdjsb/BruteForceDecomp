/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4E3E273E24AE68EFEA0C824504E461BE6CA24ACE70246FAC3DE0250C64CB2A6
 * Entry: 0x0028c750, Ghidra index: 9182, label: FUN_0028c750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028c750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int unaff_ESI;
  float *unaff_EDI;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = (float *)0x0;
  local_8 = 0;
  local_4 = 0;
  FUN_00143e20(0);
  *unaff_EDI = 0.0;
  FUN_0028b860(unaff_ESI,param_2,param_3,param_4,param_5,0,&local_28);
  *local_c = param_6;
  uVar3 = 0;
  pfVar2 = local_c;
  if (*(int *)(unaff_ESI + 8) != 0) {
    do {
      uVar3 = uVar3 + 1;
      FUN_0028b860(unaff_ESI,param_2,param_3,param_4,param_5,
                   (float)(int)uVar3 * *(float *)(unaff_ESI + 0xc),&local_34);
      local_14 = local_2c - local_20;
      local_18 = local_30 - local_24;
      fVar1 = local_34 - local_28;
      local_24 = local_30;
      local_20 = local_2c;
      local_28 = local_34;
      fVar1 = SQRT(fVar1 * fVar1 + local_18 * local_18 + local_14 * local_14) + *unaff_EDI;
      *unaff_EDI = fVar1;
      pfVar2[1] = fVar1 + param_6;
      pfVar2 = pfVar2 + 1;
    } while (uVar3 < *(uint *)(unaff_ESI + 8));
  }
  pfVar2 = local_c;
  FUN_0010bc40();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(pfVar2);
}
