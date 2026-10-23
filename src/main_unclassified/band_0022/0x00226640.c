/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9812620F7CD40ED8A66EDC765AB055B22E7024FD4BDCA00A983D09546CDC1BB1
 * Entry: 0x00226640, Ghidra index: 7648, label: FUN_00226640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003946c8;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_LAB_003946b0;
extern uint32_t PTR_LAB_003946bc;
extern uint32_t PTR_LAB_0039a8c0;
void FUN_00226640(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003946c8;
  in_ECX[0x12] = &PTR_FUN_0039adec;
  in_ECX[0x1a] = &PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_003946bc;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_003946b0;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x1f0;
  if (in_ECX[0x7b] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x6f] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x6d] != 0) {
    FUN_0008f6e0();
  }
  FUN_00156c50();
  return;
}
