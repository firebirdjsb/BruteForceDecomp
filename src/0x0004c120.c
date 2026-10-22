/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC29381BEE050B050C4766AF2AAEA884EE28FA6976EBD4712BDC099E4FE8EE00
 * Entry: 0x0004c120, Ghidra index: 631, label: FUN_0004c120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra indicates scalar RSQRTSS; use the x86 low-lane approximation, not 1/x or 1/sqrt(x).
 * Upper XMM lanes are not reconstructed; original opcode/ABI remain UNVERIFIED. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0004c120(float *param_1,int param_2,int param_3,int *param_4,float param_5,float *param_6,
                 float param_7,int param_8,int param_9)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined1 in_XMM0 [16];
  __m128 auVar10;
  
  if (*param_4 == 0) {
    piVar1 = *(int **)(param_9 + 8);
    piVar7 = *(int **)(param_9 + 4);
    if (piVar7 != piVar1) {
      do {
        if (*piVar7 == param_2) break;
        piVar7 = piVar7 + 1;
      } while (piVar7 != piVar1);
      if (piVar7 != piVar1) {
        return;
      }
    }
    fVar4 = *(float *)(param_2 + 0x1c) - param_1[2];
    fVar5 = *(float *)(param_2 + 0x18) - param_1[1];
    fVar6 = *(float *)(param_2 + 0x14) - *param_1;
    fVar9 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar9 <= param_5) {
      if (param_8 != 0) {
        FUN_001611d0();
        puVar8 = (undefined4 *)0x0;
        if (*(undefined4 **)(param_2 + 0x30) != (undefined4 *)0x0) {
          puVar8 = (undefined4 *)**(undefined4 **)(param_2 + 0x30);
        }
        puVar2 = *(undefined4 **)(param_2 + 0x30);
        for (; puVar8 != puVar2; puVar8 = (undefined4 *)*puVar8) {
          iVar3 = puVar8[3];
          if (((iVar3 != 0) && ((*(byte *)(iVar3 + 0x28) & 4) != 0)) && (iVar3 != param_3)) {
            FUN_0004c120(param_1,iVar3,param_2,param_4,param_5,param_6,param_7,param_8 + -1,param_9)
            ;
          }
        }
      }
    }
    else {
      auVar10 = _mm_rsqrt_ss(_mm_set_ss(fVar9));
      fVar9 = _mm_cvtss_f32(auVar10);
      if (param_7 < fVar9 * fVar6 * *param_6 +
                    fVar9 * fVar4 * param_6[2] + fVar9 * fVar5 * param_6[1]) {
        *param_4 = param_2;
        return;
      }
    }
  }
  return;
}
