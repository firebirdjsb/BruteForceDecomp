/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB668430C4B1057F6367F86320A8C1E83050DD2C0BAF416710DD7E5C0340F618
 * Entry: 0x00173cf0, Ghidra index: 4898, label: FUN_00173cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a228;
extern uint32_t PTR_FUN_0039a5e4;
extern uint32_t PTR_FUN_003a402c;
extern uint32_t PTR_LAB_0039a1a4;
extern uint32_t PTR_LAB_0039a1b8;
extern uint32_t PTR_LAB_0039a1f4;
extern uint32_t PTR_LAB_0039a210;
void FUN_00173cf0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_FUN_0039a228;
  in_EAX[6] = &PTR_LAB_0039a210;
  in_EAX[0x26] = &PTR_LAB_0039a1f4;
  in_EAX[0x27] = &PTR_LAB_0039a1b8;
  in_EAX[0x28] = &PTR_LAB_0039a1a4;
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
