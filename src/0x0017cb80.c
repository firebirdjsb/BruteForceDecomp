/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03CFA3A73BCEC908F96012AA740BD2AD451FC3D94846B7B8E295644C073F26CB
 * Entry: 0x0017cb80, Ghidra index: 5058, label: FUN_0017cb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0017cb80(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_0017d8a0();
  return unaff_EDI + unaff_ESI * 0x18;
}
