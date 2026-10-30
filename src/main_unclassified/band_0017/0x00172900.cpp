/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03725901E422559888C73EA8A63BABBD0E0C500139EB6904D5E72F2B9C518E3B
 * Entry: 0x00172900, Ghidra index: 4869, label: FUN_00172900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a514;
extern uint32_t PTR_FUN_0039a548;
extern uint32_t PTR_FUN_0039a5e4;
extern uint32_t PTR_FUN_003a402c;
extern uint32_t PTR_LAB_0039a2b0;
extern uint32_t PTR_LAB_0039a2c4;
extern uint32_t PTR_LAB_0039a530;
void FUN_00172900(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_FUN_0039a548;
  in_EAX[6] = &PTR_LAB_0039a530;
  in_EAX[0x1c] = &PTR_FUN_0039a514;
  in_EAX[0x1d] = &PTR_LAB_0039a2c4;
  in_EAX[0x1e] = &PTR_LAB_0039a2b0;
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
