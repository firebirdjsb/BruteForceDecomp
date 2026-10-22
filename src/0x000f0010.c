/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C3C8A18B9F848866FDA0E2FD92F923E8B7AC260CAF000DFCEE3936C5D256599
 * Entry: 0x000f0010, Ghidra index: 2994, label: FUN_000f0010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f0010(void)

{
  byte bVar1;
  byte bVar2;
  int *unaff_ESI;
  
  bVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x248))();
  if ((unaff_ESI != (int *)0x0) && (bVar1 = *(byte *)(unaff_ESI + 10), bVar2 != (bVar1 >> 2 & 1))) {
    *(byte *)(unaff_ESI + 10) = (bVar2 << 2 ^ bVar1) & 4 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x000f0043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_ESI + 0x28))();
    return;
  }
  return;
}
