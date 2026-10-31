/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E91F5A37A32D65201FA116347599255407E65DEF821A6DD839DF45752AB095B
 * Entry: 0x00146370, Ghidra index: 4209, label: FUN_00146370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched prototype only; Xbox guest ABI_UNVERIFIED. */
extern int FUN_000782c0(int param_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00146370(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1bc) == 1) {
    iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x214))();
  }
  else {
    iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x210))();
  }
  if (iVar1 != 0) {
    uVar2 = FUN_000782c0(*(undefined4 *)(unaff_ESI + 0x1c4));
    return uVar2;
  }
  return 0;
}
