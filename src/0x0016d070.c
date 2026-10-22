/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72FB562C9D90DFCC008E5B0A391395FD2A244BB6BC231E2621A8EC6860D21FA3
 * Entry: 0x0016d070, Ghidra index: 4788, label: FUN_0016d070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016d070(void)

{
  int iVar1;
  uint unaff_EBX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  if (unaff_EBX != 0) {
    if (0x15555555 < unaff_EBX) {
      FUN_00038940();
      FUN_0016d310(unaff_ESI);
      return;
    }
    iVar1 = FUN_002ea01d(unaff_EBX * 0xc);
    *(uint *)(unaff_ESI + 0xc) = unaff_EBX * 0xc + iVar1;
    *(int *)(unaff_ESI + 4) = iVar1;
    *(int *)(unaff_ESI + 8) = iVar1;
    FUN_0016d310(unaff_ESI);
  }
  return;
}
