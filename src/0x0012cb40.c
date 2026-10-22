/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5540703B50A463F9F5ACD21312982AEBFC866F18E8E669B16508AFA270884A94
 * Entry: 0x0012cb40, Ghidra index: 3799, label: FUN_0012cb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012cb40(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  float extraout_EDX;
  float *unaff_EBX;
  float *unaff_ESI;
  int *unaff_EDI;
  
  if ((*(byte *)(unaff_EDI[2] + 0xc50) & 0x10) == 0) {
    iVar5 = (**(code **)(*unaff_EDI + 0xf4))();
    fVar6 = 0.0;
    if (((iVar5 == 0) || ((*(byte *)(iVar5 + 0x14) & 2) == 0)) &&
       ((*(byte *)((int)unaff_EDI + 0x262) & 2) == 0)) {
      unaff_ESI[2] = 0.0;
      unaff_ESI[1] = 0.0;
      *unaff_ESI = 0.0;
      return;
    }
    iVar5 = unaff_EDI[0x7e];
    if (((iVar5 != 0xf) && (iVar5 != 0x10)) &&
       ((iVar5 != 0x11 &&
        ((((iVar5 != 0x12 && (iVar5 != 0xd)) && (iVar5 != 0xe)) &&
         ((iVar5 != 0x19 && (iVar5 != 0x2c)))))))) {
      iVar5 = unaff_EDI[0x1c8];
      if ((*(byte *)(unaff_EDI[3] + 0x1a8) & 1) != 0) {
        unaff_EDI[0x1c8] = (int)((float)unaff_EDI[0x1c8] * 0.8);
      }
      if ((char)unaff_EDI[0x200] == '\0') {
        unaff_EDI[0x1c8] = (int)((float)unaff_EDI[0x1c8] * 0.8);
      }
      FUN_0012c6c0(unaff_EDI,unaff_EBX,param_1,unaff_ESI);
      unaff_EDI[0x1c8] = iVar5;
      return;
    }
    fVar1 = unaff_EBX[2];
    fVar2 = unaff_EBX[1];
    *unaff_ESI = *unaff_EBX;
    unaff_ESI[2] = fVar1;
    unaff_ESI[1] = fVar2;
    *unaff_ESI = (float)unaff_EDI[0x1c8] * *unaff_ESI;
    unaff_ESI[2] = (float)unaff_EDI[0x1c8] * unaff_ESI[2];
  }
  else {
    iVar5 = (**(code **)(*unaff_EDI + 0xf4))();
    fVar6 = 0.0;
    if (((iVar5 != 0) && ((*(byte *)(iVar5 + 0x14) & 2) != 0)) ||
       ((*(byte *)((int)unaff_EDI + 0x262) & 2) != 0)) {
      fVar2 = unaff_EBX[2];
      fVar3 = unaff_EBX[1];
      *unaff_ESI = *unaff_EBX;
      unaff_ESI[2] = fVar2;
      unaff_ESI[1] = fVar3;
      *unaff_ESI = (float)unaff_EDI[0x1c8] * *unaff_ESI;
      fVar1 = (float)unaff_EDI[0x1c8];
      unaff_ESI[1] = 0.0;
      unaff_ESI[2] = fVar1 * unaff_ESI[2];
      if ((int *)unaff_EDI[0x87] == (int *)0x0) goto LAB_0012ccc6;
      if (1.1920929e-07 <= *(float *)(*(int *)unaff_EDI[0x87] + 8)) {
        cVar4 = FUN_00126ba0(fVar2,fVar3);
        fVar6 = extraout_EDX;
        if (cVar4 == '\0') goto LAB_0012ccc6;
      }
    }
    unaff_ESI[2] = fVar6;
    *unaff_ESI = fVar6;
  }
  unaff_ESI[1] = fVar6;
LAB_0012ccc6:
  if (1.1920929e-07 < param_1) {
    unaff_EDI[0x11c] = (int)((1.0 / param_1) * *unaff_ESI);
    unaff_EDI[0x11e] = (int)((1.0 / param_1) * unaff_ESI[2]);
  }
  unaff_ESI[1] = param_1 * (float)unaff_EDI[0x11d];
  return;
}
