/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCBAE51DFBD1F9AFB57D6E889A0B48EC6DA41F1D6E9C70472FFC43DB30783A2B
 * Entry: 0x00289860, Ghidra index: 9133, label: FUN_00289860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00289860(void)

{
  char cVar1;
  undefined4 uVar2;
  char *unaff_ESI;
  
  FUN_00289520(1);
  FUN_0028a460();
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  uVar2 = FUN_00294640();
  FUN_00292c90(uVar2);
  return;
}
