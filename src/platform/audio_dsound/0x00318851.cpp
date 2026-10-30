/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52CD518A1465F69FAE6B5C122746023A4442C75E7395404044DE2734FB6F1593
 * Entry: 0x00318851, Ghidra index: 12204, label: FUN_00318851
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe820128;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe820304;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00318851(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int *in_ECX;
  uint uVar4;
  
  puVar2 = (ushort *)((int)in_ECX + 0x12);
  FUN_00317e87(*puVar2 & 0xffbf);
  if ((*(byte *)puVar2 & 3) == 3) {
    FUN_003118f0();
    *(int *)(in_ECX[2] + 700) = *(int *)(in_ECX[2] + 700) + 1;
    FUN_003174e3();
    *(ushort *)((int)in_ECX + 0x16) = *(ushort *)((int)in_ECX + 0x16) & 0xfd7f;
    if (*(byte *)((int)in_ECX + 0x65) < 3) {
      FUN_00318d9f();
      do {
      } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 0x19) * 3);
      uVar4 = 0;
      if (*(byte *)(in_ECX + 0x19) != 0) {
        puVar2 = (ushort *)(in_ECX + 3);
        do {
          _DAT_fe8202f8 = (uint)*puVar2;
          _DAT_fe820304 = in_ECX[5];
          if (uVar4 != 0) {
            _DAT_fe820304 = _DAT_fe820304 | 0x400000;
          }
          _DAT_fe820128 = (uint)*puVar2;
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar4 < *(byte *)(in_ECX + 0x19));
      }
    }
    *(int *)(in_ECX[2] + 700) = *(int *)(in_ECX[2] + 700) + -1;
    KeQuerySystemTime(in_ECX + 0x20);
    if (param_1 == 0) {
      (**(code **)(*in_ECX + 0x18))(0,0,0,0);
    }
    if (((*(int *)(in_ECX[0x1e] + 0xb0) != 0) &&
        (iVar1 = *(int *)(*(int *)(in_ECX[0x1e] + 0xb0) + 0x20), iVar1 != 0)) &&
       ((*(uint *)(*(int *)(iVar1 + 0x88) + 8) & 0x82000) != 0)) {
      for (puVar3 = *(undefined4 **)(iVar1 + 0x44); puVar3 != (undefined4 *)(iVar1 + 0x44);
          puVar3 = (undefined4 *)*puVar3) {
        if ((*(byte *)((int)puVar3 + -0x4a) & 3) == 3) goto LAB_00318962;
      }
      DSOUND__CMcpxBuffer_Stop(0);
    }
LAB_00318962:
    FUN_00311923();
  }
  else if ((*puVar2 & 0x8000) == 0) {
    (**(code **)(*in_ECX + 0x1c))(0);
  }
  if (param_1 != 0) {
    FUN_00318786();
  }
  return;
}
