/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 794E7AFE76766214622AB7E4CAD53467F34DF6CC7353BFB48D1CE5D20D1AA885
 * Entry: 0x00331694, Ghidra index: 12396, label: FUN_00331694
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b75d0;
void FUN_00331694(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x10) == 6) {
    iVar6 = param_1 + 0x3c;
    iVar5 = FUN_0033136c(iVar6);
    if (iVar5 == 0x1500f0) {
      FUN_00330ddd(iVar6,iVar3 + 0x54);
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfffbffff | 0x80000;
      *(int *)(iVar3 + 0x70) = iVar3 + 0xac;
      *(undefined4 *)(iVar3 + 0x6c) = 0x5c0;
      FUN_0033f147(*(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x4c),(undefined4 *)(iVar3 + 0x6c),1,0,
                   *(undefined4 *)(iVar3 + 8),iVar3 + 0x74);
      iVar5 = FUN_00331573(iVar3);
      if (-1 < iVar5) {
        uVar4 = FUN_0033f0ca(iVar3 + 0x74,0);
        if (-1 < (int)uVar4) {
          *(undefined4 *)(iVar3 + 0x10) = 8;
          goto LAB_0033197c;
        }
        *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
             *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfffff3ff | 0x1000;
        iVar6 = *(int *)(in_ECX + 0xb8);
        goto LAB_00331956;
      }
    }
    else {
      if (-1 < iVar5) goto LAB_0033197c;
      pbVar2 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x32);
      *pbVar2 = *pbVar2 | 0xc;
    }
LAB_00331979:
    *(int *)(iVar3 + 0xc) = iVar5;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 8) goto LAB_0033197c;
    uVar4 = FUN_00330c3e(param_1 + 0x74);
    if (uVar4 == 0x1500f0) {
      param_1 = 0;
      FUN_0033eec2(iVar3 + 0x74,&param_1,0,0);
      uVar4 = FUN_00340cf7(iVar3 + 0xac,param_1,*(undefined4 *)(iVar3 + 0x66c));
      uVar7 = uVar4 & 0xffff;
      if ((uVar7 == 0x25) || (uVar7 == 0x19)) {
        if (*(uint *)(iVar3 + 0x14) < 2) {
          *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) + 1;
          iVar5 = FUN_00331573(iVar3);
          if (iVar5 < 0) goto LAB_00331979;
          goto LAB_00331803;
        }
        iVar6 = *(int *)(in_ECX + 0xb8);
        uVar7 = *(uint *)(iVar6 + 0x30) & 0xffffefff | 0xc00;
        goto LAB_00331865;
      }
      if (uVar4 == 0xc000006d) {
LAB_00331803:
        uVar4 = FUN_0033f0ca(iVar3 + 0x74,0);
        if (-1 < (int)uVar4) goto LAB_0033197c;
        iVar6 = *(int *)(in_ECX + 0xb8);
        uVar7 = *(uint *)(iVar6 + 0x30) & 0xfffff3ff | 0x1000;
        goto LAB_00331865;
      }
      if (uVar4 == 0xc000009a) {
        *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
             *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfffffbff | 0x1800;
        *(undefined4 *)(iVar3 + 0xc) = 0x80150008;
        goto LAB_0033197c;
      }
      if (-1 < (int)uVar4) {
        *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
             *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xffffebff | 0x800;
        *(undefined4 *)(iVar3 + 0x10) = 99;
        *(undefined4 *)(iVar3 + 0xc) = 0x1500f0;
        iVar6 = *(int *)(*(int *)(iVar3 + 0x66c) + 0xac);
        if (iVar6 != 0) {
          FUN_0033ea20(iVar6);
          *(undefined4 *)(*(int *)(iVar3 + 0x66c) + 0xac) = 0;
        }
        goto LAB_0033197c;
      }
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xffffefff | 0xc00;
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x34) = uVar4;
      if ((*(int *)(iVar3 + 0x34) == 0) && ((uVar7 == 6 || (uVar7 == 0x18)))) {
        puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
        *puVar1 = *puVar1 | 0x10;
        *(undefined4 *)(iVar3 + 0xc) = 0x80151006;
        goto LAB_0033197c;
      }
    }
    else {
      if (-1 < (int)uVar4) {
        uVar4 = XAPILIB__GetTickCount();
        if (uVar4 < *(uint *)(iVar3 + 0x1c)) goto LAB_0033197c;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
        if (DAT_003b75d0 <= *(uint *)(iVar3 + 0x18)) {
          pbVar2 = (byte *)(*(int *)(in_ECX + 0xb8) + 0x31);
          *pbVar2 = *pbVar2 | 0x1c;
          *(undefined4 *)(iVar3 + 0xc) = 0x80151909;
          goto LAB_0033197c;
        }
        iVar5 = FUN_00331573(iVar3);
        if (-1 < iVar5) goto LAB_0033197c;
        goto LAB_00331979;
      }
      iVar6 = *(int *)(in_ECX + 0xb8);
      uVar7 = *(uint *)(iVar6 + 0x30) & 0xfffff7ff | 0x1400;
LAB_00331865:
      *(uint *)(iVar6 + 0x30) = uVar7;
      iVar6 = *(int *)(in_ECX + 0xb8);
LAB_00331956:
      *(uint *)(iVar6 + 0x34) = uVar4;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0x80151908;
  }
LAB_0033197c:
  if (*(int *)(iVar3 + 0xc) != 0) {
    *(undefined4 *)(iVar3 + 0x10) = 99;
  }
  return;
}
