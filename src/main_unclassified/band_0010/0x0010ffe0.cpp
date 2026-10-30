/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB235F3B286A25D5CB17A99D97258959AD9CF90A4872A763F2A9C4A386B20F77
 * Entry: 0x0010ffe0, Ghidra index: 3549, label: FUN_0010ffe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010ffe0(void)

{
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x224) & 2) == 0) {
    *(byte *)(in_EAX + 0x224) = *(byte *)(in_EAX + 0x224) & 0xfb;
  }
  *(byte *)(in_EAX + 0x224) = *(byte *)(in_EAX + 0x224) | 2;
  return;
}
