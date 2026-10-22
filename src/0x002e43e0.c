/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6620C8431AA5FE6B3F6AA322B2693760FA43600509A5C57436EF1ED412D00C7A
 * Entry: 0x002e43e0, Ghidra index: 10437, label: FUN_002e43e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00386630;
extern uint32_t PTR_LAB_00386690;
uint FUN_002e43e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined **local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_4;
  
  local_44 = &PTR_LAB_00386630;
  local_40 = 1;
  local_3c = 0;
  local_38 = 0;
  FUN_002e9b20();
  local_24 = param_1;
  local_20 = param_2;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_44 = &PTR_LAB_00386690;
  local_1c = 0;
  local_4 = 0;
  uVar1 = FUN_002e4250(&local_44,param_3);
  return uVar1 & (-1 < (int)uVar1) - 1;
}
