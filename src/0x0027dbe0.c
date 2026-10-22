/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 748B39E6CC7C8549DB1B8AF352CE4C162A462CE2CDA4E6FD74F78AED44A1E49B
 * Entry: 0x0027dbe0, Ghidra index: 9004, label: FUN_0027dbe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027dbe0(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x16b4);
  if (0xd < iVar1) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(in_ECX << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar1 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    iVar1 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar1 + -0xd;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)in_ECX >> (0x10U - (char)iVar1 & 0x1f);
    FUN_0027e5f0(1);
    return;
  }
  *(int *)(in_EAX + 0x16b4) = iVar1 + 3;
  *(ushort *)(in_EAX + 0x16b0) =
       *(ushort *)(in_EAX + 0x16b0) | (ushort)(in_ECX << ((byte)iVar1 & 0x1f));
  FUN_0027e5f0(1);
  return;
}
