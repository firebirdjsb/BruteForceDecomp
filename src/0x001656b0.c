/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E5C54A046FD369D3EF743594383D2F6360EAA791FCA698056B9A72C1246AF67
 * Entry: 0x001656b0, Ghidra index: 4699, label: FUN_001656b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001656b0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *in_EAX = *unaff_ESI;
  in_EAX[1] = unaff_ESI[1];
  in_EAX[2] = unaff_ESI[2];
  in_EAX[3] = unaff_ESI[3];
  in_EAX[4] = unaff_ESI[4];
  FUN_00164ed0();
  return;
}
