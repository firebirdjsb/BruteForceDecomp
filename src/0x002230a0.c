/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D8C776E2FE53679DAC7F55B5A45EFD4940891C8D123805102A019A7836B642B
 * Entry: 0x002230a0, Ghidra index: 7600, label: FUN_002230a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002230a0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  int iVar2;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (in_EAX == 0x4e) {
    if (unaff_ESI == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(unaff_ESI[1] + 4) + 8 + (int)unaff_ESI;
    }
    iVar1 = (**(code **)(*unaff_ESI + 4))();
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0xbf4);
    iStack_20 = *(int *)(unaff_ESI[1] + 4) + 4 + (int)unaff_ESI;
    uStack_18 = *(undefined4 *)(iVar1 + 0x50);
    uStack_10 = 0;
    uStack_c = 0x4e;
    uStack_8 = 0;
    iStack_1c = iVar2;
    uStack_14 = uStack_18;
    FUN_000e4190(iVar1,&iStack_20);
  }
  else if (in_EAX == 0x51) {
    (**(code **)(*unaff_ESI + 4))();
    FUN_00012000(0x51,unaff_EBX);
    return;
  }
  return;
}
