/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 441C14219AA47B5E9D822BF8EE6B0D26DB8EFE51DDF561E2AD65EE978FA27340
 * Entry: 0x001e9000, Ghidra index: 6853, label: FUN_001e9000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001e9000(void)

{
  int iVar1;
  short in_DX;
  short unaff_BX;
  int unaff_ESI;
  int *piVar2;
  
  if (*(int *)(unaff_ESI + 0xc) == 0) {
    return 0;
  }
  if ((**(int **)(unaff_ESI + 0x10) != 0x3e5) &&
     ((*(short *)(unaff_ESI + 8) != unaff_BX || (*(short *)(unaff_ESI + 10) != in_DX)))) {
    *(short *)(unaff_ESI + 10) = in_DX;
    *(short *)(unaff_ESI + 8) = unaff_BX;
    piVar2 = *(int **)(unaff_ESI + 0x10);
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    *(undefined2 *)piVar2 = 0;
    *(short *)(*(int *)(unaff_ESI + 0x10) + 0x42) = unaff_BX;
    *(short *)(*(int *)(unaff_ESI + 0x10) + 0x44) = in_DX;
    iVar1 = XAPILIB__XInputSetState
                      (*(undefined4 *)(unaff_ESI + 0xc),*(undefined4 *)(unaff_ESI + 0x10));
    if ((iVar1 != 0) && (iVar1 != 0x3e5)) {
      if (iVar1 == 0x32) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0;
      }
      return 0;
    }
  }
  return 1;
}
