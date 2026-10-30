/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37B6419A19472876D9E26BCA1FDCEE124F03C7817D8EA45E1126130B93FEF7B3
 * Entry: 0x001546d0, Ghidra index: 4443, label: FUN_001546d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001546d0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBX;
  int unaff_EDI;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EDI + 4) = *unaff_EBX;
    *(undefined4 *)(unaff_EDI + 8) = unaff_EBX[1];
    *(undefined1 *)(unaff_EDI + 0xc) = *(undefined1 *)(unaff_EBX + 2);
    FUN_00154780();
    FUN_001d59e0();
    FUN_00154740();
    *(undefined4 *)(unaff_EDI + 0x5c) = 0;
    if (*(int *)(unaff_EDI + 0x10) != 0) {
      iVar1 = FUN_002ea01d(0x38);
      if (iVar1 != 0) {
        uVar2 = FUN_002241d0();
        *(undefined4 *)(unaff_EDI + 0x5c) = uVar2;
        return;
      }
      *(undefined4 *)(unaff_EDI + 0x5c) = 0;
    }
  }
  return;
}
