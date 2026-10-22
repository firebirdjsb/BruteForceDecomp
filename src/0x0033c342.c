/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE115897AC4433A58B250AB5C5CBA75588CB972A743479A357DCB69624232E54
 * Entry: 0x0033c342, Ghidra index: 12548, label: FUN_0033c342
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033c342(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  uint local_28;
  uint local_20;
  int local_18 [5];
  
  puVar1 = param_1;
  FUN_0033bb7c(in_ECX + 0x824);
  iVar2 = in_ECX + 0x24;
  if ((uint)(*(int *)(in_ECX + 0x834) - *(int *)(in_ECX + 0x82c)) < 4) {
    local_20 = local_20 - local_28;
    local_28 = 0;
  }
  else if (param_2 == 0) {
    FUN_0033bc50((uint)param_1[3] >> 9);
    iVar2 = param_1[4];
  }
  else {
    FUN_0033bc25((uint)param_1[3] >> 9);
  }
  if (local_28 < local_20) {
    param_1 = (undefined4 *)(local_28 * 0x200 + iVar2);
    param_2 = local_28;
    do {
      XcHMAC(XboxHDKey_exref,0x10,param_1,500,0,0,local_18);
      iVar2 = 3;
      bVar5 = true;
      piVar3 = local_18;
      piVar4 = (int *)((int)param_1 + 500);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (!bVar5) {
        *puVar1 = 0;
        return 0x80004005;
      }
      param_2 = param_2 + 1;
      param_1 = (undefined4 *)((int)param_1 + 0x200);
    } while (param_2 < local_20);
  }
  return 0;
}
