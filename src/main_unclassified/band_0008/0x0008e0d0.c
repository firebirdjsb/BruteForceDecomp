/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9F686EB055819877AB321D12A3FA808F7BBBEC18A0B27A17918243FA8BE1C16
 * Entry: 0x0008e0d0, Ghidra index: 1728, label: FUN_0008e0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching original XBE: these two guest VAs contain NUL-terminated
 * 16-bit UTF-16 format strings, referenced by PUSH immediate instructions.
 * Syntax-only declarations; guest-to-host relocation/linking is NOT done. */
extern const uint16_t u__7_1d_0040db8c[];
extern const uint16_t u__3_1d___0040db7c[];

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040db98;
extern uint32_t DAT_0040db9c;
extern uint32_t DAT_0040dba0;
extern uint32_t switchD_0008e0f5_default[];
void FUN_0008e0d0(float param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_ECX;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  piVar4 = &local_48;
  local_44 = (int)param_1;
  switch(in_ECX) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
    iVar1 = local_44;
    if (DAT_0040dba0 < local_44) {
      FUN_002eaa70(&DAT_0040db98);
      FUN_0008ed00();
      iVar1 = DAT_0040dba0;
    }
    FUN_002ea9a9(local_40,0x20,u__7_1d_0040db8c,iVar1);
    break;
  case 5:
    iVar1 = local_44 / 0x3c;
    if (local_44 % 0x3c != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar1 / 0x3c;
    iVar1 = iVar1 % 0x3c;
    if (DAT_0040db9c < iVar2) {
      FUN_002eaa70(&DAT_0040db98);
      FUN_0008ed00();
      iVar2 = DAT_0040db9c + 1;
      iVar1 = 0;
    }
    param_1 = 6.464127e-24;
    uVar3 = FUN_001e97c0(iVar2,iVar1);
    FUN_002ea9a9(local_40,0x20,uVar3);
    FUN_002eaa70(local_40);
    FUN_0008ed00();
    return;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    param_1 = 1.4013e-43;
    local_48 = 0;
    if (local_44 < 0x65) {
      if (-1 < local_44) {
        piVar4 = &local_44;
      }
    }
    else {
      piVar4 = (int *)&param_1;
    }
    FUN_002ea9a9(local_40,0x20,u__3_1d___0040db7c,*piVar4);
    break;
  default:
    goto switchD_0008e0f5_default;
  }
  FUN_002eaa70(local_40);
  FUN_0008ed00();
switchD_0008e0f5_default:
  return;
}
