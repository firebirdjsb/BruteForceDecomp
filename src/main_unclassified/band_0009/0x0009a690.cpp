/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F80EF5239DC488F935B07465F6CAE75FADBAC5DED6DBCEF40A0909345C34F2C
 * Entry: 0x0009a690, Ghidra index: 1855, label: FUN_0009a690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0f0c;
extern uint32_t PTR_LAB_003a1130;
void FUN_0009a690(void)

{
  int iVar1;
  undefined4 *in_EDX;
  int unaff_ESI;
  undefined4 *puVar2;
  
  in_EDX[1] = 0;
  in_EDX[2] = 0;
  *(undefined1 *)(in_EDX + 0x26) = 0;
  puVar2 = in_EDX + 3;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *in_EDX = &PTR_LAB_003a1130;
  puVar2 = in_EDX + 0x28;
  *puVar2 = &PTR_LAB_003a0f0c;
  in_EDX[0x29] = 1;
  in_EDX[0x2a] = in_EDX;
  iVar1 = *(int *)(unaff_ESI + 8);
  in_EDX[0x27] = iVar1;
  if (iVar1 == 0) {
    in_EDX[0x27] = puVar2;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar2;
  return;
}
