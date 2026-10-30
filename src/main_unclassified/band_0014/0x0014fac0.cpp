/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EE999D9E6BBC8399780CC227FF4EFD8AA21F7916840268EA0450059395D4B1F
 * Entry: 0x0014fac0, Ghidra index: 4399, label: FUN_0014fac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014fac0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    *(undefined4 *)(iVar3 + param_3) = 0;
    if (((*(float *)(iVar3 + param_5) != 0.0) &&
        (*(undefined4 *)(iVar3 + param_3) =
              *(undefined4 *)
               (param_1 + -0x10 + (*(int *)(iVar3 + param_4) + *(int *)(param_2 + 0x5b0) * 6) * 4),
        *(int *)(iVar3 + param_3) != 0)) && (iVar2 = 0, 0 < iVar3)) {
      do {
        iVar1 = *(int *)(param_3 + iVar2 * 4);
        if ((iVar1 != 0) && (*(int *)(iVar3 + param_3) == iVar1)) {
          *(float *)(param_5 + iVar2 * 4) =
               *(float *)(iVar3 + param_5) + *(float *)(param_5 + iVar2 * 4);
          fVar5 = *(float *)(param_5 + iVar2 * 4);
          if (1.0 <= fVar5) {
            fVar5 = 1.0;
          }
          *(float *)(param_5 + iVar2 * 4) = fVar5;
          *(undefined4 *)(iVar3 + param_5) = 0;
          *(undefined4 *)(iVar3 + param_3) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
    }
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0xc);
  return;
}
