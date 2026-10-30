/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDD5D9DAA4285F5112A0DD90785E2F4C098EFAE1DEEA94D039773E29027F1644
 * Entry: 0x00342a84, Ghidra index: 12695, label: FUN_00342a84
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_CONTENT_TYPE__text_xml__charset__003b76b8;
extern uint32_t PTR_s_CONTENT_TYPE__text_xml__charset__003b76bc;
undefined4 FUN_00342a84(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  undefined1 local_28 [8];
  uint local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  iVar2 = param_1;
  iVar4 = *(int *)(param_1 + 0x10);
  local_8 = in_ECX;
  if (iVar4 == 0) {
    iVar4 = FUN_00345079(2,2,0);
    *(int *)(iVar2 + 0x34) = iVar4;
    if (iVar4 != -1) {
      FUN_003450a5(iVar4,0xffff,0x4001);
      *(int *)(iVar2 + 0x5c) = iVar2 + 0x8dc;
      *(undefined4 *)(iVar2 + 0x58) = 0x3000;
      FUN_0033f147(*(undefined4 *)(iVar2 + 0x34),(undefined4 *)(iVar2 + 0x58),1,0,
                   *(undefined4 *)(iVar2 + 8),iVar2 + 0x60);
      iVar4 = FUN_00342120(iVar2);
      if (iVar4 < 0) goto LAB_00342fb7;
      iVar4 = FUN_0033f0ca(iVar2 + 0x60,0);
      if (-1 < iVar4) {
        *(undefined4 *)(iVar2 + 0x10) = 1;
        goto LAB_00342e26;
      }
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        iVar4 = param_1 + 0x98;
        iVar3 = FUN_00330c3e(iVar4);
        if (iVar3 != 0x1500f0) {
          if (-1 < iVar3) goto LAB_00342fba;
          FUN_0033e8c3(iVar4);
          goto LAB_00342dba;
        }
        local_8 = FUN_003385e8(iVar4,0,0,local_20,local_28,&param_1,0);
        FUN_0033e8c3(iVar4);
        if ((((-1 < local_8) && (*(uint *)(iVar2 + 0x8d8) = local_20[0], local_20[0] < 0x3000)) &&
            (*(undefined1 *)(local_20[0] + 0x8dc + iVar2) = 0, param_1 == 200)) &&
           (iVar4 = FUN_003428cf(iVar2), -1 < iVar4)) {
          *(undefined4 *)(iVar2 + 0x14) = 0;
          FUN_003423d5(iVar2,*(undefined2 *)(iVar2 + 0x3e));
          local_10 = *(undefined4 *)(iVar2 + 0x38);
          local_14 = 0xffffffff;
          local_c = (uint)*(ushort *)(iVar2 + 0x42);
          puVar8 = (undefined4 *)(iVar2 + 0x98);
          for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          local_18 = 0x58900000;
          puVar5 = PTR_s_CONTENT_TYPE__text_xml__charset__003b76bc;
          if (*(int *)(iVar2 + 0x1d0) == 0) {
            puVar5 = PTR_s_CONTENT_TYPE__text_xml__charset__003b76b8;
          }
          uVar6 = FUN_0033df31(local_128,0x100,"HOST: %u.%u.%u.%u:%u\r\n%s",
                               *(undefined1 *)(iVar2 + 0x38),*(undefined1 *)(iVar2 + 0x39),
                               *(undefined1 *)(iVar2 + 0x3a),*(undefined1 *)(iVar2 + 0x3b),
                               *(undefined2 *)(iVar2 + 0x42),puVar5);
          iVar4 = FUN_00338406(0xffffffff,iVar2 + 0x254,iVar2 + 0x8dc,0x3000,local_128,uVar6,
                               iVar2 + 0x2d8,*(undefined4 *)(iVar2 + 0x2d4),5000,
                               *(undefined4 *)(iVar2 + 8),iVar2 + 0x98,&local_18);
          if (-1 < iVar4) {
            *(undefined4 *)(iVar2 + 0x10) = 3;
            goto LAB_00342fba;
          }
        }
      }
      else {
        if (iVar4 != 3) goto LAB_00342fba;
        iVar4 = param_1 + 0x98;
        iVar3 = FUN_00330c3e(iVar4);
        if ((iVar3 != 0x1500f0) && (-1 < iVar3)) goto LAB_00342fba;
        local_20[0] = 0;
        FUN_003385e8(iVar4,0,0,local_20,local_28,&param_1,0);
        FUN_0033e8c3(iVar4);
        *(uint *)(iVar2 + 0x8d8) = local_20[0];
        if ((local_20[0] != 0) && (local_20[0] < 0x3000)) {
          *(undefined1 *)(local_20[0] + 0x8dc + iVar2) = 0;
          iVar4 = FUN_003429e3(iVar2,param_1);
          if (iVar4 == -0x7feae6e6) {
            *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
            if (*(uint *)(iVar2 + 0x14) < 6) {
              FUN_00342834(iVar2);
              FUN_003423d5(iVar2,*(undefined2 *)(iVar2 + 0x3e));
              local_10 = *(undefined4 *)(iVar2 + 0x38);
              local_14 = 0xffffffff;
              local_c = (uint)*(ushort *)(iVar2 + 0x42);
              puVar8 = (undefined4 *)(iVar2 + 0x98);
              for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
              local_18 = 0x58900000;
              puVar5 = PTR_s_CONTENT_TYPE__text_xml__charset__003b76bc;
              if (*(int *)(iVar2 + 0x1d0) == 0) {
                puVar5 = PTR_s_CONTENT_TYPE__text_xml__charset__003b76b8;
              }
              uVar6 = FUN_0033df31(local_128,0x100,"HOST: %u.%u.%u.%u:%u\r\n%s",
                                   *(undefined1 *)(iVar2 + 0x38),*(undefined1 *)(iVar2 + 0x39),
                                   *(undefined1 *)(iVar2 + 0x3a),*(undefined1 *)(iVar2 + 0x3b),
                                   *(undefined2 *)(iVar2 + 0x42),puVar5);
              iVar4 = FUN_00338406(0xffffffff,iVar2 + 0x254,iVar2 + 0x8dc,0x3000,local_128,uVar6,
                                   iVar2 + 0x2d8,*(undefined4 *)(iVar2 + 0x2d4),5000,
                                   *(undefined4 *)(iVar2 + 8),iVar2 + 0x98,&local_18);
              if (-1 < iVar4) goto LAB_00342fba;
            }
          }
          else if (-1 < iVar4) {
            *(undefined4 *)(iVar2 + 0xc) = 0x1500f0;
            *(undefined4 *)(iVar2 + 0x10) = 99;
            goto LAB_00342fba;
          }
        }
      }
LAB_00342f75:
      *(undefined4 *)(iVar2 + 0xc) = 0x80151918;
      goto LAB_00342fba;
    }
LAB_00342e26:
    iVar4 = FUN_00330c3e(iVar2 + 0x60);
    if (iVar4 == 0x1500f0) {
      puVar1 = (uint *)(iVar2 + 0x8d8);
      *puVar1 = 0;
      FUN_0033eec2(iVar2 + 0x60,puVar1,0,0);
      if (*puVar1 < 0x3000) {
        *(undefined1 *)(*puVar1 + 0x8dc + iVar2) = 0;
        iVar4 = FUN_00342220(iVar2);
        if (iVar4 != -0x7feae6e8) {
          if (-1 < iVar4) {
            puVar8 = (undefined4 *)(iVar2 + 0x98);
            puVar9 = puVar8;
            for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            uVar6 = FUN_0033df31(local_a8,0x80,"HOST: %u.%u.%u.%u:%u\r\nACCEPT-LANGUAGE: en\r\n",
                                 *(undefined1 *)(iVar2 + 0x38),*(undefined1 *)(iVar2 + 0x39),
                                 *(undefined1 *)(iVar2 + 0x3a),*(undefined1 *)(iVar2 + 0x3b),
                                 *(undefined2 *)(iVar2 + 0x40));
            *(int *)(iVar2 + 0x13c) = iVar2 + 0x8dc;
            *(undefined4 *)(iVar2 + 0x140) = 0x3000;
            FUN_00330c2d(puVar8);
            *(undefined4 *)(iVar2 + 0xbc) = 0xffffffff;
            *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 8);
            *(undefined4 *)(iVar2 + 0xa4) = 0;
            *(undefined4 *)(iVar2 + 0xa8) = 0;
            *(undefined4 *)(iVar2 + 0xc0) = *(undefined4 *)(iVar2 + 0x38);
            *(undefined2 *)(iVar2 + 0xc4) = *(undefined2 *)(iVar2 + 0x40);
            *(undefined4 *)(iVar2 + 0xb0) = 0x43900000;
            *(undefined4 *)(iVar2 + 0xb4) = 5000;
            *(undefined4 *)(iVar2 + 0x194) = 0;
            *(undefined4 *)(iVar2 + 400) = 0;
            *(undefined4 *)(iVar2 + 0x198) = 0;
            *(undefined4 *)(iVar2 + 0x19c) = 0;
            *(undefined4 *)(iVar2 + 0x1a0) = 0;
            /* 0x342f3e/0x342f45/0x342f4c: MOV DWORD immediates;
             * EAX is guest base+0x180. ABI_UNVERIFIED: raw code words. */
            *(uint32_t *)(uintptr_t)((uint32_t)iVar2 + 0x184U) = UINT32_C(0x00337cc3);
            *(uint32_t *)(uintptr_t)((uint32_t)iVar2 + 0x188U) = UINT32_C(0x00337d12);
            *(uint32_t *)(uintptr_t)((uint32_t)iVar2 + 0x18cU) = UINT32_C(0x00337d17);
            iVar4 = FUN_00337bcf(iVar2 + 0x1d4,local_a8,uVar6,0,0,0,puVar8);
            in_ECX = local_8;
            if (-1 < iVar4) {
              *(undefined4 *)(iVar2 + 0x10) = 2;
              goto LAB_00342fba;
            }
            goto LAB_00342f75;
          }
          goto LAB_00342fb7;
        }
      }
      iVar4 = FUN_0033f0ca(iVar2 + 0x60,0);
      if (-1 < iVar4) goto LAB_00342fba;
    }
    else if (-1 < iVar4) {
      uVar7 = XAPILIB__GetTickCount();
      if (uVar7 < *(uint *)(iVar2 + 0x1c)) goto LAB_00342fba;
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      if (5 < *(uint *)(iVar2 + 0x14)) {
        *(undefined4 *)(iVar2 + 0xc) = 0x80151917;
        goto LAB_00342fba;
      }
      iVar4 = FUN_00342120(iVar2);
      if (-1 < iVar4) goto LAB_00342fba;
LAB_00342fb7:
      *(int *)(iVar2 + 0xc) = iVar4;
      goto LAB_00342fba;
    }
  }
LAB_00342dba:
  *(undefined4 *)(iVar2 + 0xc) = 0x80151919;
LAB_00342fba:
  if (*(int *)(iVar2 + 0xc) != 0) {
    iVar4 = *(int *)(in_ECX + 0xb8);
    if (*(int *)(iVar2 + 0xc) == 0x1500f0) {
      *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) & 0xffffffdf | 0x40;
    }
    else {
      *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) | 0x60;
    }
    *(undefined4 *)(iVar2 + 0x10) = 99;
  }
  return *(undefined4 *)(iVar2 + 0xc);
}
