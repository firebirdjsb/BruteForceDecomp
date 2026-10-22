/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FFCC77373B1207DA51AC901B7316C1B019AD375B86FBC1E523EDD4B8302FE2B
 * Entry: 0x00121860, Ghidra index: 3656, label: FUN_00121860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00121860(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined4 unaff_EBX;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_EAX + 0x110);
  if (((*(char *)(*(int *)(unaff_ESI + 0xc) + 0x294 + iVar1) == '\0') ||
      (cVar2 = (**(code **)(**(int **)(unaff_ESI + 0x5a4) + 0x94))(iVar1), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(**(int **)(unaff_ESI + 0x5a4) + 0x84))(), cVar2 == '\0')) {
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x1ec) = 9;
  *(undefined4 *)(unaff_ESI + 0x7dc) = 0;
  cVar2 = (**(code **)(**(int **)(unaff_ESI + 0x5a4) + 0x90))(iVar1);
  if (cVar2 != '\0') {
    if (0.0 < *(float *)(in_EAX + 0x1a8)) {
      *(undefined4 *)(in_EAX + 0x1a8) = 0;
    }
    FUN_000c4ec0();
    *(undefined4 *)(unaff_ESI + 0x628) = 0x3e800000;
    *(undefined4 *)(unaff_ESI + 0x584) = unaff_EBX;
    *(undefined4 *)(unaff_ESI + 0x588) = unaff_EBX;
    *(undefined1 *)(unaff_ESI + 0x590) = 0;
  }
  return;
}
