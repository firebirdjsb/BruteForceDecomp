/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9EF46391D91AEDB6721F8D1037F85439AEE2F4DF82124ECFD54292F0FD9918FA
 * Entry: 0x00069390, Ghidra index: 1163, label: FUN_00069390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffc14;
extern uint32_t DAT_0040de38;
extern uint32_t DAT_00469b3c;
extern uint32_t DAT_004a5c20;
extern uint32_t DAT_004a5c24;
extern uint32_t _DAT_00469910;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00069390(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  _DAT_00469910 = 2;
  if (((*(byte *)(unaff_ESI + 4) & 1) == 0) && (DAT_00469b3c != 0)) {
    while( true ) {
      if ((int)DAT_004a5c24 < (int)DAT_004a5c20) {
        iVar1 = (DAT_004a5c24 - DAT_004a5c20) + 8;
      }
      else {
        iVar1 = DAT_004a5c24 - DAT_004a5c20;
      }
      if (iVar1 < DAT_003ffc14) break;
      D3D8LTCG__D3D_BlockOnTime(*(undefined4 *)(&DAT_0040de38 + DAT_004a5c20 * 4),4);
      DAT_004a5c20 = DAT_004a5c20 + 1 & 7;
    }
  }
  (**(code **)(**(int **)(unaff_ESI + 8) + 0x14))();
  if (DAT_00469b3c != 0) {
    uVar2 = D3D8LTCG__D3D_SetFence(0);
    *(undefined4 *)(&DAT_0040de38 + DAT_004a5c24 * 4) = uVar2;
    DAT_004a5c24 = DAT_004a5c24 + 1 & 7;
  }
  D3D8LTCG__D3DDevice_Swap_0();
  *(byte *)(unaff_ESI + 4) = *(byte *)(unaff_ESI + 4) & 0xfe;
  return;
}
