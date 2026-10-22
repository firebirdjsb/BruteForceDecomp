/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85241D82F6EA586DB8A0D2652A7364A4947A62B5A59B1BF1841AD2B61EBF4D55
 * Entry: 0x000ec9d0, Ghidra index: 2936, label: FUN_000ec9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039eb10;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec9d0(void)

{
  undefined4 *in_EAX;
  
  FUN_00059b60();
  *in_EAX = &PTR_FUN_0039eb10;
  in_EAX[2] = &PTR_LAB_003a3f18;
  in_EAX[3] = &PTR_FUN_0039e7e8;
  return;
}
