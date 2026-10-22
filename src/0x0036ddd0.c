/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67DEC81E66E81941FC0D2864617C173294CD8D42F4324626A50648C98DAF3A3A
 * Entry: 0x0036ddd0, Ghidra index: 13298, label: FUN_0036ddd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b830;
extern uint32_t DAT_0037b834;
void FUN_0036ddd0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_EBX;
  uint uVar3;
  undefined4 unaff_ESI;
  int iVar4;
  int unaff_EDI;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_4 [4];
  
  uVar3 = *(uint *)(unaff_EDI + 0x17cc);
  uVar2 = *(undefined4 *)(unaff_EDI + 0x17d0);
  D3D8LTCG__D3D_BlockOnTime(*(undefined4 *)(D3D8__D3D_g_pDevice + 0x2c),2);
  if ((*(uint *)(unaff_EDI + 0x197c) & 0x1000000) != 0) {
    uVar3 = uVar3 >> 1;
  }
  iVar4 = 0;
  do {
    iVar1 = D3D8__D3D_g_pDevice;
    uVar6 = 0;
    uVar5 = 0;
    *(undefined4 *)(D3D8__D3D_g_pDevice + 0x1960) = 0;
    KeWaitForSingleObject(iVar1 + 0x195c,6,1,0,0);
    iVar4 = AvSetDisplayMode(uVar5,iVar4,uVar2,unaff_ESI,uVar3,uVar6);
  } while (iVar4 != 0);
  if ((*(uint *)(unaff_EDI + 0x197c) & 0x1000000) != 0) {
    AvSendTVEncoderOption(*(undefined4 *)(unaff_EDI + 0x17c8),0xb,0,0);
  }
  puVar7 = auStack_4;
  AvSendTVEncoderOption(*(undefined4 *)(unaff_EDI + 0x17c8),0xf,0,puVar7);
  if (((*(uint *)(unaff_EDI + 0x1988) ^ unaff_EBX) & 1) == 0) {
    *(uint *)(unaff_EDI + 0x1988) = *(uint *)(unaff_EDI + 0x1988) + 1;
  }
  DAT_0037b834 = 0;
  DAT_0037b830 = 0;
  FUN_00374e25();
  iVar4 = AvGetSavedDataAddress();
  if (iVar4 != 0) {
    uVar2 = MmQueryAllocationSize(iVar4);
    MmPersistContiguousMemory(iVar4,uVar2,0);
    MmFreeContiguousMemory(iVar4);
    AvSetSavedDataAddress(0);
  }
  AvSendTVEncoderOption(puVar7,9,0,0);
  *(undefined4 *)(unaff_EDI + 0x1980) = 0;
  return;
}
