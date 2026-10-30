/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B4A9C7A5DC140308AD63CE99BB5B7EFD7411EFC2E0C664A18082B721A89E99E
 * Entry: 0x0027e500, Ghidra index: 9009, label: FUN_0027e500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027e500(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0x16b4) == 0x10) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar1 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined2 *)(in_EAX + 0x16b0) = 0;
    *(undefined4 *)(in_EAX + 0x16b4) = 0;
    return;
  }
  if (7 < *(int *)(in_EAX + 0x16b4)) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(ushort *)(in_EAX + 0x16b0) = (ushort)*(byte *)(in_EAX + 0x16b1);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = *(int *)(in_EAX + 0x16b4) + -8;
  }
  return;
}
