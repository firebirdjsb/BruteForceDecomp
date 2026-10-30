/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA5BA7657FF204528464035450407289C6D9ED30AE4E0848B29B40B79F51454D
 * Entry: 0x001fc550, Ghidra index: 7159, label: FUN_001fc550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003962b8;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fc550(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003962b8;
  in_ECX[2] = PTR_FUN_0039c24c;
  in_ECX[3] = PTR_FUN_0039e7e8;
  if (in_ECX[0x17] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x14] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x12] != 0) {
    FUN_0008f6e0();
  }
  FUN_001fe150();
  return;
}
