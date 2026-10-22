/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D17A6702FD1F53C56043E4AE8896DF7B77E18591A98624BB9D478BD1CFB5A0B3
 * Entry: 0x00101750, Ghidra index: 3249, label: FUN_00101750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00101750(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 4))();
  }
  return;
}
