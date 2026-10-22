/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB9EC217DA26B62A15596FC7D18C09D07A256872293713FD69AA4B1AA69AE0FD
 * Entry: 0x00316e24, Ghidra index: 12165, label: FUN_00316e24
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe820320;
extern uint32_t _DAT_fe82035c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00316e24(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  ushort *puVar4;
  
  iVar2 = param_1;
  FUN_003118f0();
  iVar1 = param_1 * 0x10 + in_ECX;
  if (*(int *)(iVar1 + 0x98) != 0) {
    do {
    } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 2);
    param_1 = 0;
    if (*(byte *)(in_ECX + 100) != 0) {
      puVar4 = (ushort *)(in_ECX + 0xc);
      do {
        _DAT_fe8202f8 = (uint)*puVar4;
        iVar3 = (iVar2 + _DAT_fe8202f8 * 2 & 0xfff) << 0xc;
        if (iVar2 == 0) {
          _DAT_fe820320 = iVar3;
          iVar3 = _DAT_fe82035c;
        }
        _DAT_fe82035c = iVar3;
        param_1 = param_1 + 1;
        puVar4 = puVar4 + 1;
      } while (param_1 < *(byte *)(in_ECX + 100));
    }
    FUN_00316d57((iVar2 + 9) * 0x10 + in_ECX,param_2);
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0;
    *(int *)(in_ECX + 0x19c) = *(int *)(in_ECX + 0x19c) + -1;
    *(uint *)(in_ECX + 0x198) = *(uint *)(in_ECX + 0x198) - 1 & 1;
  }
  FUN_00311923();
  return;
}
