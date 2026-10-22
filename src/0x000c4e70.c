/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2017FCCB50819E3F413A0CA66F601ADC3C3C279E67FCDF953C30CC98B27F91CA
 * Entry: 0x000c4e70, Ghidra index: 2418, label: FUN_000c4e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c4e70(void)

{
  int unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBX + 0x638) != unaff_EDI) {
    FUN_0008f6a0();
  }
  if (*(int *)(unaff_EBX + 0x640) != 0) {
    FUN_0008f6a0(0);
  }
  if (*(int *)(unaff_EBX + 0x630) != unaff_EDI) {
    FUN_0008f6a0();
  }
  return;
}
