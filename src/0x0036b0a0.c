/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C35EE03508F9405F509BC8C9B686F4D7BA16EEC292D283E2F4F100B26D7E110
 * Entry: 0x0036b0a0, Ghidra index: 13272, label: FUN_0036b0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004c0bc0;
void FUN_0036b0a0(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,uint param_6,undefined4 param_7,uint param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  if (((byte)param_1 & 3) == 2) {
    param_2 = param_2 + 1;
    param_1 = param_1 & 0xfffffffc;
  }
  if ((param_2 & 1) == 0) {
    if ((param_6 & 1) == 0) goto LAB_0036b0d5;
    param_6 = param_6 + 1;
  }
  else {
    if ((param_6 & 1) != 0) {
      param_6 = param_6 + 1;
    }
    param_2 = param_2 + 1;
  }
  param_8 = param_8 - 1;
LAB_0036b0d5:
  if ((param_8 & 1) != 0) {
    param_8 = param_8 - 1;
  }
  FUN_003603c0(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_11,param_12,0,
               &DAT_004c0bc0);
  return;
}
