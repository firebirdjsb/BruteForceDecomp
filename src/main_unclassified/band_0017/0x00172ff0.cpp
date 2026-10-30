/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4931122567E8B57C965794E7FE1C4287BF490361E1899EB8F217CB35ACB22C5D
 * Entry: 0x00172ff0, Ghidra index: 4875, label: FUN_00172ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a4b4;
extern uint32_t PTR_FUN_0039a5e4;
extern uint32_t PTR_FUN_003a402c;
extern uint32_t PTR_LAB_0039a438;
extern uint32_t PTR_LAB_0039a44c;
extern uint32_t PTR_LAB_0039a480;
extern uint32_t PTR_LAB_0039a49c;
void FUN_00172ff0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_FUN_0039a4b4;
  in_EAX[6] = &PTR_LAB_0039a49c;
  in_EAX[0x20] = &PTR_LAB_0039a480;
  in_EAX[0x21] = &PTR_LAB_0039a44c;
  in_EAX[0x22] = &PTR_LAB_0039a438;
  if (in_EAX[0x19] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[0x19]);
  }
  in_EAX[0x19] = 0;
  in_EAX[6] = &PTR_FUN_0039a5e4;
  if (in_EAX[8] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[8]);
  }
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  *in_EAX = &PTR_FUN_003a402c;
  if (in_EAX[4] != 0) {
    FUN_0008f6e0();
    if (in_EAX[4] != 0) {
      FUN_0008f6e0();
      return;
    }
  }
  return;
}
