/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C83564B5BD0C213EA1598C92023CBE67820B89831FC3F077EBE732522791C80E
 * Entry: 0x0008f6e0, Ghidra index: 1756, label: FUN_0008f6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0008f6e0(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *in_EDX;
  
  uVar1 = in_EDX[1];
  if ((uVar1 & 1) == 0) {
    in_EDX[1] = 0;
    piVar3 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    if (*(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4) != 0) {
      while (piVar2 = (int *)*piVar3, piVar2 != in_EDX) {
        piVar3 = piVar2;
        if (*piVar2 == 0) {
          return;
        }
      }
      *piVar3 = *(int *)*piVar3;
    }
  }
  return;
}
