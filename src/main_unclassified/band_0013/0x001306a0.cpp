/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86CDEAF44219FC23EEA403A8EE333366AD84DF13F995C75A605FA96F8A12C23B
 * Entry: 0x001306a0, Ghidra index: 3826, label: FUN_001306a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a881c;
extern uint32_t DAT_004a8820;
extern uint32_t DAT_004a8824;
extern uint32_t DAT_004a8840;
extern uint32_t _DAT_004a881c;
extern uint32_t _DAT_004a8820;
extern uint32_t _DAT_004a8824;
extern uint32_t _DAT_004a8828;
extern uint32_t _DAT_004a882c;
extern uint32_t _DAT_004a8830;
extern uint32_t _DAT_004a8834;
extern uint32_t _DAT_004a8838;
extern uint32_t _DAT_004a883c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001306a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if ((DAT_004a8840 & 1) == 0) {
    DAT_004a8840 = DAT_004a8840 | 1;
    _DAT_004a8820 = 0;
    _DAT_004a8824 = 0;
    _DAT_004a882c = 0x3f800000;
    _DAT_004a881c = 0x3f800000;
    _DAT_004a8828 = 0;
    _DAT_004a8830 = 0;
    _DAT_004a8834 = 0;
    _DAT_004a8838 = 0;
    _DAT_004a883c = 0x3f800000;
  }
  if (*(int *)(in_EAX + 0x1c) != 0) {
    *(undefined4 *)(in_ECX + 0x67c) = *(undefined4 *)(*(int *)(in_EAX + 0x1c) + 4);
    *(undefined4 *)(in_ECX + 0x680) = *(undefined4 *)(*(int *)(in_EAX + 0x1c) + 8);
    *(undefined4 *)(in_ECX + 0x684) = **(undefined4 **)(in_EAX + 0x1c);
    FUN_00131e20(0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    puVar2 = *(undefined4 **)(*(int *)(in_EAX + 0x1c) + 0x14);
    puVar7 = *(undefined4 **)(*(int *)(in_EAX + 0x1c) + 0x10);
    puVar8 = *(undefined4 **)(in_ECX + 0x178);
    if (puVar7 != puVar2) {
      puVar6 = puVar7 + 6;
      puVar5 = puVar8 + 5;
      do {
        *puVar8 = *puVar7;
        puVar5[-4] = puVar6[-5];
        puVar5[-3] = puVar6[-4];
        puVar5[1] = puVar6[-2];
        uVar3 = *(undefined4 *)(&DAT_004a8824 + puVar6[-3] * 0xc);
        iVar1 = puVar6[-3] * 0xc;
        uVar4 = *(undefined4 *)(&DAT_004a8820 + iVar1);
        puVar5[-2] = *(undefined4 *)(&DAT_004a881c + iVar1);
        puVar5[-1] = uVar4;
        *puVar5 = uVar3;
        uVar3 = puVar6[1];
        uVar4 = *puVar6;
        puVar5[2] = puVar6[-1];
        puVar5[3] = uVar4;
        puVar5[4] = uVar3;
        uVar3 = puVar6[4];
        uVar4 = puVar6[3];
        puVar5[5] = puVar6[2];
        puVar5[6] = uVar4;
        puVar5[7] = uVar3;
        puVar7 = puVar7 + 0xb;
        puVar6 = puVar6 + 0xb;
        puVar8 = puVar8 + 0xe;
        puVar5 = puVar5 + 0xe;
      } while (puVar7 != puVar2);
    }
  }
  return;
}
