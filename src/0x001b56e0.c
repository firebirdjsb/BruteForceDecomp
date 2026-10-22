/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41C7D7BA822DDCED3518D729AC6B49613FD4A7845E378F336F01D3AD10D03027
 * Entry: 0x001b56e0, Ghidra index: 5673, label: FUN_001b56e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b56e0(void)

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
    uVar1 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x6c;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x6c;
    }
    FUN_001c7c10(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),in_EAX - iVar2);
    FUN_00086ed0();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(unaff_ESI + 8) - iVar2) / 0x6c)) {
      FUN_001c7bb0(unaff_ESI,local_4,in_EAX * 0x6c + *(int *)(unaff_ESI + 4),*(int *)(unaff_ESI + 8)
                  );
    }
  }
  FUN_00086ed0();
  return;
}
