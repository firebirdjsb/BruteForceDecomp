/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E7A9067424184B8C0FA2AE208FCB2998563A4AF79879224A7A1F73A4580DB89
 * Entry: 0x002299b0, Ghidra index: 7674, label: FUN_002299b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
void FUN_002299b0(int param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  param_2 = *(float *)(param_1 + 0x378) - param_2;
  *(float *)(param_1 + 0x378) = param_2;
  if (param_2 <= 0.0) {
    iVar6 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x378) = 0x41000000;
    puVar1 = *(undefined4 **)(iVar6 + 0x74);
    puVar7 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puVar1;
    }
    puVar2 = *(undefined4 **)(iVar6 + 0x68);
    puVar8 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)*puVar2;
    }
    puVar3 = *(undefined4 **)(iVar6 + 0x74);
    puVar4 = *(undefined4 **)(iVar6 + 0x68);
    while ((((puVar8 != puVar4 || (puVar2 != puVar4)) || (puVar7 != puVar3)) || (puVar1 != puVar3)))
    {
      if (puVar8 == puVar2) {
        piVar9 = (int *)puVar7[3];
      }
      else {
        piVar9 = (int *)puVar8[3];
      }
      if (((((piVar9 != (int *)0x0) && (*(int *)(piVar9[3] + 4) == 3)) &&
           ((iVar6 = (**(code **)(piVar9[0x6d] + 0x9c))(), iVar6 != -1 &&
            (((&DAT_003ffd80)[iVar6 * 10] != '\0' && ((*(byte *)(piVar9 + 0x1c) & 1) == 0)))))) &&
          (cVar5 = FUN_00057360(*(undefined4 *)(*(int *)(param_1 + 8) + 0x1f8),piVar9,param_1),
          cVar5 != '\0')) && (iVar6 = (**(code **)(*piVar9 + 0xf4))(), iVar6 != 0)) {
        cVar5 = *(char *)(*(int *)(iVar6 + 0x794) + 0xd);
        if (cVar5 == '\0') {
          *(undefined4 *)(*(int *)(iVar6 + 0x794) + 0x14) = 0;
        }
        else if (cVar5 != '\0') {
          FUN_00055390();
        }
      }
      if (puVar8 == puVar2) {
        puVar7 = (undefined4 *)*puVar7;
      }
      else {
        puVar8 = (undefined4 *)*puVar8;
      }
    }
  }
  return;
}
