/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8FDACFA6F32010329F2E68D4E29280E9C9526BEBF28D0F3BF9AE16070928E88
 * Entry: 0x0003be10, Ghidra index: 422, label: FUN_0003be10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003be10(void)

{
  uint uVar1;
  int iVar2;
  int in_EAX;
  int unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  if (unaff_EDI != in_EAX) {
    if (*(uint *)(in_EAX + 0x10) == 0) {
      FUN_0001bd30();
      return;
    }
    uVar1 = *(uint *)(unaff_EDI + 0x10);
    iVar2 = *(int *)(in_EAX + 0xc);
    if (*(uint *)(in_EAX + 0x10) <= uVar1) {
      FUN_0003c650(iVar2);
      FUN_0003c120(&local_8,local_8,local_4,*(int *)(unaff_EDI + 0x10) + *(int *)(unaff_EDI + 0xc),
                   unaff_EDI);
      return;
    }
    local_8 = iVar2;
    FUN_0003c650(iVar2);
    FUN_0003c680(unaff_EDI,*(int *)(unaff_EDI + 0x10) + *(int *)(unaff_EDI + 0xc),unaff_EDI,
                 uVar1 + iVar2,in_EAX,*(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0xc),in_EAX);
  }
  return;
}
