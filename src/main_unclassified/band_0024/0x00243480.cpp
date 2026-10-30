/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A6737C909D5E46F5855AEA993AD77673399EDCE4008B5AB133E3C9EE198DA23
 * Entry: 0x00243480, Ghidra index: 8050, label: FUN_00243480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243480(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(unaff_ESI + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x24;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x24;
    }
    FUN_00245620(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),in_EAX - iVar2);
    FUN_00242fd0();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(unaff_ESI + 8) - iVar2) / 0x24)) {
      FUN_002455a0(unaff_ESI,local_4,*(int *)(unaff_ESI + 4) + in_EAX * 0x24,*(int *)(unaff_ESI + 8)
                  );
    }
  }
  FUN_00242fd0();
  return;
}
