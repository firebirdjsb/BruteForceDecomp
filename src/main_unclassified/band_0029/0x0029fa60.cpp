/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA67E25046829EA0B0C980C0BE2CA69BDA05A0B7B9A1A8AD15F1562465343916
 * Entry: 0x0029fa60, Ghidra index: 9493, label: FUN_0029fa60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00390d28;
extern uint32_t PTR_FUN_00390e10;
extern uint32_t PTR_LAB_00390f3c;
extern uint32_t PTR_LAB_00390f58;
void FUN_0029fa60(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_00390e10;
  FUN_0029fed0();
  unaff_ESI[8] = 0;
  unaff_ESI[1] = &PTR_FUN_00390d28;
  *unaff_ESI = &PTR_LAB_00390f58;
  puVar1 = unaff_ESI + 10;
  *puVar1 = &PTR_LAB_00390f3c;
  unaff_ESI[0xb] = 1;
  unaff_ESI[0xc] = unaff_ESI;
  iVar2 = *(int *)(unaff_EBX + 8);
  unaff_ESI[9] = iVar2;
  if (iVar2 == 0) {
    unaff_ESI[9] = puVar1;
    return;
  }
  **(int **)(unaff_EBX + 0xc) = (int)puVar1;
  return;
}
