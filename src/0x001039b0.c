/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAB5BF1A3ED0BDF0F7F965A378C65CEF7162A0B1D2A08E80540C3204609F2DEF
 * Entry: 0x001039b0, Ghidra index: 3306, label: FUN_001039b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 * FUN_001039b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x94);
  if ((*(int *)(unaff_ESI + 0x88) != 0) &&
     (iVar3 = *(int *)(unaff_ESI + 0x8c) - *(int *)(unaff_ESI + 0x88) >> 2, 0 < iVar3)) {
    if (iVar2 < 0) {
      iVar2 = iVar3 - -iVar2 % iVar3;
    }
    if (iVar3 <= iVar2) {
      iVar2 = iVar2 % iVar3;
    }
    piVar1 = *(int **)(*(int *)(unaff_ESI + 0x88) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      return (undefined4 *)(*piVar1 + 0x24);
    }
  }
  return &DAT_0046d064;
}
