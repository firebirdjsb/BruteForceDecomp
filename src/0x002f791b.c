/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BED1917A7A9D46812E1463DA79CE3B76126E3C2F2BE1E20C65B7524BA836E54D
 * Entry: 0x002f791b, Ghidra index: 10934, label: XGetSectionSize
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XGetSectionSize(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}
