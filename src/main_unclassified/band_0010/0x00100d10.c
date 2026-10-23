/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63D25E14EC8DC043229F00BCF21B2949E3640CF29820D76EA6D993597D5D00D9
 * Entry: 0x00100d10, Ghidra index: 3224, label: FUN_00100d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00100d10(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  
  *(byte *)(unaff_ESI + 0x65) = *(byte *)(unaff_ESI + 0x65) | 0x80;
  iVar3 = FUN_000ffb00(unaff_ESI);
  if ((iVar3 == -1) || (*(int *)(*(int *)(unaff_ESI + 0x74) + iVar3 * 4) == 0)) {
    FUN_000ffca0();
  }
  piVar1 = *(int **)(unaff_ESI + 0x94);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    puVar2 = *(undefined4 **)(unaff_ESI + 0x78);
    for (puVar5 = *(undefined4 **)(unaff_ESI + 0x74); puVar5 != puVar2; puVar5 = puVar5 + 1) {
      (**(code **)(*piVar1 + 4))(*puVar5);
    }
  }
  FUN_00100b40();
  if ((*(byte *)(unaff_ESI + 0x66) & 4) == 0) {
    if ((*(byte *)(unaff_ESI + 0x65) & 0x10) == 0) {
      FUN_00100ca0();
    }
    FUN_001010d0();
  }
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)(*piVar4 + 0x68))();
  *(byte *)(unaff_ESI + 0x65) = *(byte *)(unaff_ESI + 0x65) & 0x7f;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))();
  }
  *(byte *)(unaff_ESI + 0x66) = *(byte *)(unaff_ESI + 0x66) | 4;
  return;
}
