/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02BBFCA555CA53F5E4DC760938FE96F07E2807B949080A89F8170AE4D7991249
 * Entry: 0x002ccc70, Ghidra index: 10154, label: FUN_002ccc70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e5b4;
undefined4 * FUN_002ccc70(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  uint uVar2;
  undefined4 local_8;
  undefined4 *local_4;
  
  FUN_002b2f40(in_ECX,in_EDX,in_EAX);
  *param_1 = &PTR_FUN_0038e5b4;
  param_1[1] = 2;
  param_1[0x22] = *(undefined4 *)(in_EDX + 0x40);
  FUN_002b3650(param_1,*(undefined4 *)(param_2 + 0x14));
  local_8 = *(undefined4 *)(param_1[0x24] + 0xc);
  iVar1 = *(int *)(param_1[0x24] + 0xc);
  uVar2 = (uint)*(ushort *)(iVar1 + 0x136);
  local_4 = param_1;
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x138) + uVar2 * 4) + 4))(&local_8);
  }
  return param_1;
}
