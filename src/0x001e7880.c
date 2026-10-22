/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4B020A2A1921FAA5D3859A8990C7073CF7C1C7BFFC0D877170F6416A47621F2
 * Entry: 0x001e7880, Ghidra index: 6818, label: FUN_001e7880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7880(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int iVar3;
  
  if ((*(int *)(unaff_ESI + 4) < 1) && (0 < *(int *)(unaff_ESI + 8))) {
    *(undefined1 *)(*(int *)(unaff_ESI + 0x2b0) + 4) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(unaff_ESI + 0x2b0) + 4) = 1;
  }
  iVar3 = 1;
  piVar2 = (int *)(unaff_ESI + 0x14);
  do {
    iVar1 = FUN_00078df0();
    if ((((*(int *)(unaff_ESI + 4) < 1) && (*(int *)(unaff_ESI + 8) < 1)) &&
        (*(int *)(unaff_ESI + 0xc) < 1)) && ((*piVar2 < 1 || (0 < piVar2[9])))) {
      if ((iVar1 < 0) || (0x18 < iVar1)) {
        uRam00000004 = 0;
      }
      else {
        *(undefined1 *)(*(int *)(unaff_ESI + 0x250 + iVar1 * 4) + 4) = 0;
      }
    }
    else {
      if ((iVar1 < 0) || (0x18 < iVar1)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(unaff_ESI + 0x250 + iVar1 * 4);
      }
      *(undefined1 *)(iVar1 + 4) = 1;
    }
    iVar1 = FUN_00078d80();
    if ((*(int *)(unaff_ESI + 4) < 1) &&
       (((0 < *(int *)(unaff_ESI + 8) || (0 < *(int *)(unaff_ESI + 0xc))) || (*piVar2 < 1)))) {
      if ((iVar1 < 0) || (0x18 < iVar1)) {
        uRam00000004 = 1;
      }
      else {
        *(undefined1 *)(*(int *)(unaff_ESI + 0x250 + iVar1 * 4) + 4) = 1;
      }
    }
    else {
      if ((iVar1 < 0) || (0x18 < iVar1)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(unaff_ESI + 0x250 + iVar1 * 4);
      }
      *(undefined1 *)(iVar1 + 4) = 0;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 9);
  return;
}
