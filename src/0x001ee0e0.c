/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB8F61F7669CE0F15930A3BA0D07FDFA02C94FA47642BDA45E7E5FC18AB83DBB
 * Entry: 0x001ee0e0, Ghidra index: 6954, label: FUN_001ee0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t PTR_FUN_00396a38;
void FUN_001ee0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined **local_24 [6];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    FUN_002e8c40();
    local_c = *param_4;
    local_8 = param_3;
    local_4 = param_2;
    local_24[0] = &PTR_FUN_00396a38;
    FUN_002e7f50(0xfffffffd,local_24,1,1);
    FUN_002e8b80();
  }
  return;
}
