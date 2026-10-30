/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 264D01A78657DA68A97DA6524A5BC426FF293EBA4B0288EB8F1E27B2D1CF85CA
 * Entry: 0x00101730, Ghidra index: 3248, label: FUN_00101730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00101730(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 4))();
  }
  return;
}
