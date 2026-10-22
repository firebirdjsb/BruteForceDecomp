/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA62D3CF7A1E1C29C4120F28D5B28F209749501B9999E2C41E9BE4C30CE93C04
 * Entry: 0x0015a1d0, Ghidra index: 4511, label: FUN_0015a1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015a1d0(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(in_EAX + 0x88);
  iVar1 = 8;
  do {
    if (*piVar2 != 0) {
      FUN_0021c700();
      if (*piVar2 != 0) {
        FUN_0008f6a0(0);
      }
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
