/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE5E10984166DF6B736714C3342140C60A8DB0C1945D156AFCE73570B0DD723F
 * Entry: 0x002c5dc0, Ghidra index: 10073, label: FUN_002c5dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00469f34;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002c5dc0(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  byte *unaff_EDI;
  undefined4 local_c;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  uVar4 = (uint)*(ushort *)(unaff_EDI + 0x52);
  local_c = 0;
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    iVar3 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x54) + uVar4 * 4) + 0x1c);
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      piVar6 = (int *)(*(short *)(iVar3 + 0x18) + iVar3);
      iVar3 = iVar2;
      if ((piVar6[5] & 0x3000U) == 0) {
        pbVar5 = *(byte **)(piVar6[10] + 0x90);
        if (pbVar5 == unaff_EDI) {
          pbVar5 = *(byte **)(piVar6[0x11] + 0x90);
        }
        if ((*pbVar5 & 0xc) == 0) {
          if (((*(int *)(pbVar5 + 0x60) == 0) && (FUN_002c1860(piVar6), (piVar6[5] & 0xc000U) == 0))
             && ((float)piVar6[0x15] < _DAT_00469f34)) {
            psVar1 = (short *)(*(int *)(*(int *)(unaff_EDI + 0xc) + 0xac) + 0x10);
            *psVar1 = *psVar1 + 1;
            FUN_002d30f0(piVar6,auStack_4,&iStack_8,*(undefined4 *)(unaff_EDI + 0x170),1);
            psVar1 = (short *)(*(int *)(*(int *)(unaff_EDI + 0xc) + 0xac) + 0x10);
            *psVar1 = *psVar1 + -1;
            FUN_002bbdd0();
            if (iStack_8 == 1) {
              local_c = 1;
              FUN_002bb180();
            }
          }
        }
        else if ((*unaff_EDI & 0xc) != 0) {
          (**(code **)(*piVar6 + 0x10))(1);
        }
      }
    }
  }
  return local_c;
}
