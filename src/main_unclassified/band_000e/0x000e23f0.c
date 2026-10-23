/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F353D73289BE11AB95EF73AB8A8C73FE918384EFFBD79A6BFDDBF0AF38C48EE6
 * Entry: 0x000e23f0, Ghidra index: 2792, label: FUN_000e23f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e23f0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *in_EAX;
  
  iVar2 = *in_EAX;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x3c);
    *(int *)(iVar2 + 0x3c) = iVar3 + 1;
    piVar1 = in_EAX + in_EAX[0x201] + 1;
    while (in_EAX = in_EAX + 1, in_EAX != piVar1) {
      for (puVar4 = *(undefined4 **)(*in_EAX + 0x1c); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        iVar5 = *(int *)((uint)*(ushort *)(puVar4 + 2) * 0x10 + 0xc + *(int *)(iVar2 + 0x14));
        if ((iVar5 != 0) &&
           (iVar6 = *(int *)(iVar5 + 0x18), *(int *)(iVar5 + 0x18) = iVar3, iVar6 != iVar3)) {
          FUN_000e7850(param_1,param_2);
        }
      }
    }
    if (param_3 != '\0') {
      for (puVar4 = *(undefined4 **)(iVar2 + 0x2c); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        iVar5 = *(int *)((uint)*(ushort *)(puVar4 + 2) * 0x10 + 0xc + *(int *)(iVar2 + 0x14));
        if ((iVar5 != 0) &&
           (iVar6 = *(int *)(iVar5 + 0x18), *(int *)(iVar5 + 0x18) = iVar3, iVar6 != iVar3)) {
          FUN_000e7850(param_1,param_2);
        }
      }
    }
  }
  return;
}
