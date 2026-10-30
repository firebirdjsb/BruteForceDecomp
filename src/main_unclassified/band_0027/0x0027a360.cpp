/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EA82106818D8DDE9D9BA9414DD376445795838E06EB691360EE8DB128D10DC6
 * Entry: 0x0027a360, Ghidra index: 8942, label: FUN_0027a360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x00277F50 draft takes one DWORD object pointer.
 * Callsite ignores return; guest object layout/ABI remain UNVERIFIED. */
extern undefined4 * FUN_00277f50(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00391da0;
extern uint32_t PTR_FUN_00391fe0;
extern uint32_t PTR_LAB_003921a0;
extern uint32_t PTR_LAB_00392340;
void FUN_0027a360(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  FUN_00277f50(unaff_ESI);
  *unaff_ESI = &PTR_FUN_00391da0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[8] = 4;
  FUN_00278810();
  *unaff_ESI = &PTR_FUN_00391fe0;
  unaff_ESI[8] = 3;
  FUN_00278810();
  *unaff_ESI = &PTR_LAB_003921a0;
  puVar1 = unaff_ESI + 0xe;
  *puVar1 = &PTR_LAB_00392340;
  unaff_ESI[0xf] = 1;
  unaff_ESI[0x10] = unaff_ESI;
  iVar2 = *(int *)(unaff_EDI + 8);
  unaff_ESI[0xd] = iVar2;
  if (iVar2 == 0) {
    unaff_ESI[0xd] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
