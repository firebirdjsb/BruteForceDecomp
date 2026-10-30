/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B067744640CDB6FAFA3265AEF0FC2A79FE0BEA4D82BC99772F86FB91D512F29E
 * Entry: 0x002326e0, Ghidra index: 7767, label: FUN_002326e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_002326e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 0x1b0);
  if (iVar1 == 0) {
    if (*(int *)(unaff_EBX + 0x184) == 0) {
      return;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(unaff_EBX + 0x184) + 0x1c) + 0x24) + 0x20);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if ((iVar1 < 0) || (0x18 < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(DAT_00469948 + 0x250 + iVar1 * 4);
    }
  }
  else {
    if (*(int *)(iVar1 + 8) == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        return;
      }
      iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0);
      if (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 3) {
        return;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 8) == 0) {
      iVar1 = FUN_00126850();
    }
    else {
      iVar1 = FUN_00126850();
    }
  }
  if (iVar1 != 0) {
    if (*(int *)(unaff_EBX + 0x204) != 0) {
      if (*(int *)(unaff_EBX + 0x20c) != 0) {
        FUN_001e8c80(*(int *)(unaff_EBX + 0x204));
      }
      *(undefined4 *)(unaff_EBX + 0x20c) = 0;
      *(undefined4 *)(unaff_EBX + 0x204) = 0;
    }
    iVar2 = FUN_001e8e70(iVar1 + 0x10,param_1);
    *(int *)(unaff_EBX + 0x204) = iVar2;
    if (iVar2 != 0) {
      *(int *)(unaff_EBX + 0x20c) = iVar1;
    }
  }
  return;
}
