/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFD0283E5F200F5170F737A0AFD3C2DA056D0939D4D4ED1553A985CC2B4BCA10
 * Entry: 0x00170f50, Ghidra index: 4842, label: FUN_00170f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00170f50(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_ECX;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 100) < (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 100))
     ) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00171570(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 100;
    return;
  }
  FUN_00171000(local_4,*(undefined4 *)(in_EAX + 8),in_ECX);
  return;
}
