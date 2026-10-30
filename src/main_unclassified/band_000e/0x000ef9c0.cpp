/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FFF0F311F50DE1CA705760C5E37C39D0FA53FE2FBE38E0F7B74C064A87B2DBA
 * Entry: 0x000ef9c0, Ghidra index: 2979, label: FUN_000ef9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ef9c0(void)

{
  uint uVar1;
  int in_EAX;
  
  uVar1 = *(uint *)(in_EAX + 0x21c);
  return ((uVar1 & 4) >> 2) + ((uVar1 & 2) >> 1) + 1 + (uVar1 & 1);
}
