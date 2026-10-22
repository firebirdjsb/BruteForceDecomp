/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8371341E06329115378E22CE0E7491A41F7607FA8EC6118506637C7ED2F3B5C7
 * Entry: 0x00319762, Ghidra index: 12230, label: CMcpxBuffer_SetCurrentPosition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff48;
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe8202fc;
extern uint32_t _DAT_fe8203d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int DSOUND__CMcpxBuffer_SetCurrentPosition(uint param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  int in_ECX;
  uint uVar3;
  int local_8;
  
  local_8 = 0;
  if ((*(byte *)(in_ECX + 0x12) & 3) == 3) {
    do {
    } while ((*(uint *)((uint)*(ushort *)(in_ECX + 10 + (uint)*(byte *)(in_ECX + 100) * 2) * 0x80 +
                        0x54 + DAT_0032ff48) & 0x100000) != 0);
    if (((*(ushort *)(in_ECX + 0x12) & 0x203) == 0x203) &&
       ((uint)(*(int *)(*(int *)(in_ECX + 0x88) + 0xcc) + *(int *)(*(int *)(in_ECX + 0x88) + 200))
        <= param_1)) {
      local_8 = CMcpxBuffer_Play(0);
      if (local_8 < 0) goto LAB_00319849;
    }
    uVar1 = FUN_003166f1(param_1);
    FUN_003118f0();
    do {
    } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) << 2);
    uVar3 = 0;
    if (*(byte *)(in_ECX + 100) != 0) {
      puVar2 = (ushort *)(in_ECX + 0xc);
      do {
        _DAT_fe8202f8 = (uint)*puVar2;
        _DAT_fe8202fc = 0;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
        _DAT_fe8203d8 = uVar1;
      } while (uVar3 < *(byte *)(in_ECX + 100));
    }
    FUN_00311923();
  }
  else {
    *(uint *)(in_ECX + 0x150) = param_1;
  }
LAB_00319849:
  FUN_003194ea();
  return local_8;
}
