/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 518CF522DF8469B5968C7F0BF622E4EB8AE22AA4DF3B5060AD9E95C2C8C53DCF
 * Entry: 0x00226360, Ghidra index: 7643, label: FUN_00226360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00226360(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x1ec) != in_EAX) {
    FUN_0008f6a0();
  }
  uVar1 = unaff_EBX[2];
  uVar2 = unaff_EBX[1];
  *(undefined4 *)(unaff_EDI + 0x1f0) = *unaff_EBX;
  *(undefined4 *)(unaff_EDI + 500) = uVar2;
  *(undefined4 *)(unaff_EDI + 0x1f8) = uVar1;
  return;
}
