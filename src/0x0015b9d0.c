/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 179124130DEAF4C1E9D5CF52AA84585082E2EA08D9913A2D195C4CC94977239B
 * Entry: 0x0015b9d0, Ghidra index: 4535, label: FUN_0015b9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015b9d0(void)

{
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  unaff_ESI[2] = unaff_EDI[2];
  unaff_ESI[3] = unaff_EDI[3];
  unaff_ESI[4] = unaff_EDI[4];
  *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(unaff_EDI + 8);
  FUN_0010bc40();
  FUN_0010bc40();
  return;
}
