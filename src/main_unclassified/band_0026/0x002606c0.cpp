/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20C1305AC97EC3B68DC8F8291FF2813B5229A59133D01F83F541992F35F644AA
 * Entry: 0x002606c0, Ghidra index: 8621, label: FUN_002606c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002606c0(void)

{
  byte bVar1;
  int in_EDX;
  
  bVar1 = 0;
  if (in_EDX != 1) {
    do {
      bVar1 = bVar1 + 1;
    } while (1 << (bVar1 & 0x1f) != in_EDX);
  }
  return;
}
