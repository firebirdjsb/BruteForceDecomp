/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFC3BA30E7F7ACCB05E0ADC4A9FA33301DBBCD0724C41C640DA4C092416F2125
 * Entry: 0x003168e3, Ghidra index: 12153, label: FUN_003168e3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe820190;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_003168e3(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = *(int *)(param_2 + 8);
  local_8 = *(uint *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x20);
  iVar8 = (param_1 + 9) * 0x10 + in_ECX;
  if (iVar2 != 0) {
    local_10 = local_10 + iVar2;
    local_8 = local_8 - iVar2;
  }
  uVar4 = FUN_0031670a(0xffff);
  if (local_8 != 0) {
    do {
      if (0xf < *(uint *)(iVar8 + 8)) break;
      uVar5 = local_8 - local_c;
      if (uVar4 <= local_8 - local_c) {
        uVar5 = uVar4;
      }
      local_14 = FUN_0031b9f5(local_10 + local_c,uVar5,0,&local_1c);
      uVar5 = FUN_003166f1(local_1c);
      local_1c = FUN_0031670a(uVar5);
      if (uVar5 == 0) break;
      bVar1 = *(byte *)(*(int *)(in_ECX + 0x88) + 0xf);
      do {
      } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 3);
      local_18 = 0;
      if (*(byte *)(in_ECX + 100) != 0) {
        puVar6 = (ushort *)(in_ECX + 0xc);
        do {
          uVar3 = *(uint *)(in_ECX + 0x8c);
          uVar7 = (param_1 + (uint)*puVar6 * 2) * 0x10 + *(int *)(iVar8 + 8);
          _DAT_fe820190 = uVar7 & 0x3fffc0;
          uVar7 = uVar7 & 0x3f;
          *(int *)(uVar7 * 8 + -0x17dfa00) = local_14;
          local_14 = local_14 + (int)(((ulonglong)bVar1 << 1) / 8);
          local_18 = local_18 + 1;
          *(uint *)(uVar7 * 8 + -0x17df9fc) = uVar3 & 0xffff0000 | uVar5;
          puVar6 = puVar6 + 1;
        } while (local_18 < *(byte *)(in_ECX + 100));
      }
      local_c = local_c + local_1c;
      *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + local_1c;
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    } while (local_c < local_8);
    if (local_c < local_8) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + local_c;
      return local_c;
    }
  }
  FUN_00315aac(iVar8,param_2);
  return local_c;
}
