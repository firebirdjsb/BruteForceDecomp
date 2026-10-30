/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0E26E83E10F6FF8A01A3D8776D8168E8F2FDD23E4F79B2F2F8178CEB41579A0
 * Entry: 0x002f2cca, Ghidra index: 10818, label: FUN_002f2cca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002f2cca(int param_1,undefined4 param_2,code *param_3,undefined4 param_4,undefined4 param_5
                 ,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78 [8];
  uint local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_24 [4];
  uint local_20;
  int local_1c;
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_64 = local_78;
  local_68 = 0xfffffffd;
  local_60 = 0x40;
  local_1c = MmAllocateSystemMemory(0x10000,4);
  if (local_1c == 0) {
    XAPILIB__SetLastError(8);
    return false;
  }
  RtlInitAnsiString(local_78,param_1);
  param_1 = NtOpenFile(&local_14,0x80100000,&local_68,local_24,1,0x60);
  if (-1 < param_1) {
    param_1 = NtQueryInformationFile(local_14,local_24,&local_5c,0x38,0x22);
    if (-1 < param_1) {
      RtlInitAnsiString(local_78,param_2);
      param_1 = NtCreateFile(&local_10,0x40100000,&local_68,local_24,&local_34,0x80,0,
                             (-(uint)((param_6 & 1) != 0) & 0xfffffffd) + 5,100);
      if (-1 < param_1) {
        local_c = 0;
        local_8 = 0;
        if (param_3 != (code *)0x0) {
          iVar2 = (*param_3)(local_34,local_30,0,0,local_34,local_30,0,0,1,1,local_14,local_10,
                             param_4);
          if (iVar2 == 3) {
            param_3 = (code *)0x0;
          }
          else if (iVar2 != 0) {
            iVar2 = -0x3ffffdc0;
            goto LAB_002f2f5e;
          }
        }
        local_70 = local_34;
        local_6c = local_30;
        iVar2 = NtSetInformationFile(local_10,local_24,&local_70,8,0x14);
        if (-1 < iVar2) {
          if (local_8 <= local_30) {
            if (local_30 <= local_8) goto LAB_002f2efa;
            do {
              do {
                iVar2 = NtReadFile(local_14,0,0,0,local_24,local_1c,0x10000,&local_c);
                uVar1 = local_20;
                if ((iVar2 < 0) ||
                   (iVar2 = NtWriteFile(local_10,0,0,0,local_24,local_1c,local_20,&local_c),
                   iVar2 < 0)) goto LAB_002f2f5e;
                bVar4 = CARRY4(local_c,uVar1);
                local_c = local_c + uVar1;
                local_8 = local_8 + (uint)bVar4;
                if (param_3 != (code *)0x0) {
                  iVar3 = (*param_3)(local_34,local_30,local_c,local_8,local_34,local_30,local_c,
                                     local_8,1,0,local_14,local_10,param_4);
                  if (iVar3 == 3) {
                    param_3 = (code *)0x0;
                  }
                  else if (iVar3 != 0) {
                    iVar2 = -0x3ffffdc0;
                    goto LAB_002f2f0d;
                  }
                }
              } while (local_8 < local_30);
              if (local_30 < local_8) break;
LAB_002f2efa:
            } while (local_c < local_34);
          }
LAB_002f2f0d:
          if (-1 < iVar2) {
            local_a0 = local_5c;
            local_9c = local_58;
            local_98 = local_54;
            local_94 = local_50;
            local_90 = local_4c;
            local_8c = local_48;
            local_88 = local_44;
            local_84 = local_40;
            local_80 = local_2c;
            iVar2 = NtSetInformationFile(local_10,local_24,&local_a0,0x28,4);
          }
        }
LAB_002f2f5e:
        MmFreeSystemMemory(local_1c,0x10000);
        NtClose(local_14);
        if (-1 >= iVar2) {
          local_15 = 1;
          NtSetInformationFile(local_10,local_24,&local_15,1,0xd);
          XAPILIB__XapiSetLastNTError(iVar2);
        }
        NtClose(local_10);
        return -1 < iVar2;
      }
      NtClose(local_14);
      MmFreeSystemMemory(local_1c,0x10000);
      goto LAB_002f2d4f;
    }
    NtClose(local_14);
  }
  MmFreeSystemMemory(local_1c,0x10000);
LAB_002f2d4f:
  XAPILIB__XapiSetLastNTError(param_1);
  return false;
}
