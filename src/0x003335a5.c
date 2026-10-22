/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09F4748AB8F4D5F7B93AC26AB6BDEE4F0F98137BBF63384243934C3E66CE742E
 * Entry: 0x003335a5, Ghidra index: 12410, label: FUN_003335a5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003335a5(int param_1)

{
  int in_ECX;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  FUN_00347aa1(0,0);
  FUN_003476db(param_1 + 0x18,0,0xffffffff);
  if (*(int *)(param_1 + 0x4c) != -1) {
    FUN_00345084(*(int *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_00330c53(*(int *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_0033e986(*(int *)(param_1 + 0x50),0x8043);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00330c53(*(int *)(param_1 + 0x58));
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00330c53(*(int *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_00330c53(*(int *)(param_1 + 0x98));
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00330c53(*(int *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_0033ea20(*(int *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0033ea20(*(int *)(param_1 + 0x9c));
  }
  FUN_00330f12(param_1);
  if (*(int *)(in_ECX + 0xbc) == param_1) {
    FUN_00331052();
    FUN_0033108f();
    FUN_00335baf();
    FUN_003476d0();
    uVar2 = 0;
    *(undefined4 *)(in_ECX + 0xc4) = 0;
    *(undefined4 *)(in_ECX + 0x64c) = 0;
    if (*(int *)(in_ECX + 0x54c) != 0) {
      puVar3 = (undefined4 *)(in_ECX + 0x550);
      do {
        FUN_0033ea20(*puVar3);
        *puVar3 = 0;
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 < *(uint *)(in_ECX + 0x54c));
    }
    *(undefined4 *)(in_ECX + 0x54c) = 0;
    puVar3 = (undefined4 *)(in_ECX + 200);
    for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(in_ECX + 0xb4) != 0) {
      XAPILIB__CloseHandle(*(int *)(in_ECX + 0xb4));
    }
    thunk_FUN_0033e986(*(undefined4 *)(in_ECX + 0xbc),0x801a);
    *(undefined4 *)(in_ECX + 0xbc) = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0xc0);
    if (iVar1 == param_1) {
      thunk_FUN_0033e986(iVar1,0x801a);
      *(int *)(in_ECX + 0xc0) = 0;
    }
  }
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  return;
}
