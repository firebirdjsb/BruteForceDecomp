/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8210CB8F690C06B9E3D6F87E3957FFC61F249842707D2A19CDEE259D086C6F26
 * Entry: 0x001dd1a0, Ghidra index: 6616, label: FUN_001dd1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd1a0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    puStack00000004 = in_EAX + 1;
    FUN_001cca00();
    return;
  }
  return;
}
