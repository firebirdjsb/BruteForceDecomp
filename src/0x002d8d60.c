/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 567331517B4CBB6B89BEFC94EA0974F82FF80105E0FDD66FD52B17660B2F7232
 * Entry: 0x002d8d60, Ghidra index: 10252, label: FUN_002d8d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
void FUN_002d8d60(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 unaff_EBX;
  int unaff_EDI;
  float local_20;
  float local_1c;
  undefined4 local_14;
  undefined1 local_10 [12];
  undefined4 local_4;
  
  local_4 = 0;
  local_14 = 0;
  FUN_00150930();
  FUN_002b7360(*(int *)(unaff_EDI + 8) + 0x10,&local_20,local_10);
  FUN_002cd190(local_10);
  if (local_20 < 0.0) {
    FUN_002d80b0(param_2,param_3,unaff_EBX,unaff_EDI);
    return;
  }
  if (local_1c < 0.0) {
    FUN_002d80b0(param_2,*(int *)(&DAT_003b86e0 + (param_3 & 0xc)) + param_3,unaff_EBX,unaff_EDI);
    return;
  }
  FUN_002d8e40(param_2,param_3,unaff_EBX,unaff_EDI);
  return;
}
