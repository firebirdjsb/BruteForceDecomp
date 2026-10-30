/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC506FB197C3CC87329E0EE686D67BF834A5F43BA0D1247E265E7749964551E5
 * Entry: 0x001faef0, Ghidra index: 7104, label: FUN_001faef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001faef0(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = in_EAX;
  unaff_EDI[1] = in_ECX;
  unaff_EDI[3] = 0;
  if (*(int *)(unaff_EBX + 4) != 0) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 4));
  }
  unaff_EDI[4] = *(undefined4 *)(unaff_EBX + 8);
  return;
}
