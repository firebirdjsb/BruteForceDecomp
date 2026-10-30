/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DDE96C481C1BB5534B83B891E5CF27F82E0247FD14A1BAEF3754EE880C49D38
 * Entry: 0x001a7950, Ghidra index: 5411, label: FUN_001a7950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7950(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 4;
    if (iVar1 != 0) goto LAB_001a7974;
  }
  FUN_001ac100();
LAB_001a7974:
  FUN_001b29c0();
  return iVar1 * 0x10 + *(int *)(unaff_EDI + 4);
}
