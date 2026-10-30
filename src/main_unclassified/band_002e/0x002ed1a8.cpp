/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F54B9FF97497C6688D9B05235C4EB054996BC0EC9EB5E6E690F01D526D7A722
 * Entry: 0x002ed1a8, Ghidra index: 10684, label: FUN_002ed1a8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8d5c;
extern uint32_t DAT_004a8d60;
byte * FUN_002ed1a8(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if (param_2 <= param_1) {
    return (byte *)0x0;
  }
  if (DAT_004a8d5c != 0) {
    pbVar1 = param_2 + -1;
    if ((*(byte *)((int)&DAT_004a8d60 + *pbVar1 + 1) & 4) != 0) {
      return param_2 + -2;
    }
    do {
      pbVar1 = pbVar1 + -1;
      if (pbVar1 < param_1) break;
    } while ((*(byte *)((int)&DAT_004a8d60 + *pbVar1 + 1) & 4) != 0);
    param_2 = param_2 + -((int)param_2 - (int)pbVar1 & 1U);
  }
  return param_2 + -1;
}
