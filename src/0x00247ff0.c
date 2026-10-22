/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF5F046AEB69A6B44377A38DAAFB73D990BFDF73E0C9D7DC28FEC6D2F80BD857
 * Entry: 0x00247ff0, Ghidra index: 8111, label: FUN_00247ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00247ff0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  unaff_ESI[2] = unaff_EDI[2];
  unaff_ESI[3] = unaff_EDI[3];
  unaff_ESI[4] = unaff_EDI[4];
  unaff_ESI[0xb] = 0xf;
  unaff_ESI[10] = 0;
  *(undefined1 *)(unaff_ESI + 6) = 0;
  FUN_0001f4f0(unaff_EDI + 5,0,0xffffffff);
  unaff_ESI[0xc] = unaff_EDI[0xc];
  unaff_ESI[0xd] = unaff_EDI[0xd];
  return;
}
