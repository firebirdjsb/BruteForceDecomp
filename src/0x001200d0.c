/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A58D2E89A4C929BDA49576277EB429FB1A2FCE9C303F7D8DECFE9E4D84E18514
 * Entry: 0x001200d0, Ghidra index: 3641, label: FUN_001200d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_001200d0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_EBX;
  int unaff_EDI;
  
  if (*(int **)(unaff_EDI + 0x64c) != unaff_EBX) {
    FUN_0008f6a0();
  }
  if (unaff_EBX != (int *)0x0) {
    *(undefined4 *)(unaff_EDI + 0x65c) = 0;
    *(undefined4 *)(unaff_EDI + 0x658) = 0;
    *(undefined4 *)(unaff_EDI + 0x654) = 0;
    if (*(int *)(unaff_EBX[3] + 4) == 3) {
      iVar6 = (**(code **)(*unaff_EBX + 0x40))();
      iVar5 = unaff_EBX[0xfa];
      fVar1 = *(float *)(iVar5 + 0x40);
      fVar2 = *(float *)(iVar6 + 0x2c);
      fVar3 = *(float *)(iVar5 + 0x3c);
      fVar4 = *(float *)(iVar6 + 0x28);
      *(float *)(unaff_EDI + 0x654) = *(float *)(iVar5 + 0x38) - *(float *)(iVar6 + 0x24);
      *(float *)(unaff_EDI + 0x658) = fVar3 - fVar4;
      *(float *)(unaff_EDI + 0x65c) = fVar1 - fVar2;
    }
    if (*param_1 != DAT_0046d064) {
      *(int *)(unaff_EDI + 0x650) = *param_1;
    }
    *(undefined4 *)(unaff_EDI + 0x660) = 0xffffffff;
    if (*param_2 != DAT_0046d064) {
      uVar7 = FUN_00235d50(param_2);
      *(undefined4 *)(unaff_EDI + 0x660) = uVar7;
    }
  }
  return;
}
