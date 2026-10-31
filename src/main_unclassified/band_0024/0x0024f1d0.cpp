/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F11985CCCF5A5EA0CC2B573077376AB1B72720925499E895A730E0CE7A2C8ED
 * Entry: 0x0024f1d0, Ghidra index: 8313, label: FUN_0024f1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Draft-only source-matched forward declarations; original Xbox ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
void FUN_0024f1d0(undefined4 param_1)

{
  undefined4 in_EAX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_0001f4f0(in_EAX,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x34) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  FUN_0001f4f0(param_1,0,0xffffffff);
  return;
}
