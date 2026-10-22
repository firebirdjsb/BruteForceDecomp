/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E52B6740338B298A877BCE5EFC0CB77A1EB0CA81CF6BECC6656E050EE0265767
 * Entry: 0x0031841f, Ghidra index: 12197, label: FUN_0031841f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0032f7a0;
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe820300;
extern uint32_t _DAT_fe820304;
extern uint32_t _DAT_fe820308;
extern uint32_t _DAT_fe82030c;
extern uint32_t _DAT_fe820310;
extern uint32_t _DAT_fe820314;
extern uint32_t _DAT_fe820318;
extern uint32_t _DAT_fe82031c;
extern uint32_t _DAT_fe820350;
extern uint32_t _DAT_fe820360;
extern uint32_t _DAT_fe820364;
extern uint32_t _DAT_fe820368;
extern uint32_t _DAT_fe82036c;
extern uint32_t _DAT_fe820370;
extern uint32_t _DAT_fe820374;
extern uint32_t _DAT_fe820378;
extern uint32_t _DAT_fe82037c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0031841f(void)

{
  uint uVar1;
  int in_ECX;
  ushort *puVar2;
  undefined4 local_3c [10];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_14 = 0;
  FUN_003118f0();
  if ((*(byte *)(in_ECX + 0x12) & 1) == 0) {
    local_8 = FUN_00315bfb(in_ECX);
    if (-1 < local_8) {
      puVar2 = (ushort *)(in_ECX + 0xc);
      FUN_00318408(*puVar2);
      FUN_00318d9f();
      FUN_00317798(&local_c,(uint *)(in_ECX + 0x14));
      FUN_0031786d(local_3c);
      FUN_00317a6a(&local_10);
      uVar1 = 0;
      if (*(char *)(in_ECX + 100) != '\0') {
        do {
          do {
          } while ((_DAT_fe820010 & 0xfffffffc) < 0x48);
          _DAT_fe8202f8 = (uint)*puVar2;
          _DAT_fe820304 = *(uint *)(in_ECX + 0x14);
          if (uVar1 != 0) {
            _DAT_fe820304 = _DAT_fe820304 | 0x400000;
          }
          _DAT_fe820318 = *(undefined4 *)(in_ECX + 0x18);
          _DAT_fe820308 = *(undefined4 *)(in_ECX + 0x1c);
          _DAT_fe82030c = *(undefined4 *)(in_ECX + 0x20);
          _DAT_fe820310 = *(undefined4 *)(in_ECX + 0x24);
          _DAT_fe820314 = *(undefined4 *)(in_ECX + 0x28);
          _DAT_fe820350 = *(undefined4 *)(in_ECX + 0x2c);
          _DAT_fe82036c = *(undefined4 *)(in_ECX + 0x30);
          _DAT_fe820370 = *(undefined4 *)(in_ECX + 0x34);
          _DAT_fe820374 = *(undefined4 *)(in_ECX + 0x38);
          _DAT_fe820378 = *(undefined4 *)(in_ECX + 0x3c);
          _DAT_fe820300 = local_c;
          _DAT_fe820360 = local_3c[uVar1];
          _DAT_fe820364 = local_3c[uVar1 + 3];
          _DAT_fe820368 = local_3c[uVar1 + 6];
          _DAT_fe82037c = local_10;
          _DAT_fe82031c = 0xffff;
          uVar1 = uVar1 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar1 < *(byte *)(in_ECX + 100));
      }
      if ((*(byte *)(*(int *)(in_ECX + 0x78) + 8) & 0x10) != 0) {
        (*DAT_0032f7a0)(*(undefined4 *)(in_ECX + 0x70));
        FUN_00317f6d();
      }
    }
  }
  FUN_00311923();
  return local_8;
}
