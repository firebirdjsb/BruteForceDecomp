/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C0122C1229E918DF491D4A3483A96A473293E32BE9344326A9FB863AA9300B9
 * Entry: 0x0025e5d0, Ghidra index: 8594, label: FUN_0025e5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
uint FUN_0025e5d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    uVar1 = (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 4));
    return uVar1;
  }
  *(int *)(unaff_ESI + 8) = unaff_EDI;
  if (unaff_EDI != 0) {
    uVar2 = (*(code *)PTR_FUN_003bc650)();
    *(undefined4 *)(unaff_ESI + 4) = uVar2;
  }
  return (uint)(*(int *)(unaff_ESI + 4) != 0);
}
