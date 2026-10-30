/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9578F74CD30AEB9CED11D2285047B3FEE1D0D965129B2F45B7D4C1F81958DE6D
 * Entry: 0x00256d80, Ghidra index: 8447, label: FUN_00256d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003937f0;
extern uint32_t PTR_LAB_00393834;
extern uint32_t PTR_LAB_00394160;
void FUN_00256d80(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EDI;
  
  in_EAX[1] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  in_EAX[2] = &PTR_LAB_00394160;
  in_EAX[0xb] = 1;
  in_EAX[0xd] = 0;
  in_EAX[0xe] = 0;
  in_EAX[0xf] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  *in_EAX = &PTR_LAB_003937f0;
  puVar1 = in_EAX + 0x15;
  in_EAX[0x16] = 1;
  *puVar1 = &PTR_LAB_00393834;
  in_EAX[0x17] = in_EAX;
  iVar2 = *(int *)(unaff_EDI + 8);
  in_EAX[0x14] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x14] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
