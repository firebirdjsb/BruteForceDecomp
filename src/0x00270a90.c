/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9593C61FFA57CC8A107FACD3605BE7DCA4D8F69A86DFDB76467A45B35883E8D9
 * Entry: 0x00270a90, Ghidra index: 8792, label: FUN_00270a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00270a90(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_ESI;
  
  iVar1 = FUN_00270bf0();
  if (iVar1 != *(int *)(unaff_ESI + 4)) {
    if (*(uint *)(iVar1 + 0x24) < 0x10) {
      iVar2 = iVar1 + 0x10;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x10);
    }
    iVar2 = FUN_000e0b20(0,iVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar2) {
      *unaff_EBX = iVar1;
      return;
    }
  }
  *unaff_EBX = *(int *)(unaff_ESI + 4);
  return;
}
