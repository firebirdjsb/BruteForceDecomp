/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32A1A877E12F04AC185352879EBB17E564C212612CEF6A47DB5D92A868C40795
 * Entry: 0x0036db30, Ghidra index: 13296, label: FUN_0036db30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037af64;
extern uint32_t DAT_0037df94;
extern uint32_t DAT_0037ec88;
void FUN_0036db30(byte param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_ESI;
  undefined8 uVar6;
  undefined1 local_170 [368];
  
  if ((param_1 & 3) != 0) {
    if (unaff_ESI[0x56f] == 3) {
      iVar5 = unaff_ESI[0x571];
      iVar1 = unaff_ESI[0x572];
      uVar2 = *(undefined4 *)(iVar1 + 4);
      uVar3 = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 4);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 8) = uVar3;
      *(undefined4 *)(iVar5 + 4) = uVar2;
    }
    FUN_0036d750();
    D3D8LTCG__D3D_CommonSetRenderTarget(unaff_ESI[0x571],0,&DAT_0037af64);
    D3D8LTCG__D3DDevice_SetTexture_4__LTCG_eax_Stage(unaff_ESI[0x570]);
    if ((param_1 & 1) != 0) {
      FUN_0036d390();
      FUN_0036d200(local_170);
    }
    puVar4 = (undefined4 *)*unaff_ESI;
    if ((undefined4 *)unaff_ESI[1] <= puVar4) {
      puVar4 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    if ((uint)unaff_ESI[0x56f] < 3) {
      if (DAT_0037df94 != -0x80000000) {
        *puVar4 = 0x40110;
        puVar4[1] = 0;
      }
      uVar6 = FUN_0036daf0();
      puVar4 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
      *puVar4 = 0x40100;
      puVar4[1] = (int)uVar6;
      puVar4[2] = 0x4012c;
      puVar4[3] = 0;
      puVar4[4] = 0x40100;
      puVar4[5] = 0;
      puVar4[6] = 0x40130;
      puVar4[7] = 0;
      puVar4 = puVar4 + 8;
    }
    else {
      *puVar4 = 0x4012c;
      puVar4[1] = 0;
      puVar4[2] = 0x40100;
      puVar4[3] = 0;
      puVar4[4] = 0x40130;
      puVar4[5] = 0;
      puVar4 = puVar4 + 6;
    }
    *unaff_ESI = (int)puVar4;
  }
  if ((param_1 & 1) != 0) {
    FUN_0036d870();
    FUN_0036d4d0(local_170);
  }
  if ((param_1 & 4) != 0) {
    FUN_0036d810();
    if (unaff_ESI[0x56f] == 3) {
      puVar4 = (undefined4 *)*unaff_ESI;
      if ((undefined4 *)unaff_ESI[1] <= puVar4) {
        puVar4 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar4 = 0x40110;
      puVar4[1] = 0;
      uVar6 = FUN_0036daf0();
      iVar5 = (int)((ulonglong)uVar6 >> 0x20);
      *(undefined4 *)(iVar5 + 8) = 0x40100;
      *(int *)(iVar5 + 0xc) = (int)uVar6;
      *unaff_ESI = iVar5 + 0x10;
    }
  }
  return;
}
