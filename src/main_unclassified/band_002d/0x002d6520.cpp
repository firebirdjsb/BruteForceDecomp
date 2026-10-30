/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E47BCAC8468D8A7D69CF3E25E7FEE17E3ACE01F08624489FAFA199B77C7BFABA
 * Entry: 0x002d6520, Ghidra index: 10243, label: FUN_002d6520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
void FUN_002d6520(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 in_EAX;
  uint in_ECX;
  float10 fVar2;
  int local_28;
  uint local_24;
  undefined1 local_20 [12];
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  iVar1 = (int)param_3;
  local_14 = 0;
  local_4 = 0;
  FUN_00150930();
  FUN_002b7360(*(int *)((int)param_3 + 8) + 0x10,&local_10,local_20);
  FUN_002cd2b0(local_20);
  if ((int)(local_8 | local_c | local_10) < 0) {
    param_3 = 1e+20;
    local_24 = 0;
    local_28 = 3;
    do {
      fVar2 = (float10)FUN_002cdf10(*(undefined4 *)(iVar1 + 4),in_ECX);
      if (fVar2 < (float10)param_3) {
        param_3 = (float)fVar2;
        local_24 = in_ECX;
      }
      in_ECX = in_ECX + *(int *)(&DAT_003b86e0 + (in_ECX & 0xc));
      local_28 = local_28 + -1;
    } while (local_28 != 0);
    FUN_002d8d60(param_1,param_2,local_24);
    return;
  }
  FUN_002d6910(param_2,local_20,in_ECX,in_EAX,param_3);
  return;
}
