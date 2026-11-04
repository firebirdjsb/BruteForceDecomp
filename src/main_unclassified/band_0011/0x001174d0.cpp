/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE829C0CF0B201123B2CA124078764F03C53A1ED3947A2E211A29F6DA23E1CC5
 * Entry: 0x001174d0, Ghidra index: 3597, label: FUN_001174d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_0023d3e0(void);
void FUN_001174d0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x248) != 0) {
    FUN_0023d3e0();
    *(undefined4 *)(unaff_ESI + 0x248) = 0;
  }
  *(undefined4 *)(unaff_ESI + 0x240) = 0;
  return;
}
