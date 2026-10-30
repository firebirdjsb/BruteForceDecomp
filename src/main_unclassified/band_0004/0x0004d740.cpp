/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D7172ACB4A8A2F2B030EDFA74D0CCF2E28A2D62F575693BC05405560AC7F51E
 * Entry: 0x0004d740, Ghidra index: 653, label: FUN_0004d740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0004d7f0(undefined4 param_1,int param_2);

extern uint32_t DAT_0046cfd8;
undefined4 FUN_0004d740(void)

{
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_0004d7f0(local_10);
  if (local_c == 0) {
    return 0;
  }
  if (local_8 - local_c >> 2 != 0) {
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_c);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_c);
}
