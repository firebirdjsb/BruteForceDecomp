/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A40C704688BE279F0AD0E8436EE28565BA240E7D61B6095A30EA8D49933AFB9D
 * Entry: 0x00038320, Ghidra index: 368, label: FUN_00038320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00038320(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_ECX;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x18) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x18))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00039180(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 0x18;
    return;
  }
  FUN_000383a0(local_4,*(undefined4 *)(in_EAX + 8),in_ECX);
  return;
}
