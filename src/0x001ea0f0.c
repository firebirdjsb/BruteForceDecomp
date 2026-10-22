/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2FCB16FA8FC9482BAC63B22E6914B4C2867A24F66F758ABB71ABA46AD1929C9
 * Entry: 0x001ea0f0, Ghidra index: 6870, label: FUN_001ea0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t UNK_001ea16d;
void FUN_001ea0f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined1 auStack_24 [4];
  undefined2 local_20;
  undefined4 uStack_14;
  undefined4 *local_10;
  undefined *local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  *param_3 = *param_1;
  local_c = (undefined *)0x0;
  local_10 = param_3 + 1;
  uStack_14 = 0x1ea10d;
  FUN_00087940();
  uStack_8 = in_stack_00000030;
  local_c = (undefined *)0x7;
  local_10 = (undefined4 *)0x0;
  local_20 = 0;
  FUN_00087940(auStack_24,0,0xffffffff);
  FUN_001e9f80(param_1,0,param_4);
  if (7 < in_stack_0000002c) {
    uStack_8 = param_6;
                    /* WARNING: Subroutine does not return */
    local_c = &UNK_001ea16d;
    thunk_FUN_00237ec0();
  }
  return;
}
