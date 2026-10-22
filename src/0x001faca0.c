/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA22F888C8F6D4B7DD92C8C701840CABB801305F166F959FE836B2E00612F740
 * Entry: 0x001faca0, Ghidra index: 7098, label: FUN_001faca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001faca0(void)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar2 = FUN_00222830(unaff_EBX,iVar1,*(undefined4 *)(iVar1 + 4),in_EAX);
  FUN_0021d890();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
