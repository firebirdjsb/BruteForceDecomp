/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EB2FA2652F414DA1451BC1F0247E1B5FFDB53558D86FAA8459DAE8EFE47EDEA
 * Entry: 0x00022520, Ghidra index: 197, label: FUN_00022520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00022420(int param_1,undefined4 param_2,float param_3);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);

int FUN_00022520(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  int iVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  
  iVar5 = FUN_00022420(unaff_ESI,unaff_EBX,*(undefined4 *)(in_EAX + 8));
  if ((*(int *)(unaff_ESI + 0x6c0) != 0) && (iVar5 == 1)) {
    piVar6 = (int *)FUN_000120f0();
    iVar7 = (**(code **)(*piVar6 + 0x40))();
    pfVar8 = (float *)(**(code **)(*(int *)(*(int *)(unaff_ESI + 0x6c0) + 8) + 4))();
    fVar3 = *(float *)(iVar7 + 0x24) - *pfVar8;
    fVar4 = *(float *)(iVar7 + 0x2c) - pfVar8[2];
    if (fVar3 * fVar3 + fVar4 * fVar4 < 0.09) {
      uVar1 = *(undefined4 *)(unaff_ESI + 0x6dc);
      uVar2 = *(undefined4 *)(unaff_ESI + 0x6d8);
      *unaff_EBX = *(undefined4 *)(unaff_ESI + 0x6d4);
      unaff_EBX[1] = uVar2;
      unaff_EBX[2] = uVar1;
      FUN_0004d970(unaff_ESI,unaff_EBX,1,1,1);
    }
  }
  return iVar5;
}
