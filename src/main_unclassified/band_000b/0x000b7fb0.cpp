/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 385D8895C706B7D649CA4B393F531DFD9AF8008CF46F44A12F035CD5BCBB6295
 * Entry: 0x000b7fb0, Ghidra index: 2216, label: FUN_000b7fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000b7fb0(void)

{
  int in_EAX;
  int *piVar1;
  undefined1 uVar2;
  int unaff_EDI;
  undefined4 local_4;
  
  if (*(int *)(unaff_EDI + 0x74) != in_EAX) {
    FUN_0008f6a0();
  }
  piVar1 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar1 != (int *)0x0) {
    if (unaff_EDI + 0x2c != 0) {
      FUN_000b25a0(unaff_EDI + 0x2c,piVar1);
    }
    *(byte *)((int)piVar1 + 0x13) = *(byte *)((int)piVar1 + 0x13) & 0xfb;
  }
  *(int **)(unaff_EDI + 0x68) = piVar1;
  if ((*(short *)(*(int *)(piVar1[10] + 8) + 0x20) < 600) ||
     (*(short *)(*(int *)(piVar1[10] + 8) + 0x22) < 400)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  local_4 = CONCAT31(0xec62d,uVar2);
  (**(code **)(*piVar1 + 0x2c))(local_4);
  (**(code **)(*piVar1 + 0x30))(local_4);
  *(undefined1 *)(piVar1 + 0x14) = uVar2;
  FUN_000b7940(*(undefined4 *)(unaff_EDI + 0x68),*(undefined4 *)(*(int *)(unaff_EDI + 0x74) + 0x50))
  ;
  piVar1 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar1 != (int *)0x0) {
    if (unaff_EDI + 0x2c != 0) {
      FUN_000b25a0(unaff_EDI + 0x2c,piVar1);
    }
    *(byte *)((int)piVar1 + 0x13) = *(byte *)((int)piVar1 + 0x13) & 0xfb;
  }
  *(int **)(unaff_EDI + 0x6c) = piVar1;
  if ((*(short *)(*(int *)(piVar1[10] + 8) + 0x20) < 600) ||
     (*(short *)(*(int *)(piVar1[10] + 8) + 0x22) < 400)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  (**(code **)(*piVar1 + 0x2c))(CONCAT31(0xfeadd3,uVar2));
  (**(code **)(*piVar1 + 0x30))(CONCAT31(0xfeadd3,uVar2));
  *(undefined1 *)(piVar1 + 0x14) = uVar2;
  FUN_000b7940(*(undefined4 *)(unaff_EDI + 0x6c),*(undefined4 *)(*(int *)(unaff_EDI + 0x74) + 0x50))
  ;
  return;
}
