/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D72AE38F7CE2F3F326324830F1D48F4BF6F6D2C90AF6F0D8EA14AF07D2262FC4
 * Entry: 0x001ee060, Ghidra index: 6953, label: FUN_001ee060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t PTR_FUN_00396930;
void FUN_001ee060(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined **local_11c [6];
  undefined4 local_104;
  undefined1 local_100 [256];
  
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    FUN_002e8c40();
    local_104 = *param_2;
    local_11c[0] = &PTR_FUN_00396930;
    FUN_002eb2b3(local_100,0x80,param_3,&stack0x00000010);
    FUN_002e7f50(0xfffffffc,local_11c,1,1);
    FUN_002e8b80();
  }
  return;
}
