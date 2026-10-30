/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E800B60F61C15B6E6BD5AC5601BECE67AAF4E422AFF24506F0757709F6388274
 * Entry: 0x001b3640, Ghidra index: 5642, label: FUN_001b3640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3640(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(unaff_ESI + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x30;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x30;
    }
    FUN_001bedc0(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),in_EAX - iVar2);
    FUN_0006a4c0();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(unaff_ESI + 8) - iVar2) / 0x30)) {
      FUN_001bed50(unaff_ESI,local_4,in_EAX * 0x30 + *(int *)(unaff_ESI + 4),*(int *)(unaff_ESI + 8)
                  );
    }
  }
  FUN_0006a4c0();
  return;
}
