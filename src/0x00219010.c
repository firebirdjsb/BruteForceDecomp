/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F37045FD74546E72A7894141368CA0696E7A312F00CDC2B45B1F594D169A35E
 * Entry: 0x00219010, Ghidra index: 7490, label: FUN_00219010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00219010(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    FUN_00218b00(in_EAX + 2,in_ECX + 2);
  }
  return;
}
