/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D8819032D06240DBBB672F18058171B5361FD75430FDF3A1EA1C0BB1F221132
 * Entry: 0x003571b0, Ghidra index: 13152, label: FUN_003571b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003571b0(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  
  if (in_EAX != 0) {
    in_EAX = in_EAX + -1;
  }
  *(undefined4 *)(unaff_ESI + 0x308) = 0;
  if (*(int *)(unaff_ESI + 0x2f8) != 0) {
    FUN_00356f00(unaff_ESI);
  }
  *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(unaff_ESI + 0xc);
  if (in_EAX == 0) {
    iVar2 = FUN_0035b1a0();
    if (*(int *)(unaff_ESI + 0x2f0) == 0) {
      *(int *)(unaff_ESI + 0x2f0) = iVar2;
    }
    if (FUN_000493e0 < (code *)(iVar2 - *(int *)(unaff_ESI + 0x2f0))) {
      *(int *)(unaff_ESI + 0x2f0) = iVar2;
      *(undefined4 *)(unaff_ESI + 0x2f4) = 1;
    }
  }
  if (*(int *)(unaff_ESI + 0x108) == 0) {
    uVar1 = *(uint *)(*(int *)(unaff_ESI + 0x10c) + in_EAX * 4);
    (**(code **)(unaff_ESI + 0x114))
              (unaff_ESI + 0x110,in_EAX,uVar1 & 0xfffffffe,*(undefined4 *)(unaff_ESI + 0x104),
               (*(uint *)(*(int *)(unaff_ESI + 0x10c) + 4 + in_EAX * 4) & 0xfffffffe) -
               (uVar1 & 0xfffffffe));
  }
  else {
    *(uint *)(unaff_ESI + 0x104) =
         (((*(uint **)(unaff_ESI + 0x10c))[in_EAX] & 0xfffffffe) -
         (**(uint **)(unaff_ESI + 0x10c) & 0xfffffffe)) + *(int *)(unaff_ESI + 0x108);
  }
  if (*(int *)(unaff_ESI + 0x2f8) != 0) {
    FUN_00356f00(unaff_ESI);
  }
  *(int *)(unaff_ESI + 0xc) = in_EAX + 1;
  return;
}
