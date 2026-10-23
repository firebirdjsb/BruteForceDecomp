/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FF0C1DD8BBDB4EB712D19AE84E5A6DC3A01AEFC60E3273D5C429C82267C0130
 * Entry: 0x00136fc0, Ghidra index: 3897, label: FUN_00136fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
undefined4 FUN_00136fc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 in_ECX;
  uint uVar2;
  undefined4 in_EDX;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_001371f0(in_EDX,in_ECX,&local_10);
  if ((float)iVar1 == 0.0) {
    if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_c);
    }
    return 0;
  }
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  if (local_c == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = local_8 - local_c >> 4;
  }
  iVar1 = local_c;
  if (DAT_0046cfd8 % uVar2 != 0) {
    iVar1 = (DAT_0046cfd8 % uVar2) * 0x10 + local_c;
  }
  (**(code **)*param_1)(iVar1);
  if (local_10 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_10);
  }
  return 1;
}
