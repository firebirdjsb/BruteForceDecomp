/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54AE2C0B906FE77B1741C3A5DC5764E2B43B676F9023158755660E95084DF04F
 * Entry: 0x00171890, Ghidra index: 4860, label: FUN_00171890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a5e4;
extern uint32_t PTR_FUN_0039a5fc;
extern uint32_t PTR_FUN_0039a6b4;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_FUN_0039a6f4;
extern uint32_t PTR_FUN_0039c2a0;
extern uint32_t PTR_FUN_003a402c;
extern uint32_t PTR_LAB_0039a624;
extern uint32_t PTR_LAB_0039a628;
extern uint32_t PTR_LAB_0039a63c;
extern uint32_t PTR_LAB_0039a654;
extern uint32_t PTR_LAB_0039a67c;
extern uint32_t PTR_LAB_0039a69c;
void FUN_00171890(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_FUN_0039a6b4;
  in_EAX[6] = PTR_LAB_0039a69c;
  in_EAX[0x1c] = PTR_LAB_0039a67c;
  in_EAX[0x1d] = PTR_LAB_0039a654;
  in_EAX[0x1e] = PTR_LAB_0039a63c;
  in_EAX[0x1f] = PTR_LAB_0039a628;
  in_EAX[0x21] = PTR_LAB_0039a624;
  if (in_EAX[0x19] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[0x19]);
  }
  in_EAX[0x19] = 0;
  FUN_00174320();
  in_EAX[0x1c] = &PTR_FUN_0039a6f4;
  in_EAX[0x1d] = &PTR_FUN_0039a5fc;
  in_EAX[0x1e] = &PTR_FUN_0039c2a0;
  in_EAX[0x1f] = &PTR_FUN_0039a6e0;
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
