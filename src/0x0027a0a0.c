/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA53055EE9A5FDA6D6BB094AFE898987C60A0E1D3C7B0261C327BAC08778F566
 * Entry: 0x0027a0a0, Ghidra index: 8935, label: FUN_0027a0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391fa0;
extern uint32_t PTR_LAB_00392340;
void FUN_0027a0a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  FUN_00277f50(unaff_ESI);
  *unaff_ESI = &PTR_LAB_00391fa0;
  puVar1 = unaff_ESI + 9;
  *puVar1 = &PTR_LAB_00392340;
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
