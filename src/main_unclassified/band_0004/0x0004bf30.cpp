/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06DBA39347D55C92A7E793F1EE7F8037A5805522CB403919F27E22725E052962
 * Entry: 0x0004bf30, Ghidra index: 629, label: FUN_0004bf30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004bf30(float *param_1,int param_2,int param_3,int *param_4,float *param_5,int param_6,
                 int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  
  if ((param_7 == 0) || (*(int *)(param_2 + 0x24) < 0)) {
    fVar3 = *(float *)(param_2 + 0x14) - *param_1;
    fVar5 = *(float *)(param_2 + 0x18) - param_1[1];
    fVar4 = *(float *)(param_2 + 0x1c) - param_1[2];
    fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar3 < *param_5) {
      *param_5 = fVar3;
      *param_4 = param_2;
    }
    if (param_6 != 0) {
      if (param_7 != 0) {
        FUN_00058e10(param_2);
        FUN_00064490();
      }
      puVar6 = (undefined4 *)0x0;
      if (*(undefined4 **)(param_2 + 0x30) != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)**(undefined4 **)(param_2 + 0x30);
      }
      puVar1 = *(undefined4 **)(param_2 + 0x30);
      for (; puVar6 != puVar1; puVar6 = (undefined4 *)*puVar6) {
        iVar2 = puVar6[3];
        if (((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 4) != 0)) && (iVar2 != param_3)) {
          FUN_0004bf30(param_1,iVar2,param_2,param_4,param_5,param_6 + -1,param_7);
        }
      }
    }
  }
  return;
}
