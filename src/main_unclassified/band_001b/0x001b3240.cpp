/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C990BC360488F252D0AF2425A3E3F3C01C7AD76AD18369F84F725576E4BC563
 * Entry: 0x001b3240, Ghidra index: 5636, label: FUN_001b3240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3240(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *unaff_EDI;
    FUN_001e0dd0(puVar1 + 1);
    puVar1[5] = unaff_EDI[5];
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(unaff_EDI + 6);
    *(undefined1 *)((int)puVar1 + 0x19) = *(undefined1 *)((int)unaff_EDI + 0x19);
    *unaff_EBX = puVar1;
    return;
  }
  *unaff_EBX = 0;
  return;
}
