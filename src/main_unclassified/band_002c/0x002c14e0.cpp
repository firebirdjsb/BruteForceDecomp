/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A06B7B9AFE1DDAE90312F564A3980620C06598A3AE9C20A9DC1B669AD0CB35B1
 * Entry: 0x002c14e0, Ghidra index: 10028, label: FUN_002c14e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c14e0(int param_1)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  if (param_1 != (*(uint *)(iVar1 + 0x14) >> 8 & 3) * 0x1c + 0x18 + iVar1) {
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) ^ 0x100;
  }
  return;
}
