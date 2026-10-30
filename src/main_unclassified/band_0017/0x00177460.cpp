/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B5B4DEA19C066692A54829632CE123F0E89492AAA2798A6504EF75F24D98688
 * Entry: 0x00177460, Ghidra index: 4951, label: FUN_00177460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399de8;
extern uint32_t PTR_FUN_00399e1c;
extern uint32_t PTR_FUN_0039a5e4;
extern uint32_t PTR_FUN_003a402c;
extern uint32_t PTR_LAB_00399dd4;
extern uint32_t PTR_LAB_00399e04;
void FUN_00177460(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_FUN_00399e1c;
  in_EAX[6] = PTR_LAB_00399e04;
  in_EAX[0x1c] = PTR_FUN_00399de8;
  in_EAX[0x1d] = PTR_LAB_00399dd4;
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
