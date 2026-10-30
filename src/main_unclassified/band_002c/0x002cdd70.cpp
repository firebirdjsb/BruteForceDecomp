/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B610A9749EF60DB346D0BD136C46DE3D8CB7E81981E14F0F3099A15E832D29F6
 * Entry: 0x002cdd70, Ghidra index: 10173, label: FUN_002cdd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float10 FUN_002cdd70(int param_1)

{
  int iVar1;
  int *unaff_EBX;
  uint *puVar2;
  float *pfVar3;
  float *unaff_EDI;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_14;
  float local_10;
  float local_c;
  float fStack_8;
  undefined4 local_4;
  
  FUN_002cd2b0();
  if (-1 < (int)((uint)fStack_8 | (uint)local_c | (uint)local_10)) {
    local_4 = 0;
    pfVar3 = (float *)((*(uint *)(param_1 + 4) & 0xffff) * 0x10 + *unaff_EBX + (int)unaff_EBX);
    FUN_002cdc50(&local_10);
    fVar6 = ((float10)local_10 * (float10)*unaff_EDI +
            (float10)fStack_8 * (float10)unaff_EDI[2] + (float10)local_c * (float10)unaff_EDI[1]) -
            ((float10)local_10 * (float10)*pfVar3 +
            (float10)fStack_8 * (float10)pfVar3[2] + (float10)local_c * (float10)pfVar3[1]);
    return ((float10)1.0 / (float10)(local_c * local_c + fStack_8 * fStack_8 + local_10 * local_10))
           * fVar6 * fVar6;
  }
  local_14 = 1e+20;
  puVar2 = (uint *)(param_1 + 0xc);
  param_1 = 3;
  do {
    FUN_002cd190();
    if (0.0 <= local_10) {
      if (0.0 <= local_c) {
        fVar6 = (float10)FUN_002cdcb0();
        goto LAB_002cdeda;
      }
    }
    else {
      iVar1 = (*puVar2 & 0xffff) * 0x10 + *unaff_EBX;
      fVar6 = (float10)*unaff_EDI - (float10)*(float *)(iVar1 + (int)unaff_EBX);
      fVar4 = (float10)unaff_EDI[1] - (float10)*(float *)((int)unaff_EBX + iVar1 + 4);
      fVar5 = (float10)unaff_EDI[2] - (float10)*(float *)((int)unaff_EBX + iVar1 + 8);
      fVar6 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
LAB_002cdeda:
      if (fVar6 < (float10)local_14) {
        local_14 = (float)fVar6;
      }
    }
    puVar2 = puVar2 + -1;
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return (float10)local_14;
    }
  } while( true );
}
