/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FA6B5898BF403EAA63D3C97E597C4F0CAEF37956F0748E9482753E4804F7E42
 * Entry: 0x000d0330, Ghidra index: 2572, label: FUN_000d0330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000d0330(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *unaff_ESI;
  
  iVar5 = *(int *)(unaff_ESI + 0x24);
  do {
    iVar4 = *(int *)(unaff_ESI + 0x28);
    if (iVar5 == iVar4) {
      if (*unaff_ESI != '\0') {
        return 0;
      }
      FUN_000d01c0();
      iVar5 = *(int *)(unaff_ESI + 0x24);
      iVar4 = *(int *)(unaff_ESI + 0x28);
      if (iVar5 == iVar4) {
        return 0;
      }
    }
    iVar1 = *(int *)(unaff_ESI + iVar4 * 4 + 0x30);
    iVar2 = *(int *)(unaff_ESI + iVar4 * 4 + 0x40);
    *(uint *)(unaff_ESI + 0x28) = iVar4 + 1U & 3;
    if (iVar1 < 0) {
LAB_000d038a:
      iVar4 = 0;
    }
    else {
      piVar3 = *(int **)(*(int *)(unaff_ESI + 0x50) + 0x20);
      iVar4 = *piVar3;
      if (((iVar4 <= iVar1) || (iVar2 < 0)) || (piVar3[1] <= iVar2)) goto LAB_000d038a;
      iVar4 = (iVar4 * iVar2 + iVar1) * 0x40 + *(int *)(*(int *)(unaff_ESI + 0x50) + 0x18);
    }
    *(int *)(unaff_ESI + 0x54) = iVar4;
    if (iVar4 != 0) {
      return iVar4;
    }
  } while( true );
}
