/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D956B44D3A20CD21137334101C0CC91B48BD03EC49681EA9E9147BF440FB9C82
 * Entry: 0x00161680, Ghidra index: 4610, label: FUN_00161680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_00160220(void);
void FUN_00161680(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x128) {
    FUN_00160220();
  }
  return;
}
