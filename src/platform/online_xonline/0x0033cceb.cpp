/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E78E557D988BA9F1EA9C50823844E8640AAF1AB8877D1B912FE535BB2950FC4
 * Entry: 0x0033cceb, Ghidra index: 12567, label: FUN_0033cceb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0948;
extern uint32_t DAT_004b094c;
extern uint32_t DAT_004b0950;
int FUN_0033cceb(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0xffffffff;
  local_14 = param_2[2];
  *param_2 = 0;
  in_ECX[0x211] = 0;
  local_c = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  if (*(short *)(&DAT_004b0948 + *in_ECX * 10) != 0) {
    do {
      if (*param_2 != 0) goto LAB_0033ce85;
      FUN_0033be1d(local_8);
      if (*(char *)(in_ECX[0x20b] * 0x200 + in_ECX[0x20c] + in_ECX[3]) == '*') {
        if (local_c == 0) {
          FUN_0033bba7(in_ECX + 0x209);
          local_c = 1;
        }
      }
      else {
        FUN_0033c0d7(in_ECX[3],in_ECX + 0x209,*(ushort *)(&DAT_004b094c + *in_ECX * 10) + 5,
                     in_ECX + 9);
        local_18 = (undefined4 *)((int)in_ECX + 0x29);
        iVar2 = FUN_0033c472(local_14,local_18);
        *param_2 = iVar2;
        if (iVar2 == 0) {
          if (local_c == 0) {
            uVar3 = *(uint *)((int)in_ECX + 0x25);
            if (uVar3 < local_10) {
              FUN_0033bba7(in_ECX + 0x209);
              local_10 = uVar3;
            }
            else if (*(uint *)(in_ECX[5] + 0x14) <= uVar3) {
              FUN_0033bba7(in_ECX + 0x209);
              local_10 = 0;
            }
          }
        }
        else {
          in_ECX[0x211] = in_ECX[0x209];
          if (param_1 != 0) {
            uVar1 = *(ushort *)(&DAT_004b094c + *in_ECX * 10);
            puVar4 = local_18;
            puVar5 = (undefined4 *)param_2[2];
            for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
              puVar5 = (undefined4 *)((int)puVar5 + 1);
            }
          }
          param_2[1] = (uint)(*(short *)(&DAT_004b0950 + *in_ECX * 10) != 0);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(ushort *)(&DAT_004b0948 + *in_ECX * 10));
  }
  if (*param_2 == 0) {
    FUN_0033bba7(&local_30);
    in_ECX[0x211] = in_ECX[0x209];
  }
LAB_0033ce85:
  return *param_2;
}
