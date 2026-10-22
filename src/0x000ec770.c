/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAAFCF607C9E22269950A9B237FA90348AA5C55D2D4DA94E516A35BF3C2FA46B
 * Entry: 0x000ec770, Ghidra index: 2932, label: FUN_000ec770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec770(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00059a80();
  *(undefined1 *)(in_ECX + 0x50) = *(undefined1 *)(param_1 + 0x50);
  return;
}
