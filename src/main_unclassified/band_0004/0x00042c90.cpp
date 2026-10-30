/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8E1D7D792E1B927422A456A03462A745D8B7E1CA84272A258514FB67A3EFDC2
 * Entry: 0x00042c90, Ghidra index: 517, label: FUN_00042c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_0005bca0(void);
extern float10 FUN_000394b0(void);
extern undefined4 FUN_00049ca0(void);
extern undefined4 FUN_00055aa0(void);
extern uint FUN_00023110(void);
extern void FUN_0004dff0(void);

void FUN_00042c90(void)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBX;
  float10 fVar6;
  
  if (((*(byte *)(unaff_EBX + 0x18c) & 1) == 0) ||
     (*(float *)(unaff_EBX + 0x188) < 0.0 != (*(float *)(unaff_EBX + 0x188) == 0.0))) {
    *(undefined4 *)(unaff_EBX + 400) = 0x40000000;
    *(undefined4 *)(unaff_EBX + 0x188) = 0x40000000;
    *(byte *)(unaff_EBX + 0x18c) = *(byte *)(unaff_EBX + 0x18c) & 0xf9 | 1;
    piVar3 = (int *)FUN_000120f0();
    iVar4 = FUN_000120f0();
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0x59c) == 0)) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0005bca0();
    }
    (**(code **)(*piVar5 + 0x40))();
    (**(code **)(*piVar3 + 0x40))();
    fVar6 = (float10)FUN_000394b0();
    iVar4 = FUN_000120f0();
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x1b4) + 8))();
    fVar1 = *(float *)(iVar4 + 0x38);
    iVar4 = FUN_00049ca0();
    if ((iVar4 != 0) || (iVar4 = FUN_00055aa0(), *(int *)(iVar4 + 0x5c) == 0x84)) {
      fVar1 = fVar1 * 1.5;
      if ((fVar1 - 1.0 < (float)fVar6) && (cVar2 = FUN_00023110(), cVar2 == '\0')) {
        FUN_00049ca0();
        FUN_00012320(0x29);
        FUN_0004dff0(unaff_EBX);
        FUN_00012440();
      }
      if ((fVar1 + 10.0 < (float)fVar6) && (cVar2 = FUN_00023110(), cVar2 == '\0')) {
        FUN_00049ca0();
        FUN_00012320(0x2a);
        FUN_0004dff0(unaff_EBX);
        FUN_00012440();
      }
    }
  }
  return;
}
