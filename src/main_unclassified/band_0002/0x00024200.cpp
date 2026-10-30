/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9848DC456151E480DD2B9487D7720841928A0EE605F29E4F5D63C2094C36F2A0
 * Entry: 0x00024200, Ghidra index: 252, label: FUN_00024200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra indicates scalar RSQRTSS; use the x86 low-lane approximation, not 1/x or 1/sqrt(x).
 * Upper XMM lanes are not reconstructed; original opcode/ABI remain UNVERIFIED. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_00112800(void);
extern void FUN_002316a0(int param_1);
extern void FUN_00232200(undefined4 param_1);
extern void FUN_000124f0(float param_1, int32_t in_ECX);
extern void FUN_0004dff0(void);
extern void FUN_0001c5d0(void);

extern uint32_t DAT_00469b58;
void FUN_00024200(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  __m128 in_XMM0;
  undefined4 uStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar7 != 0x120785ef) {
    iVar8 = FUN_000120f0();
    piVar7 = *(int **)(*(int *)(param_1 + 0x358) + 4);
    piVar1 = (int *)*piVar7;
    while (piVar1 != piVar7) {
      piVar2 = (int *)piVar1[4];
      if (((piVar2 != (int *)0x0) && (iVar9 = (**(code **)(*piVar2 + 0xf4))(), iVar9 != 0)) &&
         (piVar1[0x1c] == 1)) {
        if ((*(int *)(iVar9 + 0x44) == 0x13) ||
           ((*(int *)(iVar9 + 0x44) == 0x78 && (*(int *)(iVar9 + 0x798) == 0)))) {
          if ((*(byte *)(iVar9 + 300) & 1) != 0) {
            if (1.0 < *(float *)(iVar9 + 0x128)) {
              *(undefined4 *)(iVar9 + 0x130) = 0;
              *(undefined4 *)(iVar9 + 0x128) = 0;
              *(byte *)(iVar9 + 300) = *(byte *)(iVar9 + 300) & 0xfa | 2;
            }
            if (((*(byte *)(iVar9 + 300) & 1) != 0) &&
               (*(float *)(iVar9 + 0x128) < 0.0 == (*(float *)(iVar9 + 0x128) == 0.0)))
            goto LAB_0002450e;
          }
          uStack_84 = 0x3f800000;
        }
        else {
          if (((*(byte *)(iVar9 + 300) & 1) != 0) &&
             (*(float *)(iVar9 + 0x128) < 0.0 == (*(float *)(iVar9 + 0x128) == 0.0)))
          goto LAB_0002450e;
          uStack_84 = 0x40800000;
        }
        cVar6 = FUN_00112800();
        if ((cVar6 == '\0') || (*(int *)(iVar8 + 0x7a8) == 0)) {
          FUN_002316a0(0);
        }
        else {
          FUN_00232200(0);
        }
        iVar10 = (**(code **)(*piVar2 + 0x40))();
        fVar3 = *(float *)(iVar10 + 0x2c) - fStack_5c;
        fVar4 = *(float *)(iVar10 + 0x28) - fStack_60;
        fVar5 = *(float *)(iVar10 + 0x24) - fStack_64;
        in_XMM0 = _mm_rsqrt_ss(_mm_set_ss(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4));
        fVar11 = _mm_cvtss_f32(in_XMM0);
        if (0.985 <= fStack_78 * fVar11 * fVar5 +
                     fStack_74 * fVar4 * fVar11 + fStack_70 * fVar3 * fVar11) {
          fVar11 = fStack_78 * fVar5 + fStack_70 * fVar3 + fStack_74 * fVar4;
          fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
          if (fVar3 <= 2500.0) {
            if (fVar3 <= 10000.0) {
              fVar4 = 2.8;
              if (14400.0 < fVar3) {
                fVar4 = 13.0;
              }
            }
            else {
              fVar4 = 10.0;
            }
          }
          else {
            fVar4 = 5.0;
          }
          if (fVar3 - fVar11 * fVar11 < fVar4 * fVar4) {
            FUN_000124f0(uStack_84);
            FUN_00012320(0x18);
            FUN_0004dff0(iVar9);
            FUN_00012440();
          }
        }
      }
LAB_0002450e:
      FUN_0001c5d0();
    }
  }
  return;
}
