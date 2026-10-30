/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DAC84225FFC1CFD8BF11668D91F6798139AB173CBE5766C59C3749815B77FF3E
 * Entry: 0x000fed50, Ghidra index: 3187, label: FUN_000fed50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_000fed50(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  bool bVar3;
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x90))();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    *(byte *)(unaff_ESI + 0x66) = *(byte *)(unaff_ESI + 0x66) | 1;
    return;
  }
  bVar3 = *(int *)(unaff_ESI + 0x24) == iVar1;
  if (bVar3) {
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(&DAT_0046d064);
  }
  *(byte *)(unaff_ESI + 0x66) =
       *(byte *)(unaff_ESI + 0x66) ^ (*(byte *)(unaff_ESI + 0x66) ^ bVar3) & 1;
  return;
}
