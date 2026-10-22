/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A82D0BA8C3F421FA4C55823B0E7C58C8CF0B210347FA61224D91974DE0673DA9
 * Entry: 0x000df6f0, Ghidra index: 2730, label: FUN_000df6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039efc0;
bool FUN_000df6f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int unaff_ESI;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined **local_90 [3];
  int local_84;
  undefined4 local_40;
  undefined4 local_30;
  
  local_b4 = in_ECX[1];
  local_b8 = *in_ECX;
  local_b0 = in_ECX[2];
  local_a8 = *in_EAX;
  local_a4 = in_EAX[1];
  local_a0 = in_EAX[2];
  local_ac = 0;
  local_9c = 0;
  local_98 = param_2;
  local_94 = 0;
  if (unaff_ESI != 0) {
    local_94 = *(undefined4 *)(unaff_ESI + 0x114);
  }
  FUN_002b7970(local_90,&local_b8);
  local_90[0] = &PTR_LAB_0039efc0;
  local_30 = 0;
  local_40 = 0x60ad78ec;
  FUN_000df0a0(param_1,local_90,unaff_ESI,1);
  return local_84 != 0;
}
