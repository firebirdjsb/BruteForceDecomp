/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFEA382821072704079C88DFB8DB5FA7CCD9E846FF7F025E9D95C33E241D14A1
 * Entry: 0x00375330, Ghidra index: 13441, label: FUN_00375330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b214;
extern uint32_t DAT_0037df94;
extern uint32_t DAT_0037ec3c;
extern uint32_t DAT_0037ec44;
extern uint32_t DAT_0037ec4c;
extern uint32_t DAT_0037ec50;
extern uint32_t DAT_0037ec58;
extern uint32_t DAT_0037ec5c;
extern uint32_t DAT_0037ec60;
extern uint32_t DAT_0037ec68;
extern uint32_t DAT_0037ec6c;
extern uint32_t DAT_0037ec78;
extern uint32_t DAT_0037ec7c;
extern uint32_t DAT_0037ec80;
extern uint32_t DAT_0037ec84;
extern uint32_t PTR_DAT_003b7df8;
extern uint32_t _DAT_0037ec40;
extern uint32_t _DAT_0037ec70;
extern uint32_t _DAT_0037ec84;
extern char s_1_00_5233_1_0037b188[];
extern char s_GetDiskFreeSpaceEx_failed_with___0037b1ec[];
extern char s_Release_0037b194[];
extern char s_Unable_to_re_open_movie_cache_fi_0037b19c[];
extern char s_Wait_for_image_read_timed_out_0037b238[];
extern char s_Wait_for_image_write_timed_out_0037b218[];
extern char s__s__s_00406cb0[];
extern char s_createfile_error___st__08x_0037b1d0[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00375330(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  sbyte sVar8;
  byte bVar9;
  uint extraout_ECX;
  uint uVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  uint local_5c;
  int local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 *local_4c;
  undefined **local_48;
  uint *local_44;
  uint local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined **ppuStack_34;
  uint local_30;
  int local_2c;
  int local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar10 = *D3D8__D3D_g_pDevice;
  local_5c = *D3D8__D3D_g_pDevice;
  if ((DAT_0037ec50 != -1) && ((*(byte *)(D3D8__D3D_g_pDevice + 0x49c) & 0x10) != 0)) {
    DAT_0037df94 = DAT_0037ec50;
    DAT_0037ec50 = -1;
  }
  uVar4 = *(uint *)(D3D8__D3D_g_pDevice + 0x498);
  uVar3 = uVar4 & 0xff000000;
  if (0x28000000 < uVar3) {
    if (uVar3 == 0x29000000) {
      *(uint *)(D3D8__D3D_g_pDevice + 0x49c) =
           *(uint *)(D3D8__D3D_g_pDevice + 0x49c) & 0xffffffef | 0x20;
      iVar11 = XAPILIB__WaitForSingleObject(DAT_0037ec80,1000);
      if (iVar11 == 0x102) {
                    /* WARNING: Subroutine does not return */
        FUN_0037a3e0(s_Wait_for_image_write_timed_out_0037b218);
      }
      DAT_0037ec4c = DAT_0037ec4c & 0xfffffffe;
      NtClose(DAT_0037ec80);
      DAT_0037ec80 = -1;
      uStack_38 = 0;
      local_30 = 0x40;
      ppuStack_34 = &PTR_DAT_003b7df8;
      iVar11 = NtCreateFile(&DAT_0037ec80,0x80110000,&uStack_38,&DAT_0037ec44,0,0,0,1,0xc);
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0037a3e0(s_Unable_to_re_open_movie_cache_fi_0037b19c,iVar11);
      }
      DAT_0037ec78 = 0;
      DAT_0037ec7c = 0;
      *(undefined4 *)(uVar10 + 0x498) = 0x2a000000;
    }
    else if (uVar3 == 0x41000000) {
      _DAT_0037ec40 = **(int **)(D3D8__D3D_g_pDevice + 0x4a0);
      if (_DAT_0037ec40 != 1) {
        *(undefined4 *)(D3D8__D3D_g_pDevice + 0x498) = 0x44000004;
        return;
      }
      FUN_002eaa86((*(int **)(D3D8__D3D_g_pDevice + 0x4a0))[1],s__s__s_00406cb0,
                   s_1_00_5233_1_0037b188,s_Release_0037b194);
      *(undefined4 *)(uVar10 + 0x498) = 0x43000000;
      return;
    }
    return;
  }
  if (uVar3 == 0x28000000) {
    while (uVar4 != 0) {
      XAPILIB__Sleep(1);
      uVar4 = *(uint *)(uVar10 + 0x498);
    }
  }
  else if (uVar3 != 0) {
    if (uVar3 != 0x21000000) {
      if (uVar3 != 0x23000000) {
        return;
      }
      if ((DAT_0037ec84 < '\0') && (DAT_0037ec80 != 0)) {
        /* Matching XBE 0x003753B5 LEA ECX,[ESP+0x1B] passes the same
         * one-byte guest stack slot written by 0x003753C0
         * MOV BYTE PTR [ESP+0x27],1 after three further pushes.
         * Incoming ESP-relative address is -0x61; original kernel import
         * calling convention and host guest-memory mapping remain unverified. */
        undefined1 guest_disposition_byte = 1;
        NtSetInformationFile(DAT_0037ec80,&DAT_0037ec44,&guest_disposition_byte,1,0xd);
        NtClose(DAT_0037ec80);
        DAT_0037ec80 = 0;
      }
      *(uint *)(uVar10 + 0x49c) = *(uint *)(uVar10 + 0x49c) & 0xffffffcf;
      *(undefined4 *)(uVar10 + 0x498) = 0x24000000;
      if (*(int *)(uVar10 + 0x4a0) != 0) {
        XAPILIB__XPhysicalFree(*(int *)(uVar10 + 0x4a0));
      }
      *(undefined4 *)(uVar10 + 0x4a0) = 0;
      return;
    }
    puVar1 = *(uint **)(D3D8__D3D_g_pDevice + 0x4a0);
    _DAT_0037ec84 = *puVar1;
    DAT_0037ec4c = puVar1[2];
    uVar10 = puVar1[1];
    _DAT_0037ec70 = puVar1[3];
    DAT_0037ec50 = 0xffffffff;
    XAPILIB__QueryPerformanceFrequency(&local_54);
    uVar14 = __allmul(uVar10,0,local_54,local_50);
    uVar14 = __alldiv(uVar14,1000,0);
    DAT_0037ec6c = (int)((ulonglong)uVar14 >> 0x20);
    DAT_0037ec68 = (uint)uVar14;
    DAT_0037ec58 = 0;
    DAT_0037ec5c = 0;
    puVar1 = *(uint **)(D3D8__D3D_g_pDevice + 0x15c4);
    if ((((*puVar1 & 0xffff) == 0) && ((*puVar1 & 0x70000) == 0x50000)) && (puVar1[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(puVar1[5]);
      uVar14 = CONCAT44(DAT_0037ec6c,DAT_0037ec68);
    }
    uVar4 = _DAT_0037ec84;
    DAT_0037ec6c = (int)((ulonglong)uVar14 >> 0x20);
    DAT_0037ec68 = (uint)uVar14;
    uVar10 = puVar1[4];
    *puVar1 = *puVar1 + 1;
    uVar3 = uVar4 & 4;
    bVar9 = (byte)uVar4 & 3;
    if (uVar10 == 0) {
      uVar4 = 1 << (*(byte *)((int)puVar1 + 0xf) & 0xf);
      uVar10 = 1 << ((byte)(puVar1[3] >> 0x14) & 0xf);
    }
    else {
      uVar4 = (uVar10 >> 0xc & 0xfff) + 1;
      uVar10 = (uVar10 & 0xfff) + 1;
    }
    FUN_00374e70(uVar10 >> bVar9,uVar4 >> bVar9,(uVar3 != 0) * '\x02' + '\x1c',0);
    if (local_3c == 0) {
      iVar11 = 1 << ((byte)(local_40 >> 0x18) & 0xf);
    }
    else {
      iVar11 = (local_3c >> 0xc & 0xfff) + 1;
    }
    iVar5 = FUN_0036e100();
    DAT_0037ec3c = iVar5 * iVar11 + 0x40;
    local_28[0] = 0x28;
    if (local_3c == 0) {
      local_28[1] = 1 << ((byte)(local_40 >> 0x14) & 0xf);
      local_28[2] = 1 << ((byte)(local_40 >> 0x18) & 0xf);
    }
    else {
      local_28[1] = (local_3c & 0xfff) + 1;
      local_28[2] = (local_3c >> 0xc & 0xfff) + 1;
    }
    local_18 = 0;
    local_10 = 0;
    local_1c = CONCAT22((ushort)(uVar3 != 0) * 8 + 0x10,1);
    local_c = 0;
    local_8 = 0;
    local_14 = DAT_0037ec3c;
    local_4 = FUN_0036e100();
    D3D8LTCG__D3DResource_Release(puVar1);
    piVar6 = (int *)XAPILIB__XPhysicalAlloc
                              (iVar5 * iVar11 + 0x23fU & 0xfffffe00,0xffffffff,0x4000,4);
    uVar10 = local_5c;
    *(int **)(local_5c + 0x4a0) = piVar6;
    if (piVar6 != (int *)0x0) {
      bVar13 = DAT_0037ec84 < '\0';
      piVar12 = local_28;
      for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
        *piVar6 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar6 = piVar6 + 1;
      }
      if (bVar13) {
        DAT_0037ec80 = -1;
        iVar11 = FUN_002f418b(&DAT_0037b214,&local_5c,0,0);
        if (iVar11 == 0) {
          uVar7 = XAPILIB__GetLastError();
                    /* WARNING: Subroutine does not return */
          FUN_0037a3e0(s_GetDiskFreeSpaceEx_failed_with___0037b1ec,uVar7);
        }
        if ((-1 < local_58) && ((0 < local_58 || (0x40000000 < local_5c)))) {
          local_5c = 0x40000000;
          local_58 = 0;
        }
        uVar15 = 0;
        uVar7 = 0;
        local_4c = (undefined4 *)0x0;
        local_44 = (uint *)0x40;
        local_48 = &PTR_DAT_003b7df8;
        iVar11 = NtCreateFile(&DAT_0037ec80,0x40100100,&local_4c,&DAT_0037ec44,&local_5c,0,0,0,0x48)
        ;
        if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0037a3e0(s_createfile_error___st__08x_0037b1d0,iVar11);
        }
        DAT_0037ec78 = 0;
        DAT_0037ec7c = 0;
        XAPILIB__SetFilePointerEx(DAT_0037ec80,uVar7,uVar15,0,0);
        XAPILIB__SetEndOfFile(DAT_0037ec80);
        XAPILIB__SetFilePointerEx(DAT_0037ec80,DAT_0037ec78,DAT_0037ec7c,0,0);
      }
      DAT_0037ec60 = 0;
      *(uint *)(uVar10 + 0x49c) = *(uint *)(uVar10 + 0x49c) | 0x10;
      *(undefined4 *)(uVar10 + 0x498) = 0x22000000;
      return;
    }
    *(undefined4 *)(local_5c + 0x498) = 0x25000003;
    return;
  }
  uVar10 = D3D8__D3D_g_pDevice;
  local_28[0] = 0x3f800000;
  local_28[1] = 0x40000000;
  local_28[2] = 0x40800000;
  local_1c = 0x41000000;
  if ((*(uint *)(D3D8__D3D_g_pDevice + 0x49c) & 0x20) == 0) {
    if ((*(uint *)(D3D8__D3D_g_pDevice + 0x49c) & 0x10) != 0) {
      if (DAT_0037ec58 == 0 && DAT_0037ec5c == 0) {
        local_44 = &DAT_0037ec58;
        local_48 = (undefined **)0x375066;
        XAPILIB__QueryPerformanceCounter();
      }
      else {
        local_44 = &local_30;
        local_48 = (undefined **)0x375017;
        XAPILIB__QueryPerformanceCounter();
        iVar11 = (local_2c - DAT_0037ec5c) - (uint)(local_30 < DAT_0037ec58);
        if (iVar11 < DAT_0037ec6c) {
          return;
        }
        if ((iVar11 <= DAT_0037ec6c) && (local_30 - DAT_0037ec58 < DAT_0037ec68)) {
          return;
        }
        DAT_0037ec58 = local_30;
        DAT_0037ec5c = local_2c;
      }
      if ((char)_DAT_0037ec84 < '\0') {
        local_44 = (uint *)0x3e8;
        local_48 = (undefined **)DAT_0037ec80;
        local_4c = (undefined4 *)0x375080;
        iVar11 = XAPILIB__WaitForSingleObject();
        if (iVar11 == 0x102) {
          local_44 = (uint *)s_Wait_for_image_write_timed_out_0037b218;
                    /* WARNING: Subroutine does not return */
          local_48 = (undefined **)0x375091;
          FUN_0037a3e0();
        }
      }
      puVar1 = *(uint **)(D3D8__D3D_g_pDevice + 0x15c4);
      uVar4 = _DAT_0037ec84;
      if ((((*puVar1 & 0xffff) == 0) && ((*puVar1 & 0x70000) == 0x50000)) &&
         (local_44 = (uint *)puVar1[5], local_44 != (uint *)0x0)) {
        local_48 = (undefined **)0x3750d0;
        D3D8LTCG__D3DResource_AddRef();
        uVar4 = extraout_ECX;
      }
      uVar3 = puVar1[4];
      *puVar1 = *puVar1 + 1;
      if (uVar3 == 0) {
        uVar2 = 1 << (*(byte *)((int)puVar1 + 0xf) & 0xf);
        uVar3 = 1 << ((byte)(puVar1[3] >> 0x14) & 0xf);
      }
      else {
        uVar2 = (uVar3 >> 0xc & 0xfff) + 1;
        uVar3 = (uVar3 & 0xfff) + 1;
      }
      local_44 = (uint *)(*(int *)(uVar10 + 0x4a0) + 0x40U & 0xfffffff);
      local_48 = (undefined **)((uint)((uVar4 & 4) != 0) * 2 + 0x1c);
      sVar8 = (sbyte)(uVar4 & 3);
      local_4c = (undefined4 *)(uVar2 >> sVar8);
      local_50 = (undefined *)(uVar3 >> sVar8);
      local_54 = 0x37514e;
      FUN_00374e70();
      local_44 = (uint *)local_28[uVar4 & 3];
      local_4c = &local_18;
      local_50 = (undefined *)0x37515e;
      local_48 = (undefined **)puVar1;
      FUN_0036e030();
      local_48 = (undefined **)0x375164;
      local_44 = puVar1;
      D3D8LTCG__D3DResource_Release();
      local_48 = *(undefined ***)(D3D8__D3D_g_pDevice + 0x2c);
      local_44 = (uint *)0x2;
      local_4c = (undefined4 *)0x375175;
      D3D8LTCG__D3D_BlockOnTime();
      iVar11 = *(int *)(uVar10 + 0x4a0);
      local_48 = (undefined **)0x375181;
      local_44 = (uint *)iVar11;
      XAPILIB__QueryPerformanceCounter();
      local_44 = (uint *)(iVar11 + 8);
      local_48 = (undefined **)0x37518a;
      XAPILIB__QueryPerformanceFrequency();
      *(int *)(iVar11 + 0x18) = DAT_0037ec60;
      if (DAT_0037ec84 < '\0') {
        local_4c = *(undefined4 **)(uVar10 + 0x4a0);
        local_44 = &DAT_0037ec78;
        uVar10 = DAT_0037ec3c + 0x1ffU & 0xfffffe00;
        local_50 = &DAT_0037ec44;
        local_54 = 0;
        local_58 = 0;
        local_5c = 0;
        local_48 = (undefined **)uVar10;
        iVar11 = NtWriteFile();
        if (-1 < iVar11) {
          bVar13 = CARRY4(DAT_0037ec78,uVar10);
          DAT_0037ec60 = DAT_0037ec60 + 1;
          DAT_0037ec78 = DAT_0037ec78 + uVar10;
          DAT_0037ec7c = DAT_0037ec7c + (uint)bVar13;
          return;
        }
      }
      else if (*(int *)(uVar10 + 0x498) == 0) {
        *(undefined4 *)(uVar10 + 0x498) = 0x26000000;
        uVar4 = 0;
        do {
          local_44 = (uint *)0x1;
          local_48 = (undefined **)0x37522e;
          XAPILIB__Sleep();
          if (9999 < uVar4) {
            DAT_0037ec60 = DAT_0037ec60 + -1;
            *(undefined4 *)(uVar10 + 0x498) = 0;
            *(uint *)(uVar10 + 0x49c) = *(uint *)(uVar10 + 0x49c) & 0xffffffef;
          }
          uVar4 = uVar4 + 1;
        } while (*(int *)(uVar10 + 0x498) == 0x26000000);
        DAT_0037ec60 = DAT_0037ec60 + 1;
      }
    }
  }
  else {
    local_4c = *(undefined4 **)(D3D8__D3D_g_pDevice + 0x4a0);
    local_44 = &DAT_0037ec78;
    uVar4 = DAT_0037ec3c + 0x1ffU & 0xfffffe00;
    local_50 = &DAT_0037ec44;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_48 = (undefined **)uVar4;
    iVar11 = NtReadFile();
    piVar6 = (int *)(*(int *)(uVar10 + 0x4a0) + 0x18);
    if (iVar11 < 0) {
      *piVar6 = 0;
    }
    else {
      iVar11 = XAPILIB__WaitForSingleObject(DAT_0037ec80,1000);
      if (iVar11 == 0x102) {
                    /* WARNING: Subroutine does not return */
        FUN_0037a3e0(s_Wait_for_image_read_timed_out_0037b238);
      }
      bVar13 = CARRY4(DAT_0037ec78,uVar4);
      DAT_0037ec78 = DAT_0037ec78 + uVar4;
      DAT_0037ec7c = DAT_0037ec7c + (uint)bVar13;
      DAT_0037ec60 = DAT_0037ec60 + -1;
      *piVar6 = DAT_0037ec60;
    }
    if (*(int *)(uVar10 + 0x498) == 0) {
      *(undefined4 *)(uVar10 + 0x498) = 0x26000000;
      uVar4 = 0;
      do {
        XAPILIB__Sleep(1);
        if (9999 < uVar4) {
          DAT_0037ec60 = DAT_0037ec60 + -1;
          *(undefined4 *)(uVar10 + 0x498) = 0;
          *(uint *)(uVar10 + 0x49c) = *(uint *)(uVar10 + 0x49c) & 0xffffffef;
        }
        uVar4 = uVar4 + 1;
      } while (*(int *)(uVar10 + 0x498) == 0x26000000);
      return;
    }
  }
  return;
}
