/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B348478FB0209765D95A39B30A8A8163D14C9F99EEE730DEC47756E6C5C787F
 * Entry: 0x00183420, Ghidra index: 5196, label: FUN_00183420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00183420(void)

{
  int *piVar1;
  int *unaff_ESI;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = (int *)unaff_ESI[0x1c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    unaff_ESI[0x1c] = 0;
  }
  piVar1 = (int *)unaff_ESI[0x1d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    unaff_ESI[0x1d] = 0;
  }
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  *(undefined1 *)(unaff_ESI + 0x2a) = 0;
  *(undefined1 *)((int)unaff_ESI + 0xa9) = 0;
  unaff_ESI[0xc] = 0x3f800000;
  if ((*(byte *)(unaff_ESI + 7) & 2) != 0) {
    uStack_10 = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    uStack_c = 0;
    (**(code **)(*unaff_ESI + 0xc))(&uStack_c);
    (**(code **)(*unaff_ESI + 0x10))(&uStack_10);
  }
  return;
}
