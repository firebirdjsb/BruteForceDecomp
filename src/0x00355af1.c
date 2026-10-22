/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 139DFDA09D831367A794651B2DAF37B0F3AD60DE16179AE1C1F80B85789A9ABB
 * Entry: 0x00355af1, Ghidra index: 13126, label: FUN_00355af1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355af1(void)

{
  uint *in_ECX;
  
  if (((char)(*in_ECX >> 8) < '\0') && ((*in_ECX & 0x40000) == 0)) {
    FUN_00352ebc(0x40000);
    KeRemoveQueueDpc(in_ECX + 0x9e);
  }
  FUN_0034d518();
  return;
}
