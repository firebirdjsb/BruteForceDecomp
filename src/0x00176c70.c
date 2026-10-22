/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B696AC3039D49A40269C7CDEB0FA21866577B7E66AAA144C67C3927D218FFC15
 * Entry: 0x00176c70, Ghidra index: 4944, label: FUN_00176c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a004;
extern uint32_t PTR_FUN_0039a5e4;
extern uint32_t PTR_FUN_003a402c;
extern uint32_t PTR_LAB_00399f84;
extern uint32_t PTR_LAB_00399f98;
extern uint32_t PTR_LAB_00399fb0;
extern uint32_t PTR_LAB_00399fd0;
extern uint32_t PTR_LAB_00399fec;
void FUN_00176c70(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_FUN_0039a004;
  in_EAX[6] = &PTR_LAB_00399fec;
  in_EAX[0x1e] = &PTR_LAB_00399fd0;
  in_EAX[0x1f] = &PTR_LAB_00399fb0;
  in_EAX[0x20] = &PTR_LAB_00399f98;
  in_EAX[0x21] = &PTR_LAB_00399f84;
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
