/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22B4CD6FE52DA851675829A86D725C60E0D38303C17C3053C7A4FC4008AA8C72
 * Entry: 0x00318a55, Ghidra index: 12206, label: FUN_00318a55
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe8202fc;
extern uint32_t _DAT_fe820300;
extern uint32_t _DAT_fe820304;
extern uint32_t _DAT_fe820360;
extern uint32_t _DAT_fe820364;
extern uint32_t _DAT_fe820368;
extern uint32_t _DAT_fe82037c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00318a55(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  ushort *puVar3;
  undefined4 local_38 [10];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  FUN_003118f0();
  iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 0xb0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    if ((*(byte *)(in_ECX + 0x12) & 3) == 3) {
      FUN_00318851(0);
    }
    FUN_003118c0(in_ECX + 0x5c);
    if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
      FUN_00317798(&local_8,(uint *)(in_ECX + 0x14));
      FUN_0031786d(local_38);
      FUN_00317a6a(&local_c);
      do {
      } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 9);
      uVar2 = 0;
      if (*(byte *)(in_ECX + 100) != 0) {
        puVar3 = (ushort *)(in_ECX + 0xc);
        do {
          _DAT_fe8202f8 = (uint)*puVar3;
          _DAT_fe820300 = local_8;
          _DAT_fe820304 = *(uint *)(in_ECX + 0x14);
          if (uVar2 != 0) {
            _DAT_fe820304 = _DAT_fe820304 | 0x400000;
          }
          _DAT_fe820360 = local_38[uVar2];
          _DAT_fe820364 = local_38[uVar2 + 3];
          _DAT_fe820368 = local_38[uVar2 + 6];
          _DAT_fe82037c = local_c;
          _DAT_fe8202fc = 0;
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar2 < *(byte *)(in_ECX + 100));
      }
    }
  }
  FUN_00311923();
  return 0;
}
