/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C644859DBAB780E0B8534AA6E4B34E06E370FFAC1074053A0619091855236454
 * Entry: 0x0031b68e, Ghidra index: 12299, label: FUN_0031b68e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f75c;
extern uint32_t DAT_0032ff2c;
extern uint32_t DAT_0032ff30;
extern uint32_t DAT_0032ffb8;
extern uint32_t DAT_0032ffbc;
extern uint32_t DAT_0032ffc8;
extern uint32_t DAT_fe804028;
extern uint32_t _DAT_fe80204c;
extern uint32_t _DAT_fe8020e0;
extern uint32_t _DAT_fe85ff00;
extern uint32_t _DAT_fe85ff04;
extern uint32_t _DAT_fe85ff10;
extern uint32_t _DAT_fe85ff14;
extern uint32_t _DAT_fe85ff5c;
extern uint32_t _DAT_fe85fffc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b68e(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  int local_10;
  int local_c;
  uint local_8;
  
  _DAT_fe85fffc = 1;
  bVar9 = *(int *)(in_ECX + 0x10) == 0;
  if (bVar9) {
    iVar3 = FUN_003148cf(0x626f5344,0xc,1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0031c94f();
    }
    *(undefined4 *)(in_ECX + 0x10) = uVar4;
    FUN_0031ca61(*(undefined4 *)(in_ECX + 0xc));
  }
  iVar3 = DAT_0032ffb8;
  _DAT_fe80204c = DAT_0032ffbc;
  _DAT_fe85ff00 = 0;
  _DAT_fe85ff04 = 0;
  _DAT_fe8020e0 = (DAT_0032ff30 >> 0xc) - 1;
  local_c = 0;
  piVar8 = (int *)&DAT_fe804028;
  puVar6 = &DAT_0032f75c;
  local_10 = 2;
  do {
    local_8 = 0;
    if ((*puVar6 & 0xfffff000) != 0) {
      iVar7 = local_c << 0xc;
      piVar5 = (int *)(iVar3 + local_c * 8);
      do {
        iVar2 = DAT_0032ff2c;
        piVar5[1] = 0;
        local_8 = local_8 + 1;
        *piVar5 = iVar2 + iVar7;
        iVar7 = iVar7 + 0x1000;
        piVar5 = piVar5 + 2;
      } while (local_8 < *puVar6 >> 0xc);
    }
    iVar7 = local_c * 0x1000;
    piVar8[-1] = iVar7;
    local_c = local_c + local_8;
    *piVar8 = *puVar6 + iVar7;
    puVar6 = puVar6 + 1;
    piVar8 = piVar8 + 4;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  if (bVar9) {
    FUN_0031c9d7(0,0x2000);
    FUN_0031c9ff(1,0x4000);
    FUN_003158d8(&DAT_0032ffc8,1);
    uVar1 = *(uint *)(*(int *)(in_ECX + 4) + 8);
    if (((uVar1 & 0xffff) != 2) && ((uVar1 & 0x10000) == 0)) {
      iVar3 = FUN_0031c95c();
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(uint *)(iVar3 + 0xc) = ((*(uint *)(*(int *)(in_ECX + 4) + 8) & 0xffff) != 1) + 1;
    }
  }
  _DAT_fe85ff5c = 0;
  _DAT_fe85ff10 = 1;
  _DAT_fe85ff14 = 0xffffffff;
  _DAT_fe85fffc = 3;
  return;
}
