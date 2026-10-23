/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE268DE39A509BB2A2449BF951AF95FB6EF0926377C2DCDD1F9A868AD55B117F
 * Entry: 0x00281f10, Ghidra index: 9057, label: FUN_00281f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394160;
int FUN_00281f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_c;
  uint local_8;
  uint local_4;
  
  FUN_00252ca0(param_1);
  local_8 = 0;
  if (local_4 != 0) {
    do {
      local_c = (int *)FUN_002ea01d(0x28);
      if (local_c == (int *)0x0) {
        local_c = (int *)0x0;
      }
      else {
        local_c[1] = 0;
        local_c[2] = 0;
        local_c[3] = 0;
        local_c[4] = 0;
        local_c[5] = 0;
        local_c[6] = 0;
        local_c[7] = 0;
        local_c[8] = 0;
        *local_c = (int)&PTR_LAB_00394160;
        local_c[9] = 1;
      }
      iVar2 = FUN_00254620(param_2,param_3,&local_c,param_4);
      piVar1 = local_c;
      if (iVar2 < 0) {
        return iVar2;
      }
      (**(code **)(*local_c + 8))(local_c);
      iVar2 = FUN_00281f10(param_1,param_2,piVar1,param_4);
      if (iVar2 < 0) {
        return iVar2;
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_4);
  }
  return 0;
}
