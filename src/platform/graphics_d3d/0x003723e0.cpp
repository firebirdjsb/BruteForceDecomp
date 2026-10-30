/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D5A529ADF4E9C5A8E987DAAA74161899D79D3C294B4D9F396B16D054B7E5916
 * Entry: 0x003723e0, Ghidra index: 13397, label: FUN_003723e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb60;
extern uint32_t DAT_0037bce0;
extern uint32_t DAT_0037ec88;
void FUN_003723e0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  uVar3 = 0;
  if (param_1[0xdb] == 0) {
    puVar6 = param_1 + 6;
    puVar5 = &DAT_0037bce0;
    uVar4 = uVar3;
    do {
      uVar3 = *puVar6;
      uVar1 = 1;
      if ((int)uVar3 < 0) {
        uVar1 = 0;
      }
      else if (puVar5 == &DAT_0037bb60) {
LAB_00372432:
        if ((uVar3 & 4) == 0) {
          if (((uVar3 & 0x40000000) != 0) || (((byte)uVar3 & 0xf0) == 0x30)) {
            uVar1 = 2;
          }
        }
        else {
          uVar1 = 3;
        }
      }
      else if (puVar5[-0x20] == 0x19) {
        uVar1 = 6;
      }
      else {
        if (puVar5[-0x20] != 0x1a) goto LAB_00372432;
        uVar1 = 7;
      }
      puVar5 = puVar5 + -0x20;
      uVar4 = uVar4 << 5 | uVar1;
      puVar6 = puVar6 + -1;
    } while (0x37bb5f < (int)puVar5);
  }
  else {
    uVar4 = param_1[0xde];
    if (param_1[0xdd] != 0) {
      iVar2 = 0xf;
      puVar6 = param_1 + 6;
      do {
        uVar4 = *puVar6;
        uVar1 = (uint)param_1[0xde] >> ((byte)iVar2 & 0x1f) & 0x1f;
        if (((((int)uVar4 < 0) && (uVar1 != 4)) && (uVar1 != 5)) &&
           ((uVar1 != 10 && (uVar1 != 0x11)))) {
          uVar1 = 0;
        }
        else if ((uVar1 == 0) || (3 < uVar1)) {
          if ((uVar1 == 0xd) || (uVar1 == 0xe)) {
            uVar1 = ((uVar4 & 4) != 0) + 0xd;
          }
        }
        else if ((uVar4 & 4) == 0) {
          if (((uVar4 & 0x40000000) == 0) && (((byte)uVar4 & 0xf0) != 0x30)) {
            uVar1 = 1;
          }
          else {
            uVar1 = 2;
          }
        }
        else {
          uVar1 = 3;
        }
        uVar3 = uVar3 << 5 | uVar1;
        puVar6 = puVar6 + -1;
        iVar2 = iVar2 + -5;
        uVar4 = uVar3;
      } while (-1 < iVar2);
    }
  }
  puVar5 = (undefined4 *)*param_1;
  if ((undefined4 *)param_1[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x41e70;
  puVar5[1] = uVar4;
  *param_1 = puVar5 + 2;
  return;
}
