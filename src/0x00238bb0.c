/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADFAA9BC0D5B296B48372A260DE97E7F173A24E19ADB83699087C65EB2960BB8
 * Entry: 0x00238bb0, Ghidra index: 7887, label: FUN_00238bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_004432d0;
extern uint32_t DAT_004432d4;
extern uint32_t DAT_004432e4;
extern uint32_t DAT_004432e8;
extern uint32_t DAT_004698c4;
extern uint32_t DAT_004698e0;
extern uint32_t _DAT_004432d0;
extern uint32_t _DAT_004432d8;
extern uint32_t _DAT_004432dc;
extern uint32_t _DAT_004432e0;
extern uint32_t _DAT_004432e4;
extern uint32_t _DAT_004432ec;
extern uint32_t _DAT_004432f0;
extern uint32_t _DAT_004432f4;
extern uint32_t _DAT_004698c8;
extern uint32_t _DAT_004698f0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00238bb0(void)

{
  undefined4 *puVar1;
  undefined1 *in_EAX;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  
  *in_EAX = 1;
  DAT_004698e0 = in_EAX;
  *(int *)(in_EAX + 4) = in_ECX;
  if (in_ECX != 0) {
    D3D8__D3D_g_pDevice[0x13f] = D3D8__D3D_g_pDevice[0x13f] + 1;
  }
  _DAT_004698f0 = in_ECX;
  FUN_00238d00(in_EAX);
  if (in_ECX != 0) {
    puVar2 = (undefined1 *)FUN_00237d00(0x84,0);
    DAT_004432e8 = 0;
    _DAT_004432ec = 0;
    _DAT_004432f4 = 0;
    *puVar2 = 0xff;
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    DAT_004432e8 = (uint)(puVar2 + DAT_004432e8) & 0xfffffff;
    DAT_004432d4 = 0;
    _DAT_004432d8 = 0;
    _DAT_004432e4 = 0x40001;
    _DAT_004432f0 = 0x1062a;
    _DAT_004432e0 = 0;
    puVar2[0x80] = 0;
    puVar2[0x81] = 0;
    puVar2[0x82] = 0;
    puVar2[0x83] = 0;
    _DAT_004432dc = 0x1062a;
    DAT_004432d4 = (uint)(puVar2 + 0x80 + DAT_004432d4) & 0xfffffff;
    _DAT_004432d0 = 0x40001;
    DAT_004698c4 = &DAT_004432e4;
    _DAT_004698c8 = &DAT_004432d0;
    iVar4 = 0;
    do {
      puVar1 = D3D8__D3D_g_pDevice;
      puVar3 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar3) {
        puVar3 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar3 = 0x817c8;
      puVar3[1] = 1;
      puVar3[2] = 1;
      *puVar1 = puVar3 + 3;
      D3D8LTCG__D3DDevice_EndVisibilityTest_0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1000);
  }
  return;
}
