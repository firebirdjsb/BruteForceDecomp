/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 703C2484351F7559A498676A980D6BC50D11A47482EBEE1A0D8FB2215BA07ABA
 * Entry: 0x00317f6d, Ghidra index: 12191, label: FUN_00317f6d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_fe820400;
extern uint32_t PTR_DAT_0032f688;
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe820160;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe82031c;
extern uint32_t _DAT_fe82043c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00317f6d(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined **ppuVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  undefined4 *local_8;
  
  FUN_003118f0();
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0x78) + 0xb4) + 0x3c) != 2) {
    ppuVar5 = (undefined **)(*(int *)(in_ECX + 0x70) + 0x3c);
    if ((*ppuVar5 != (undefined *)0x0) && (*(int *)(*(int *)(in_ECX + 0x70) + 0x40) != 0))
    goto LAB_00317fa8;
  }
  ppuVar5 = &PTR_DAT_0032f688;
LAB_00317fa8:
  bVar4 = *(byte *)(in_ECX + 0x66);
  *(bool *)(in_ECX + 0x66) = bVar4 == 0;
  do {
  } while ((_DAT_fe820010 & 0xfffffffc) < 0x4c);
  _DAT_fe82031c = (uint)bVar4 + (uint)*(ushort *)(in_ECX + 0xc) * 2 & 0xffff;
  iVar7 = 0;
  local_8 = (undefined4 *)&DAT_fe820400;
  _DAT_fe820160 = _DAT_fe82031c;
  do {
    iVar1 = iVar7 * 2;
    iVar2 = iVar7 * 2;
    puVar3 = local_8 + 1;
    iVar7 = iVar7 + 1;
    *local_8 = CONCAT31(CONCAT21(CONCAT11((ppuVar5[1] + iVar1)[1],(*ppuVar5 + iVar2)[1]),
                                 ppuVar5[1][iVar1]),(*ppuVar5)[iVar2]);
    local_8 = puVar3;
  } while ((int)puVar3 < -0x17dfbc4);
  if (*(float *)(*(int *)(in_ECX + 0x70) + 0x10) < 0.0) {
    uVar6 = -(uint)(byte)ppuVar5[1][0x1f];
  }
  else {
    uVar6 = (uint)(byte)(*ppuVar5)[0x1f];
  }
  _DAT_fe82043c = uVar6 << 0x19 | (uint)CONCAT11(ppuVar5[1][iVar7 * 2],(*ppuVar5)[iVar7 * 2]);
  _DAT_fe8202f8 = (uint)*(ushort *)(in_ECX + 0xc);
  FUN_00311923();
  return;
}
