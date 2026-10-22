/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF96CD9C00EB12F1AC2DFD13B8B7FA3359327A1DD9836F81879F156439638FC0
 * Entry: 0x0001f4d0, Ghidra index: 143, label: FUN_0001f4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0001f4d0(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x18)) {
    return *(int *)(in_ECX + 4);
  }
  return in_ECX + 4;
}
