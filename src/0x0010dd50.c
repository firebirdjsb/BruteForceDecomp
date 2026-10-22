/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC0F8875A02E3F124B29CBE6C1CB7B23AE0F3E915C7DB8D162CD2677D745EC24
 * Entry: 0x0010dd50, Ghidra index: 3505, label: FUN_0010dd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0010dd50(int param_1)

{
  int in_EAX;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  local_4 = 7;
  local_8 = 0;
  local_18 = local_18 & 0xffff0000;
  if (param_1 == -0x4fb8586) {
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x19c))(0,local_1c);
  }
  else if (param_1 == -0x55aeff1) {
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1a0))(local_1c);
  }
  *(undefined1 *)(in_EAX + 0x90) = 1;
  FUN_0010a7d0();
  if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  return;
}
