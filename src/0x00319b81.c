/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31529940EB4BAF3932FCBC0C8024942BBB78650C59D9144E33F63856D8B6D9C5
 * Entry: 0x00319b81, Ghidra index: 12245, label: FUN_00319b81
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00319b81(float param_1)

{
  undefined4 uVar1;
  int extraout_ECX;
  
  uVar1 = FUN_00319a67(param_1 * 24000.0);
  *(undefined4 *)(extraout_ECX + 0x11c) = uVar1;
  return;
}
