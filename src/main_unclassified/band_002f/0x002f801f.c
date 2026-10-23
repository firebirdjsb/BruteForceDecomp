/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F44421E4A03680A1170B1F18F84CB281AD2A3878831CC18E5FDA23AA0C15CAD2
 * Entry: 0x002f801f, Ghidra index: 10942, label: FUN_002f801f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003b7850;
int FUN_002f801f(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_6d0 [409];
  undefined4 local_6c [2];
  char local_62;
  char local_61;
  char local_60;
  undefined4 local_50;
  undefined **local_4c;
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined4 local_3c [2];
  undefined1 local_34;
  undefined4 local_30;
  undefined4 *local_28;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 local_1e;
  undefined1 uStack_1d;
  undefined2 uStack_1c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 local_15;
  undefined4 uStack_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_c = XBE_CERTIFICATE_HEADER_00010180.SecurityFlags;
  if (XBE_CERTIFICATE_HEADER_00010180.SizeOfHeader < 0x1d9) {
    local_c = 0;
  }
  uVar1 = XBE_CERTIFICATE_HEADER_00010180.AllowedMedia & 0xffffff;
  local_c = local_c & 1;
  if (local_c != 0) {
    uVar1 = 2;
  }
  if (uVar1 == 2) {
    local_50 = 0;
    local_48 = 0x40;
    local_4c = &PTR_LAB_003b7850;
    iVar2 = NtOpenFile(&local_10,0x80100000,&local_50,local_44,1,0x20);
    if (-1 < iVar2) {
      puVar3 = local_3c;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_28 = local_6c;
      local_3c[0]._0_2_ = 0x2c;
      local_34 = 1;
      local_30 = 0x1c;
      uStack_1f = 0;
      uStack_1d = 0;
      uStack_1c = 0;
      local_1a = 0;
      uStack_17 = 0;
      uStack_16 = 0;
      local_15 = 0;
      uStack_14 = 0;
      local_1e = 0x3e;
      local_20 = 0x5a;
      local_19 = 0;
      uStack_18 = 0x1c;
      puVar3 = local_6c;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_8 = 0;
      do {
        iVar2 = NtDeviceIoControlFile(local_10,0,0,0,local_44,0x4d014,local_3c,0x2c,0,0);
        if (iVar2 < 0) goto LAB_002f81d8;
        if (local_61 == '\x01') {
          if ((local_62 != '\0') && (local_60 != '\0')) {
            iVar2 = 0;
            break;
          }
          iVar2 = -0x3fffffff;
        }
        else {
          iVar2 = -0x3fffffec;
        }
        local_8 = local_8 + 1;
      } while (local_8 < 5);
      if ((-1 < iVar2) && (local_c != 0)) {
        local_8 = 0;
        do {
          puVar3 = local_3c;
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          local_28 = local_6d0;
          local_3c[0]._0_2_ = 0x2c;
          local_34 = 1;
          local_30 = 0x664;
          uStack_1f = 0;
          uStack_16 = 0;
          uStack_14 = 0;
          local_20 = 0xad;
          uStack_18 = 6;
          uStack_17 = 100;
          local_1e = 0xff;
          uStack_1d = 2;
          uStack_1c = 0xfffd;
          local_1a = 0xfe;
          local_19 = 0;
          local_15 = 0xc0;
          iVar2 = NtDeviceIoControlFile(local_10,0,0,0,local_44,0x4d014,local_3c,0x2c,0,0);
        } while (((-1 < iVar2) && (iVar2 = FUN_002f7f68(local_6d0), iVar2 < 0)) &&
                (local_8 = local_8 + 1, local_8 < 5));
      }
LAB_002f81d8:
      NtClose(local_10);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
