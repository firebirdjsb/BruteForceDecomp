/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A3146FA65C524248F90858A55FA9F7215110623E1F757EDA20EF14A94B92AE1
 * Entry: 0x00254c60, Ghidra index: 8418, label: FUN_00254c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfc8;
extern uint32_t DAT_0046cfd4;
extern char s_23_23_ISchema_00406e3c[];
undefined4 FUN_00254c60(undefined4 param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  uint in_EAX;
  int iVar5;
  undefined1 *puVar6;
  uint unaff_EBX;
  int *piVar7;
  int *unaff_EBP;
  byte bVar8;
  uint uVar9;
  int *piStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int iStack_118;
  int iStack_110;
  undefined1 local_10c [8];
  undefined1 local_104 [236];
  int iStack_18;
  undefined4 uStack_14;
  int iStack_8;
  int *piStack_4;
  
  puStack_128 = local_10c;
  puStack_12c = local_104;
  piStack_130 = param_2;
  (**(code **)(*param_2 + 0x24))();
  piVar7 = (int *)(in_EAX & 0xfff);
  if ((in_EAX & 0x800) != 0) {
    bVar8 = 0xb;
    do {
      iVar5 = FUN_00281d30();
      if (iVar5 < 0) {
        return 0x80004005;
      }
      bVar1 = bVar8 & 0x1f;
      bVar8 = bVar8 + 0xf;
      piVar7 = (int *)((uint)piVar7 | (unaff_EBX & 0x7fff) << bVar1);
    } while ((char)(unaff_EBX >> 8) < '\0');
  }
  uVar9 = (int)piVar7 * iStack_118;
  puVar6 = local_10c;
  if ((iStack_110 == 0xd) || (iStack_110 == 0xe)) {
    bVar3 = false;
    bVar2 = false;
    (**(code **)(*piStack_4 + 4))(piStack_4);
    if ((*(byte *)(iStack_18 + 0x1c) & 3) != 0) {
      piStack_130 = (int *)0x0;
      if (unaff_EBP != DAT_0046cfc8) {
        do {
          if (unaff_EBP == DAT_0046cfd4) {
            bVar3 = true;
          }
          bVar2 = false;
          if (piStack_130 != (int *)0x0) {
            (**(code **)(*piStack_130 + 8))(piStack_130);
            piStack_130 = (int *)0x0;
          }
          (**(code **)(*unaff_EBP + 0x18))(unaff_EBP,&piStack_130);
          piVar7 = piStack_130;
          if (piStack_130 == (int *)0x0) goto LAB_00254de0;
          if (unaff_EBP != (int *)0x0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
            unaff_EBP = (int *)0x0;
          }
          (**(code **)(*piVar7 + 0x10))(piVar7,s_23_23_ISchema_00406e3c,&stack0xfffffecc);
        } while (unaff_EBP != DAT_0046cfc8);
      }
      bVar3 = false;
      bVar2 = true;
      if (piStack_130 != (int *)0x0) {
        (**(code **)(*piStack_130 + 8))(piStack_130);
      }
    }
LAB_00254de0:
    if (bVar2) {
      (**(code **)(**(int **)(iStack_18 + 0x14) + 0x10))
                (*(int **)(iStack_18 + 0x14),&stack0xfffffee4,4,0);
    }
    else if (bVar3) {
      FUN_00252ca0(*(undefined4 *)(iStack_18 + 0x14));
    }
    else {
      FUN_00252ca0(*(undefined4 *)(iStack_18 + 0x14));
      puVar4 = puStack_128;
      if ((undefined1 *)0x100 < puStack_128) {
        puVar6 = (undefined1 *)thunk_FUN_002ea01d(puStack_128);
        puStack_12c = puVar6;
      }
      (**(code **)(**(int **)(iStack_18 + 0x14) + 0x10))
                (*(int **)(iStack_18 + 0x14),puVar6,puVar4,0);
    }
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
  }
  else {
    if (0x100 < uVar9) {
      puVar6 = (undefined1 *)thunk_FUN_002ea01d(uVar9);
    }
    (**(code **)(**(int **)(iStack_8 + 0x14) + 0x10))(*(int **)(iStack_8 + 0x14),puVar6,uVar9,0);
    piStack_4 = piVar7;
  }
  piVar7 = *(int **)(iStack_18 + 8);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x34))(piVar7,uStack_14,puVar6,puStack_128,piStack_4);
  }
  if (puStack_12c == (undefined1 *)0x0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(puStack_12c);
}
