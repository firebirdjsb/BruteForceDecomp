/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2528D8D49D59560D2277C49B68E5358B0EC3A950609DB752A88FA112356770D0
 * Entry: 0x00352eeb, Ghidra index: 13074, label: FUN_00352eeb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00356b7c;
int FUN_00352eeb(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_15c [256];
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined1 local_4b;
  undefined4 local_44;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  uint local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = param_2;
  local_14 = 0;
  local_10 = 0;
  local_c = param_1;
  param_1 = *(uint *)KeTickCount_exref;
  local_8 = param_2;
  FUN_00352e8d(&param_1,4);
  KeQuerySystemTime(local_30);
  FUN_00352e8d(local_30,8);
  FUN_00352e4c(&local_14);
  param_1 = local_10 ^ local_14;
  FUN_00352e8d(&param_1,4);
  MmQueryStatistics(local_5c);
  param_1 = local_54;
  FUN_00352e8d(&param_1,2);
  param_1 = local_44;
  FUN_00352e8d(&param_1,2);
  param_1 = CONCAT13(local_4b,(undefined3)param_1);
  FUN_00352e8d((int)&param_1 + 3,1);
  iVar2 = FUN_002f418b(&DAT_00356b7c,local_1c,local_38,local_24);
  if (iVar2 != 0) {
    FUN_00352e8d(local_1c,8);
    FUN_00352e8d(local_24,8);
  }
  iVar2 = ExQueryNonVolatileSetting(0xffff,local_28,local_15c,0x100,&param_2);
  if (-1 < iVar2) {
    FUN_00352e8d(local_15c,param_2);
  }
  /* XBE 0x00353009 and 0x0035301D load two distinct Xbox kernel
   * pointers. Each guest descriptor holds a WORD byte count at +0 and
   * a DWORD buffer address at +4. Preserve both original reads.
   * Host disk information is NOT substituted during syntax repair. */
  uint32_t guest_model_descriptor = *(const uint32_t *)(uintptr_t)
      UINT32_C(0x003864AC);
  FUN_00352e8d(
      *(const uint32_t *)(uintptr_t)(guest_model_descriptor + UINT32_C(4)),
      *(const uint16_t *)(uintptr_t)guest_model_descriptor);
  uint32_t guest_serial_descriptor = *(const uint32_t *)(uintptr_t)
      UINT32_C(0x003864A8);
  FUN_00352e8d(
      *(const uint32_t *)(uintptr_t)(guest_serial_descriptor + UINT32_C(4)),
      *(const uint16_t *)(uintptr_t)guest_serial_descriptor);
  return iVar1 - local_8;
}
