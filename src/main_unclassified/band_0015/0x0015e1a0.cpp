/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00DF609592DCC1D2E731DF88ED39FDBA7E757BEFBBD1F960CB05A4F99334E6B8
 * Entry: 0x0015e1a0, Ghidra index: 4543, label: FUN_0015e1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015e1a0(void)

{
  undefined1 *in_EAX;
  undefined1 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  *(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(in_EAX + 4);
  *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(in_EAX + 8);
  FUN_0010bc40();
  return;
}
