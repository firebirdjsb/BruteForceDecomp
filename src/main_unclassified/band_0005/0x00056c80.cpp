/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 871BFEA385F7433EBB894DB3BCE178A95954D8128E9F3F485BF4F8B8E3F9E471
 * Entry: 0x00056c80, Ghidra index: 837, label: FUN_00056c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3f80;
void FUN_00056c80(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_FUN_003a3f80;
  in_EAX[2] = 0;
  in_EAX[4] = 0;
  *(byte *)(in_EAX + 5) = *(byte *)(in_EAX + 5) & 0xf8;
  if (in_EAX[2] != 0) {
    FUN_0008f6a0(0);
  }
  if (in_EAX[4] != 0) {
    FUN_0008f6a0(0);
  }
  in_EAX[6] = 0;
  FUN_00056c20();
  return;
}
