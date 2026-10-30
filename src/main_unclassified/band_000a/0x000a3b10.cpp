/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01FF57616C921F70EAF7BEBEEF8214CAF60507F7683C4B566EAB18B397E63417
 * Entry: 0x000a3b10, Ghidra index: 1947, label: FUN_000a3b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0900;
extern uint32_t PTR_LAB_003a0f0c;
void FUN_000a3b10(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EDI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0x3a83126f;
  *in_EAX = &PTR_LAB_003a0900;
  puVar1 = in_EAX + 0xc;
  *puVar1 = &PTR_LAB_003a0f0c;
  in_EAX[0xd] = 1;
  in_EAX[0xe] = in_EAX;
  iVar2 = *(int *)(unaff_EDI + 8);
  in_EAX[0xb] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0xb] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
