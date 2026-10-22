/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D2EEF89A92B98EC80C851373D1C6749AB92B35D32EE78060192B8C877BE7F15
 * Entry: 0x0020ee60, Ghidra index: 7408, label: FUN_0020ee60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020ee60(void)

{
  undefined1 uVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  int iVar4;
  int iStack_14;
  
  iVar2 = (unaff_ESI[0x2a] + 1) * (unaff_ESI[0x2a] + 1);
  (**(code **)(*in_ECX + 0xc))();
  (**(code **)(*unaff_ESI + 0x40))();
  FUN_000a0c60();
  iVar3 = 0;
  if (3 < iVar2) {
    iStack_14 = 3;
    iVar4 = 0;
    do {
      uVar1 = FUN_002ebf10();
      *(undefined1 *)(unaff_ESI[0x20] + 0xf + iVar4) = uVar1;
      uVar1 = FUN_002ebf10();
      *(undefined1 *)(unaff_ESI[0x20] + 0x27 + iVar4) = uVar1;
      uVar1 = FUN_002ebf10();
      *(undefined1 *)(unaff_ESI[0x20] + 0x3f + iVar4) = uVar1;
      uVar1 = FUN_002ebf10();
      *(undefined1 *)(unaff_ESI[0x20] + 0x57 + iVar4) = uVar1;
      iStack_14 = iStack_14 + 4;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x60;
    } while (iStack_14 < iVar2);
  }
  if (iVar3 < iVar2) {
    iVar4 = iVar3 * 0x18;
    iVar2 = iVar2 - iVar3;
    do {
      uVar1 = FUN_002ebf10();
      *(undefined1 *)(unaff_ESI[0x20] + 0xf + iVar4) = uVar1;
      iVar4 = iVar4 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
