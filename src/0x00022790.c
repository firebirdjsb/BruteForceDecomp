/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0364BD7A70443AF264B4160D61090206B3F0D79744199DD3CF1D3D6631FB9E65
 * Entry: 0x00022790, Ghidra index: 199, label: FUN_00022790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x000228A1 (fld) / 0x000228AE (fmul): 32-bit float, not a pointer. */
extern float DAT_0040e748;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00022790(undefined4 param_1,undefined1 *param_2)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  int unaff_ESI;
  float10 fVar9;
  undefined4 local_28;
  float fStack_20;
  float local_1c;
  
  piVar6 = (int *)FUN_000120f0();
  if (*(int *)(unaff_ESI + 0x934) != 0) {
    if ((*(int *)(unaff_ESI + 0x938) - *(int *)(unaff_ESI + 0x934)) / 0x18 != 0) {
      *(undefined4 *)(unaff_ESI + 0x8a0) = 0x3f800000;
      *(undefined1 *)(unaff_ESI + 0x89d) = 0;
      piVar2 = *(int **)(*(int *)(unaff_ESI + 0x938) + -4);
      local_28 = 0x3f800000;
      if (piVar2 == *(int **)(*(int *)(unaff_ESI + 0x934) + 0x14 +
                             *(int *)(unaff_ESI + 0x940) * 0x18)) {
        local_28 = 0x3dcccccd;
        iVar7 = (**(code **)(*piVar2 + 0x3c))();
        if (iVar7 != 10) {
          return 0;
        }
        /* XBE 0x0002282B: fld dword ptr [edi+0x5c], an f32 field. */
        if (61.0f < *(const float *)(piVar2 + 0x17)) {
          local_28 = 0x3e800000;
        }
        iVar7 = (**(code **)(*piVar6 + 0x40))();
        pfVar8 = (float *)(**(code **)(*(int *)(*(int *)(unaff_ESI + 0x6c0) + 8) + 4))();
        fVar3 = *(float *)(iVar7 + 0x24) - *pfVar8;
        fVar4 = *(float *)(iVar7 + 0x2c) - pfVar8[2];
        fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
        if (fVar3 < 2.25) {
          fVar9 = (float10)FUN_0002fba0(unaff_ESI,piVar2 + 5,0x3f666666);
          *(float *)(unaff_ESI + 0x8a0) = (float)fVar9;
          fVar4 = DAT_0040e748;
          *(undefined1 *)(unaff_ESI + 0x89d) = 1;
          if ((fVar3 < fVar4 * DAT_0040e748) && ((*(byte *)(piVar2 + 0x19) & 3) != 0)) {
            (**(code **)(piVar2[3] + 8))();
            pfVar8 = (float *)FUN_0001fd10();
            fStack_20 = -pfVar8[2];
            local_1c = -pfVar8[1];
            fVar3 = -*pfVar8;
            (**(code **)(*piVar6 + 0x40))();
            pfVar8 = (float *)FUN_0001fdd0();
            bVar1 = *(byte *)(piVar2 + 0x19);
            if (fVar3 * -*pfVar8 + local_1c * -pfVar8[1] + fStack_20 * -pfVar8[2] <= 0.0) {
              if ((bVar1 & 2) != 0) {
                *(float *)(unaff_ESI + 0x488) = -fVar3;
                *(float *)(unaff_ESI + 0x48c) = -local_1c;
                *(float *)(unaff_ESI + 0x490) = -fStack_20;
                *(undefined4 *)(unaff_ESI + 0x6d4) = *(undefined4 *)(unaff_ESI + 0x488);
                *(float *)(unaff_ESI + 0x6d8) = -local_1c;
                *(float *)(unaff_ESI + 0x6dc) = -fStack_20;
                goto LAB_00022af6;
              }
              if ((bVar1 & 1) == 0) goto LAB_00022af6;
              *(float *)(unaff_ESI + 0x488) = fVar3;
            }
            else {
              if ((bVar1 & 1) != 0) {
                *(float *)(unaff_ESI + 0x488) = fVar3;
                *(float *)(unaff_ESI + 0x48c) = local_1c;
                *(float *)(unaff_ESI + 0x490) = fStack_20;
                *(undefined4 *)(unaff_ESI + 0x6d4) = *(undefined4 *)(unaff_ESI + 0x488);
                *(float *)(unaff_ESI + 0x6d8) = local_1c;
                *(float *)(unaff_ESI + 0x6dc) = fStack_20;
                goto LAB_00022af6;
              }
              if ((bVar1 & 2) == 0) goto LAB_00022af6;
              fStack_20 = -fStack_20;
              local_1c = -local_1c;
              *(float *)(unaff_ESI + 0x488) = -fVar3;
            }
            *(float *)(unaff_ESI + 0x490) = fStack_20;
            *(float *)(unaff_ESI + 0x48c) = local_1c;
            *(undefined4 *)(unaff_ESI + 0x6d4) = *(undefined4 *)(unaff_ESI + 0x488);
            *(float *)(unaff_ESI + 0x6d8) = local_1c;
            *(undefined4 *)(unaff_ESI + 0x6dc) = *(undefined4 *)(unaff_ESI + 0x490);
          }
        }
      }
LAB_00022af6:
      cVar5 = FUN_00026d80(unaff_ESI,unaff_ESI + 0x930,unaff_ESI + 0x478,0,local_28);
      if (cVar5 == '\0') {
        *(undefined4 *)(unaff_ESI + 0x6ac) = 2;
        *(undefined4 *)(unaff_ESI + 0x490) = 0;
        *(undefined4 *)(unaff_ESI + 0x48c) = 0;
        *(undefined4 *)(unaff_ESI + 0x488) = 0;
        FUN_0004e8f0();
        *param_2 = 1;
        return 2;
      }
      FUN_000255d0(param_1,0);
      FUN_0004d970(unaff_ESI,param_1,4,1,0);
      return 1;
    }
  }
  *(undefined4 *)(unaff_ESI + 0x6ac) = 2;
  return 0;
}
