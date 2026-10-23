/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7EABDC83671D997A1C0AA5C8DC1BB7F761AA88F435565C61D64C1A7D2C10FB4
 * Entry: 0x0028ac70, Ghidra index: 9173, label: FUN_0028ac70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
undefined4 FUN_0028ac70(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_5c [64];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = DAT_00469888[3];
  local_18 = DAT_00469888[4];
  local_14 = DAT_00469888[5];
  local_10 = DAT_00469888[6];
  DAT_00469888[6] = (int)local_5c;
  iVar2 = __setjmp3(local_5c,0);
  piVar3 = DAT_00469888;
  if (iVar2 == 0) {
    if (param_2 == 0) {
      local_8 = FUN_0029a430();
      local_c = 0;
      piVar3 = DAT_00469888;
    }
    else {
      local_8 = FUN_0029cc40();
      local_c = 0;
      piVar3 = DAT_00469888;
    }
  }
  else {
    piVar1 = DAT_00469888 + 3;
    *piVar1 = local_1c;
    piVar3[4] = local_18;
    piVar3[5] = local_14;
    local_8 = 0;
    *piVar3 = *piVar1 * 0x10 + piVar3[1];
    local_c = 1;
  }
  piVar3[6] = local_10;
  if (local_c != 0) {
    return 1;
  }
  if (local_8 == 0) {
    return 2;
  }
  FUN_0028a4f0();
  piVar3 = DAT_00469888;
  *(undefined4 *)(DAT_00469888[3] * 0x10 + DAT_00469888[1]) = 0xfffffffc;
  *(int *)(piVar3[3] * 0x10 + 8 + piVar3[1]) = local_8;
  return 0;
}
