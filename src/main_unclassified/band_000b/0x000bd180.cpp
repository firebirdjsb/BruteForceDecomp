/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 121F3EF1DFC97F0318603B5434C5F8F6DCDD0397F310690837F403B1867335E2
 * Entry: 0x000bd180, Ghidra index: 2306, label: FUN_000bd180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_000bf040(void);

void FUN_000bd180(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  ushort in_AX;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  iVar3 = param_1;
  uVar7 = (uint)in_AX;
  puVar1 = (undefined4 *)(param_1 + 0x30);
  cVar4 = FUN_000bf040(puVar1);
  if (cVar4 != '\0') {
    param_1 = *(int *)(*(int *)(param_1 + 0xe0) + 0x6c);
    if (*(int *)(param_1 + 0x10) != 0) {
      param_1 = *(int *)(param_1 + 8);
    }
    if (0 < (short)in_AX) {
      piVar6 = (int *)(param_2 + 4);
      do {
        iVar2 = *piVar6;
        if (iVar2 != 0) {
          iVar5 = *(int *)(iVar2 + 0x6c);
          if (*(int *)(iVar5 + 0x10) != 0) {
            iVar5 = *(int *)(iVar5 + 8);
          }
          if (iVar5 != param_1) {
            (**(code **)*puVar1)(iVar3,iVar2);
          }
        }
        piVar6 = piVar6 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}
