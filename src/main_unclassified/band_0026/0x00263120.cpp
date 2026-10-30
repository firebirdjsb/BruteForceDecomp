/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E89361C7778D84DC9EF27DE8937F62A7FCC5F0B9DCD033CA4CF859C0AF42F984
 * Entry: 0x00263120, Ghidra index: 8670, label: FUN_00263120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
extern uint32_t PTR_FUN_00392b80;
extern uint32_t PTR_LAB_00392a38;
extern uint32_t PTR_LAB_00392c1c;
void FUN_00263120(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  *unaff_ESI = &PTR_FUN_00392b80;
  unaff_ESI[1] = 0;
  (**(code **)(*DAT_00443300 + 0x30))();
  *unaff_ESI = &PTR_LAB_00392a38;
  puVar1 = unaff_ESI + 9;
  *puVar1 = &PTR_LAB_00392c1c;
  unaff_ESI[10] = 1;
  unaff_ESI[0xb] = unaff_ESI;
  iVar2 = *(int *)(unaff_EDI + 8);
  unaff_ESI[8] = iVar2;
  if (iVar2 == 0) {
    unaff_ESI[8] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
