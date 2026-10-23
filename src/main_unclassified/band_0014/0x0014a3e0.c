/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F540BCF033CDFD6D8D59C3C11AC29DD58C70D969487F7483F9BDD20A891066D
 * Entry: 0x0014a3e0, Ghidra index: 4288, label: FUN_0014a3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014a3e0(undefined4 param_1)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x1bc) & 2) != 0) {
    FUN_0014a170();
  }
  FUN_00158140(param_1);
  return;
}
