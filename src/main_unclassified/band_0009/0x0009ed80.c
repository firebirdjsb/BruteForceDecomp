/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82C920B950C07FBA7334EDF935BA9613D996D7AFAF4D33634E84AEE49EB24EDC
 * Entry: 0x0009ed80, Ghidra index: 1886, label: FUN_0009ed80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra scalar SSE low-lane opcode model; unknown high lanes not represented.
 * No assembly/ABI or behavior equivalence has been established. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003c0284;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0009ed80(int *param_1,float *param_2,float param_3,char param_4)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  byte bVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_EAX;
  int iVar10;
  int in_EDX;
  int unaff_EBX;
  int *unaff_EDI;
  float fVar11;
  float fVar12;
  undefined1 in_XMM0 [16];
  __m128 auVar13;
  float fVar14;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  fVar6 = param_2[2] - in_EAX[2];
  fVar7 = param_2[1] - in_EAX[1];
  fVar8 = *param_2 - *in_EAX;
  auVar13 = _mm_rsqrt_ss(_mm_set_ss(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6));
  fVar11 = _mm_cvtss_f32(auVar13);
  piVar1 = param_1 + in_EDX;
  do {
    if (piVar1 <= param_1) {
      return;
    }
    piVar5 = (int *)*param_1;
    if ((((piVar5 != (int *)0x0) && (bVar4 = *(byte *)(piVar5 + 0x25), (bVar4 & 0x40) != 0)) &&
        ((bVar4 & 8) == 0)) && ((bVar4 & 0x10) != 0)) {
      if (param_4 == '\0') {
        bVar4 = bVar4 & 4;
      }
      else {
        bVar4 = bVar4 & 2;
      }
      if (bVar4 != 0) {
        iVar10 = (**(code **)(*piVar5 + 0x40))();
        fStack_10 = param_2[2] - *(float *)(iVar10 + 0x2c);
        fStack_14 = param_2[1] - *(float *)(iVar10 + 0x28);
        fStack_18 = *param_2 - *(float *)(iVar10 + 0x24);
        fVar12 = fStack_18 * fStack_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10;
        if ((*(byte *)(piVar5 + 0x25) & 0x20) == 0) {
          fVar14 = _DAT_003c0284 * (float)piVar5[0x23];
        }
        else {
          fVar14 = (float)piVar5[0x23];
        }
        if (fVar12 < (fVar14 + param_3) * (fVar14 + param_3)) {
          *(int **)(unaff_EBX + 8 + *unaff_EDI * 0xc) = piVar5;
          fVar12 = SQRT(fVar12);
          if (0.0 < fVar12) {
            auVar13 = _mm_rcp_ss(_mm_set_ss(fVar12));
            fVar14 = _mm_cvtss_f32(auVar13);
            fStack_18 = fStack_18 * fVar14;
            fStack_14 = fStack_14 * fVar14;
            fStack_10 = fStack_10 * fVar14;
          }
          fVar14 = 1.0 - *(float *)(piVar5[3] + 0x4c) * (float)piVar5[0x1e];
          fVar9 = 0.0;
          if (0.0 <= fVar14) {
            fVar9 = fVar14;
          }
          fVar14 = (float)piVar5[0x3d];
          if ((float)piVar5[0x3d] <= (float)piVar5[0x3e]) {
            fVar14 = (float)piVar5[0x3e];
          }
          fVar3 = (float)piVar5[0x3c];
          if ((float)piVar5[0x3c] <= fVar14) {
            fVar3 = fVar14;
          }
          *(float *)(unaff_EBX + 4 + *unaff_EDI * 0xc) =
               fVar3 * fVar9 *
               ((fStack_18 * fVar11 * fVar8 +
                fStack_14 * fVar7 * fVar11 + fStack_10 * fVar6 * fVar11) * 0.5 + 1.5);
          fVar14 = 0.0;
          if (0.0 <= fVar12 - param_3) {
            fVar14 = fVar12 - param_3;
          }
          if ((*(byte *)(piVar5 + 0x25) & 0x20) == 0) {
            fVar12 = _DAT_003c0284 * (float)piVar5[0x23];
          }
          else {
            fVar12 = (float)piVar5[0x23];
          }
          pfVar2 = (float *)(unaff_EBX + *unaff_EDI * 0xc);
          fVar12 = 1.0 - fVar14 / fVar12;
          *pfVar2 = fVar12 * fVar12 * pfVar2[1];
          if ((0.01 < *(float *)(unaff_EBX + 4 + *unaff_EDI * 0xc)) &&
             (iVar10 = *unaff_EDI + 1, *unaff_EDI = iVar10, 0x3f < iVar10)) {
            return;
          }
        }
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}
