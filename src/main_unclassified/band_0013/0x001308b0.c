/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47161FAC1C891B742A706B677422F59E2F4B843B298BAB4E0D544FD98F21E075
 * Entry: 0x001308b0, Ghidra index: 3827, label: FUN_001308b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a87f4;
extern uint32_t DAT_004a87f8;
extern uint32_t DAT_004a87fc;
extern uint32_t DAT_004a8818;
extern uint32_t _DAT_004a87f4;
extern uint32_t _DAT_004a87f8;
extern uint32_t _DAT_004a87fc;
extern uint32_t _DAT_004a8800;
extern uint32_t _DAT_004a8804;
extern uint32_t _DAT_004a8808;
extern uint32_t _DAT_004a880c;
extern uint32_t _DAT_004a8810;
extern uint32_t _DAT_004a8814;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001308b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if ((DAT_004a8818 & 1) == 0) {
    DAT_004a8818 = DAT_004a8818 | 1;
    _DAT_004a87f8 = 0;
    _DAT_004a87fc = 0;
    _DAT_004a8804 = 0x3f800000;
    _DAT_004a87f4 = 0x3f800000;
    _DAT_004a8800 = 0;
    _DAT_004a8808 = 0;
    _DAT_004a880c = 0;
    _DAT_004a8810 = 0;
    _DAT_004a8814 = 0x3f800000;
  }
  if (*(int *)(in_EAX + 0x18) != 0) {
    FUN_00131e20(0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    puVar2 = *(undefined4 **)(*(int *)(in_EAX + 0x18) + 8);
    puVar7 = *(undefined4 **)(*(int *)(in_EAX + 0x18) + 4);
    puVar8 = *(undefined4 **)(param_1 + 0x168);
    if (puVar7 != puVar2) {
      puVar6 = puVar7 + 6;
      puVar5 = puVar8 + 5;
      do {
        *puVar8 = *puVar7;
        puVar5[-4] = puVar6[-5];
        puVar5[-3] = puVar6[-4];
        puVar5[1] = puVar6[-2];
        uVar3 = *(undefined4 *)(&DAT_004a87fc + puVar6[-3] * 0xc);
        iVar1 = puVar6[-3] * 0xc;
        uVar4 = *(undefined4 *)(&DAT_004a87f8 + iVar1);
        puVar5[-2] = *(undefined4 *)(&DAT_004a87f4 + iVar1);
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
