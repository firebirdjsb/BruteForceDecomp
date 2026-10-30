/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 818FB066CAA6B8F36742A34DF55B591E057F1DF89B0D2210853102A4E1FB773A
 * Entry: 0x002e7770, Ghidra index: 10516, label: FUN_002e7770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e7770(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xc) != -1) && (*(int *)(in_ECX + 0x10) != -1)) {
    return 1;
  }
  return 0;
}
