/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1DCC7198063DF1A16126373B0A481992F441F5B7F30D9D72F9102C710AC325F
 * Entry: 0x000ebe10, Ghidra index: 2912, label: FUN_000ebe10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ebe10(int param_1)

{
  int in_ECX;
  
  FUN_000eb560(param_1);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}
