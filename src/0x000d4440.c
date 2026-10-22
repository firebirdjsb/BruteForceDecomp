/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FB24E3950646F3448B74B45218407C19B2A157F770CFE17CBD0D93546BB5955
 * Entry: 0x000d4440, Ghidra index: 2648, label: FUN_000d4440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000d4440(void)

{
  int in_EAX;
  
  if (0.0 < *(float *)(in_EAX + 0x7dc)) {
    return 1;
  }
  return 0;
}
