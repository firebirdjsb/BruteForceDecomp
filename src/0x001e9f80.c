/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A85EBF18C6485D10C5281A91F621B8994C1B0D1D65993958DD9880F1C1BE5A30
 * Entry: 0x001e9f80, Ghidra index: 6868, label: FUN_001e9f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t UNK_001ea060;
void FUN_001e9f80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int in_EAX;
  int iVar1;
  uint in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined1 auStack_30 [4];
  undefined2 local_2c;
  undefined4 uStack_20;
  undefined4 *local_1c;
  undefined *local_18;
  undefined4 uStack_14;
  
  while( true ) {
    iVar1 = param_2 * 2 + 2;
    if (in_EAX <= iVar1) break;
    if (*(uint *)(iVar1 * 0x20 + param_1) < *(uint *)(iVar1 * 0x20 + -0x20 + param_1)) {
      iVar1 = param_2 * 2 + 1;
    }
    local_1c = (undefined4 *)(param_2 * 0x20 + param_1);
    uStack_14 = 0xffffffff;
    *local_1c = *(undefined4 *)(iVar1 * 0x20 + param_1);
    local_18 = (undefined *)0x0;
    local_1c = local_1c + 1;
    uStack_20 = 0x1e9fd6;
    FUN_00087940();
    param_2 = iVar1;
  }
  if (iVar1 == in_EAX) {
    local_1c = (undefined4 *)(param_2 * 0x20 + param_1);
    uStack_14 = 0xffffffff;
    *local_1c = *(undefined4 *)(in_EAX * 0x20 + -0x20 + param_1);
    local_18 = (undefined *)0x0;
    local_1c = local_1c + 1;
    uStack_20 = 0x1ea007;
    FUN_00087940();
  }
  uStack_14 = in_stack_0000002c;
  local_18 = (undefined *)0x7;
  local_1c = (undefined4 *)0x0;
  local_2c = 0;
  FUN_00087940(auStack_30,0,0xffffffff);
  FUN_001ea070(param_1,param_3);
  if (7 < in_stack_00000028) {
    uStack_14 = param_5;
                    /* WARNING: Subroutine does not return */
    local_18 = &UNK_001ea060;
    thunk_FUN_00237ec0();
  }
  return;
}
