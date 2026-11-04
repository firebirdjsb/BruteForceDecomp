/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B71E30B63AC2B69789512B0F7F72CE40B38650DD7ED6A906E86C9B6A8A6B5541
 * Entry: 0x000e1590, Ghidra index: 2772, label: FUN_000e1590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original x86 guest ABI remains ABI_UNVERIFIED. */
extern void FUN_000e3600(byte param_1);
void FUN_000e1590(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0xac) {
    FUN_000e3600(0);
  }
  return;
}
