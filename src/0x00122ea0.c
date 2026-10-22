/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBC3BCE1978FDE2E5F29AC4BECBCBADD3D231B664B73271ADF75D088628EEBE9
 * Entry: 0x00122ea0, Ghidra index: 3667, label: FUN_00122ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00122ea0(float param_1)

{
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x748) & 4) != 0) {
    return (float10)param_1 * (float10)18.0 + (float10)12.0;
  }
  return (float10)param_1 * (float10)7.0 + (float10)16.0;
}
