/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB040C4157DEF2EE808BC5C9894173F5E0C0F99EE8BB111A6C108DBE78DFC8FF
 * Entry: 0x002d86e0, Ghidra index: 10250, label: FUN_002d86e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
void FUN_002d86e0(int *param_1,uint param_2,int param_3)

{
  float local_18;
  float local_14;
  undefined1 local_10 [12];
  undefined4 local_4;
  
  local_4 = 0;
  FUN_002b7360(*(int *)(param_3 + 8) + 0x10,*param_1 + 0x40,local_10);
  FUN_002cd190(local_10);
  if (local_18 < 0.0) {
    FUN_002d7d60(param_1,param_2,param_3);
    return;
  }
  if (local_14 < 0.0) {
    FUN_002d7d60(param_1,*(int *)(&DAT_003b86e0 + (param_2 & 0xc)) + param_2,param_3);
    return;
  }
  FUN_002d87a0(param_1,param_2,param_3);
  return;
}
