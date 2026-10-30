/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A182030A598711510B44A263788328625429A401EE8533DB02150ECA62768937
 * Entry: 0x0033c8ee, Ghidra index: 12563, label: FUN_0033c8ee
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0033c8ee(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  undefined1 local_f8 [100];
  undefined1 local_94 [100];
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  FUN_0033df31(local_94,100,"\\Device\\Harddisk0\\partition1\\CACHE\\LocalCache%02d.bin",*in_ECX);
  local_10 = in_ECX + 1;
  while( true ) {
    RtlInitAnsiString(local_24,local_94);
    local_1c = 0;
    local_18 = local_24;
    local_14 = 0x40;
    local_c = NtCreateFile(local_10,0xc0100080,&local_1c,local_30,0,0x80,1,3,0x68);
    if (*local_10 != -1) {
      if (local_2c == 1) {
        XAPILIB__SetLastError(0xb7);
      }
      return local_8;
    }
    if (local_c != -0x3fffffc6) break;
    FUN_0033df31(local_f8,100,"\\Device\\Harddisk0\\partition1\\CACHE\\");
    RtlInitAnsiString(local_24,local_f8);
    local_1c = 0;
    local_18 = local_24;
    local_14 = 0x40;
    local_c = NtCreateFile(&local_28,0x100001,&local_1c,local_30,0,0x80,3,2,0x4021);
    if (local_c < 0) break;
    NtClose(local_28);
  }
  iVar1 = RtlNtStatusToDosError(local_c);
  if (iVar1 < 1) {
    uVar2 = RtlNtStatusToDosError(local_c);
    return uVar2;
  }
  uVar2 = RtlNtStatusToDosError(local_c);
  return uVar2 & 0xffff | 0x80070000;
}
