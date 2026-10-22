/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F0C7AA122E681B122A603DB548284EBE2934C59D8569B944ABA407DE1A6D821
 * Entry: 0x001e4830, Ghidra index: 6783, label: FUN_001e4830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x001e4895) */

void FUN_001e4830(void)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  int unaff_ESI;
  char *unaff_EDI;
  
  FUN_0001f4f0(in_EAX,0,0xffffffff);
  do {
    cVar1 = *unaff_EDI;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  uVar2 = FUN_00087af0();
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_0001f4f0(uVar2,0,0xffffffff);
  return;
}
