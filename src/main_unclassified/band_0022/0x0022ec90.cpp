/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE092A50475B1E9283CC2F7ED4900735F3DC3878067A836BCE47175CAC3D744B
 * Entry: 0x0022ec90, Ghidra index: 7727, label: FUN_0022ec90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022ec90(float param_1)

{
  int in_ECX;
  
  if (0.0 < *(float *)(in_ECX + 0x218)) {
    *(float *)(in_ECX + 0x218) = *(float *)(in_ECX + 0x218) - param_1;
  }
  if (0.0 < *(float *)(in_ECX + 0x21c)) {
    *(float *)(in_ECX + 0x21c) = *(float *)(in_ECX + 0x21c) - param_1;
  }
  return;
}
