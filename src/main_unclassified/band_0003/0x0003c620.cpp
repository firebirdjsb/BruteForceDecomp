/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0B0925AC0EAA5F95150BE4B4AEFE930BA0172E0942C8AC366885116FCBB63AC
 * Entry: 0x0003c620, Ghidra index: 432, label: FUN_0003c620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003c620(undefined1 param_1)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = in_EAX;
  unaff_EDI[1] = in_ECX;
  unaff_EDI[2] = in_EDX;
  FUN_00039680();
  *(undefined1 *)(unaff_EDI + 0x2a) = param_1;
  *(undefined1 *)((int)unaff_EDI + 0xa9) = 0;
  return;
}
