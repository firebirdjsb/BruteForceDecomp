/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA817076431D9C9DD85767B5D62663ADE879485F92509DDBE091902A82821BE3
 * Entry: 0x00331db8, Ghidra index: 12400, label: FUN_00331db8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b75d4;
void FUN_00331db8(int param_1)

{
  uint *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar4 = param_1;
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 6) {
    iVar7 = param_1 + 0x34;
    iVar6 = FUN_0033136c(iVar7);
    if (iVar6 == 0x1500f0) {
      FUN_00330ddd(iVar7,iVar4 + 0x4c);
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfffeffff | 0x20000;
      *(int *)(iVar4 + 0x68) = iVar4 + 0xa4;
      *(undefined4 *)(iVar4 + 100) = 0x5c0;
      FUN_0033f147(*(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x4c),(undefined4 *)(iVar4 + 100),1,0,
                   *(undefined4 *)(iVar4 + 8),iVar4 + 0x6c);
      iVar6 = FUN_00331b13(iVar4);
      if (-1 < iVar6) {
        uVar5 = FUN_0033f0ca(iVar4 + 0x6c,0);
        if (-1 < (int)uVar5) {
          *(undefined4 *)(iVar4 + 0x10) = 8;
          goto LAB_00332190;
        }
        *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
             *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfffffe7f | 0x200;
        iVar7 = *(int *)(in_ECX + 0xb8);
        goto LAB_00332080;
      }
    }
    else {
      if (-1 < iVar6) goto LAB_00332190;
      pbVar3 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x32);
      *pbVar3 = *pbVar3 | 3;
    }
LAB_0033218d:
    *(int *)(iVar4 + 0xc) = iVar6;
  }
  else {
    if (iVar7 != 8) {
      if ((iVar7 == 0x12) && (uVar5 = XAPILIB__GetTickCount(), *(uint *)(iVar4 + 0x1c) <= uVar5)) {
        *(undefined4 *)(iVar4 + 0x10) = 99;
        *(undefined4 *)(iVar4 + 0xc) = 0x1500f0;
      }
      goto LAB_00332190;
    }
    iVar7 = param_1 + 0x6c;
    uVar5 = FUN_00330c3e(iVar7);
    if (uVar5 == 0x1500f0) {
      param_1 = 0;
      FUN_0033eec2(iVar7,&param_1,0,0);
      uVar5 = FUN_00340cf7(iVar4 + 0xa4,param_1,*(undefined4 *)(iVar4 + 0x664));
      uVar8 = uVar5 & 0xffff;
      if ((uVar8 == 0x25) || (uVar8 == 0x19)) {
        if (*(uint *)(iVar4 + 0x14) < 2) {
          *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) + 1;
          iVar6 = FUN_00331b13(iVar4);
          if (iVar6 < 0) goto LAB_0033218d;
          goto LAB_0033201c;
        }
        iVar7 = *(int *)(in_ECX + 0xb8);
        uVar8 = *(uint *)(iVar7 + 0x30) & 0xfffffdff | 0x180;
        goto LAB_0033207b;
      }
      if (uVar5 == 0xc000006d) {
LAB_0033201c:
        uVar5 = FUN_0033f0ca(iVar7,0);
        if (-1 < (int)uVar5) goto LAB_00332190;
        iVar7 = *(int *)(in_ECX + 0xb8);
        uVar8 = *(uint *)(iVar7 + 0x30) & 0xfffffe7f | 0x200;
        goto LAB_0033207b;
      }
      if (uVar5 == 0xc000009a) {
        *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
             *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xffffff7f | 0x300;
        *(undefined4 *)(iVar4 + 0xc) = 0x80150008;
        goto LAB_00332190;
      }
      if (-1 < (int)uVar5) {
        puVar9 = *(undefined4 **)(*(int *)(iVar4 + 0x664) + 0xac);
        if (puVar9 == (undefined4 *)0x0) {
          iVar7 = *(int *)(in_ECX + 0xb8);
          *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xfffffdff | 0x180;
          iVar7 = *(int *)(in_ECX + 0xb8);
          iVar6 = -0x7feae6fa;
        }
        else {
          *(undefined4 *)(in_ECX + 0x18) = *puVar9;
          *(undefined4 *)(in_ECX + 0x1c) = puVar9[1];
          iVar7 = *(int *)(*(int *)(iVar4 + 0x664) + 0xac);
          *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar7 + 8);
          *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar7 + 0xc);
          *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar7 + 0x10);
          *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(iVar7 + 0x14);
          puVar9 = (undefined4 *)(*(int *)(*(int *)(iVar4 + 0x664) + 0xac) + 0x18);
          puVar10 = (undefined4 *)(in_ECX + 0x3c);
          for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar9 = (undefined4 *)(*(int *)(*(int *)(iVar4 + 0x664) + 0xac) + 0x2c);
          puVar10 = (undefined4 *)(in_ECX + 0x50);
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          iVar7 = *(int *)(*(int *)(iVar4 + 0x664) + 0xac);
          *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(iVar7 + 0x44);
          *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(iVar7 + 0x48);
          *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(iVar7 + 0x4c);
          *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(iVar7 + 0x50);
          iVar7 = FUN_00330d60();
          if (iVar7 != 0) {
            *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
                 *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfffffd7f | 0x100;
            *(undefined4 *)(iVar4 + 0x10) = 0x12;
            iVar7 = XAPILIB__GetTickCount();
            *(int *)(iVar4 + 0x1c) = iVar7 + 2000;
            FUN_003476db(iVar4 + 0x20,*(undefined4 *)(iVar4 + 8),2000);
            goto LAB_00332190;
          }
          iVar7 = *(int *)(in_ECX + 0xb8);
          *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xfffffdff | 0x180;
          iVar7 = *(int *)(in_ECX + 0xb8);
          iVar6 = -0x7feafff5;
        }
        *(int *)(iVar7 + 0x34) = iVar6;
        goto LAB_0033218d;
      }
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfffffdff | 0x180;
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x34) = uVar5;
      if (((uVar8 == 0x18) || (uVar8 == 6)) || (uVar8 == 0x12)) {
        puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
        *puVar1 = *puVar1 | 4;
        *(undefined4 *)(iVar4 + 0xc) = 0x80151905;
        goto LAB_00332190;
      }
    }
    else {
      if (-1 < (int)uVar5) {
        uVar5 = XAPILIB__GetTickCount();
        if (uVar5 < *(uint *)(iVar4 + 0x1c)) goto LAB_00332190;
        *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
        if (DAT_003b75d4 <= *(uint *)(iVar4 + 0x18)) {
          puVar2 = (ushort *)(*(int *)(in_ECX + 0xb8) + 0x30);
          *puVar2 = *puVar2 | 0x380;
          *(undefined4 *)(iVar4 + 0xc) = 0x80151907;
          goto LAB_00332190;
        }
        iVar6 = FUN_00331b13(iVar4);
        if (-1 < iVar6) goto LAB_00332190;
        goto LAB_0033218d;
      }
      iVar7 = *(int *)(in_ECX + 0xb8);
      uVar8 = *(uint *)(iVar7 + 0x30) & 0xfffffeff | 0x280;
LAB_0033207b:
      *(uint *)(iVar7 + 0x30) = uVar8;
      iVar7 = *(int *)(in_ECX + 0xb8);
LAB_00332080:
      *(uint *)(iVar7 + 0x34) = uVar5;
    }
    *(undefined4 *)(iVar4 + 0xc) = 0x80151906;
  }
LAB_00332190:
  if (*(int *)(iVar4 + 0xc) != 0) {
    *(undefined4 *)(iVar4 + 0x10) = 99;
  }
  return;
}
