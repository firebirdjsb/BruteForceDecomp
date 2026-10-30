/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C82FAB7A73B2EDCC1A3133859F53E1E10AD75731B263A28E9F46C57ED5330645
 * Entry: 0x0027e050, Ghidra index: 9007, label: FUN_0027e050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038cd48;
extern uint32_t DAT_0038cdc0;
extern uint32_t DAT_0038d38f;
extern uint32_t DAT_0038d490;
extern uint32_t DAT_0038d590;
extern uint32_t DAT_0038d690;
extern uint32_t DAT_0038d708;
void FUN_0027e050(int param_1,int param_2)

{
  ushort uVar1;
  int in_EAX;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = 0;
  if (*(int *)(in_EAX + 0x1698) != 0) {
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(in_EAX + 0x169c) + uVar3 * 2);
      uVar8 = (uint)*(byte *)(uVar3 + *(int *)(in_EAX + 0x1690));
      uVar3 = uVar3 + 1;
      iVar4 = *(int *)(in_EAX + 0x16b4);
      bVar2 = (byte)iVar4;
      if (uVar7 == 0) {
        uVar7 = (uint)*(ushort *)(param_1 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar7) < iVar4) {
          uVar1 = *(ushort *)(param_1 + uVar8 * 4);
          *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << (bVar2 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          iVar4 = *(int *)(in_EAX + 0x14) + 1;
          *(int *)(in_EAX + 0x14) = iVar4;
          *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10 + uVar7;
          *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | *(short *)(param_1 + uVar8 * 4) << (bVar2 & 0x1f);
          iVar4 = iVar4 + uVar7;
        }
LAB_0027e39b:
        *(int *)(in_EAX + 0x16b4) = iVar4;
      }
      else {
        uVar5 = (uint)(byte)(&DAT_0038d590)[uVar8];
        uVar10 = (uint)*(ushort *)(param_1 + 0x406 + uVar5 * 4);
        if ((int)(0x10 - uVar10) < iVar4) {
          uVar1 = *(ushort *)(param_1 + 0x404 + uVar5 * 4);
          *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << (bVar2 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          iVar4 = *(int *)(in_EAX + 0x14) + 1;
          *(int *)(in_EAX + 0x14) = iVar4;
          *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
          iVar4 = *(int *)(in_EAX + 0x16b4);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(uint *)(in_EAX + 0x16b4) = iVar4 + -0x10 + uVar10;
          *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar4 & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) |
               *(short *)(param_1 + 0x404 + uVar5 * 4) << (bVar2 & 0x1f);
          *(uint *)(in_EAX + 0x16b4) = iVar4 + uVar10;
        }
        iVar4 = *(int *)(&DAT_0038cd48 + uVar5 * 4);
        if (iVar4 != 0) {
          iVar9 = uVar8 - *(int *)(&DAT_0038d690 + uVar5 * 4);
          iVar6 = *(int *)(in_EAX + 0x16b4);
          if (0x10 - iVar4 < iVar6) {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar9 << ((byte)iVar6 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            iVar6 = *(int *)(in_EAX + 0x14) + 1;
            *(int *)(in_EAX + 0x14) = iVar6;
            *(undefined1 *)(iVar6 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar6 = *(int *)(in_EAX + 0x16b4) + -0x10;
            *(ushort *)(in_EAX + 0x16b0) =
                 (ushort)iVar9 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar9 << ((byte)iVar6 & 0x1f));
          }
          *(int *)(in_EAX + 0x16b4) = iVar6 + iVar4;
        }
        uVar8 = uVar7 - 1;
        if (uVar8 < 0x100) {
          bVar2 = (&DAT_0038d38f)[uVar7];
        }
        else {
          bVar2 = (&DAT_0038d490)[uVar8 >> 7];
        }
        uVar5 = (uint)bVar2;
        uVar7 = (uint)*(ushort *)(param_2 + 2 + uVar5 * 4);
        iVar4 = *(int *)(in_EAX + 0x16b4);
        if ((int)(0x10 - uVar7) < iVar4) {
          uVar1 = *(ushort *)(param_2 + uVar5 * 4);
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar4 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          iVar4 = *(int *)(in_EAX + 0x14) + 1;
          *(int *)(in_EAX + 0x14) = iVar4;
          *(undefined1 *)(iVar4 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
          iVar4 = *(int *)(in_EAX + 0x16b4);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(uint *)(in_EAX + 0x16b4) = iVar4 + -0x10 + uVar7;
          *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar4 & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) |
               *(short *)(param_2 + uVar5 * 4) << ((byte)iVar4 & 0x1f);
          *(uint *)(in_EAX + 0x16b4) = iVar4 + uVar7;
        }
        iVar4 = *(int *)(&DAT_0038cdc0 + uVar5 * 4);
        if (iVar4 != 0) {
          iVar9 = uVar8 - *(int *)(&DAT_0038d708 + uVar5 * 4);
          iVar6 = *(int *)(in_EAX + 0x16b4);
          if (0x10 - iVar4 < iVar6) {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar9 << ((byte)iVar6 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            iVar6 = *(int *)(in_EAX + 0x14) + 1;
            *(int *)(in_EAX + 0x14) = iVar6;
            *(undefined1 *)(iVar6 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10 + iVar4;
            *(ushort *)(in_EAX + 0x16b0) =
                 (ushort)iVar9 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar9 << ((byte)iVar6 & 0x1f));
            iVar4 = iVar6 + iVar4;
          }
          goto LAB_0027e39b;
        }
      }
    } while (uVar3 < *(uint *)(in_EAX + 0x1698));
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x402);
  iVar4 = *(int *)(in_EAX + 0x16b4);
  if (iVar4 <= (int)(0x10 - uVar3)) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | *(short *)(param_1 + 0x400) << ((byte)iVar4 & 0x1f);
    *(uint *)(in_EAX + 0x16b4) = iVar4 + uVar3;
    *(uint *)(in_EAX + 0x16ac) = (uint)*(ushort *)(param_1 + 0x402);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x400);
  *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar4 & 0x1f);
  *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = *(undefined1 *)(in_EAX + 0x16b0)
  ;
  iVar4 = *(int *)(in_EAX + 0x14) + 1;
  *(int *)(in_EAX + 0x14) = iVar4;
  *(undefined1 *)(*(int *)(in_EAX + 8) + iVar4) = *(undefined1 *)(in_EAX + 0x16b1);
  iVar4 = *(int *)(in_EAX + 0x16b4);
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  *(uint *)(in_EAX + 0x16b4) = iVar4 + -0x10 + uVar3;
  *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar4 & 0x1f);
  *(uint *)(in_EAX + 0x16ac) = (uint)*(ushort *)(param_1 + 0x402);
  return;
}
