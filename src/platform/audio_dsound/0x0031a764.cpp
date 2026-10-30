/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B07137ABEE15951E85F6A58105884AF76F6BBDE402BC4840749EBB7831F8886
 * Entry: 0x0031a764, Ghidra index: 12263, label: FUN_0031a764
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031a764(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_8;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = param_1 + 0x24;
    RtlEnterCriticalSection(iVar1);
    piVar2 = (int *)(param_1 + 0x1c);
    param_1 = 0;
    if (*piVar2 != 0) {
      iVar6 = 0;
      do {
        iVar5 = *(int *)(iVar4 + 0x40) + iVar6;
        if ((*(int *)(iVar5 + 0x2c) == -0x7ffffff6) &&
           (iVar5 = XAPILIB__GetOverlappedResult(*(undefined4 *)(iVar4 + 0xc),iVar5,&local_8,0),
           iVar5 != 0)) {
          *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x2c + iVar6) = 0;
          puVar3 = *(undefined4 **)(*(int *)(iVar4 + 0x40) + 0x1c + iVar6);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = local_8;
          }
          iVar5 = *(int *)(iVar4 + 0x40) + iVar6;
          puVar3 = *(undefined4 **)(iVar5 + 0x20);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)(iVar5 + 0x2c);
          }
          iVar5 = *(int *)(*(int *)(iVar4 + 0x40) + 0x24 + iVar6);
          if (iVar5 != 0) {
            XAPILIB__SetEvent(iVar5);
          }
        }
        param_1 = param_1 + 1;
        iVar6 = iVar6 + 0x30;
      } while (param_1 < *(uint *)(iVar4 + 0x1c));
    }
    RtlLeaveCriticalSection(iVar1);
  }
  return;
}
