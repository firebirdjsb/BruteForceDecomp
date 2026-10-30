/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C14A5FA8DFD5B46344CF6DED033434FD4612304D024C709F610BCDBD535DBCFB
 * Entry: 0x00342120, Ghidra index: 12686, label: FUN_00342120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0e60;
extern uint32_t DAT_004b0ee8;
undefined4 FUN_00342120(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  char *local_18;
  undefined1 *local_14;
  undefined1 local_c [4];
  undefined4 local_8;
  
  local_8 = 0;
  local_28 = 2;
  local_24 = FUN_00345c6f("239.255.255.250");
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 8);
  local_26 = 0x6c07;
  pcVar1 = 
  "M-SEARCH * HTTP/1.1\r\nHost:239.255.255.250:1900\r\nST:urn:schemas-upnp-org:service:WANIPConnection:1\r\nMan:\"ssdp:discover\"\r\nMX:2\r\n\r\n"
  ;
  do {
    local_18 = pcVar1;
    pcVar1 = local_18 + 1;
  } while (*local_18 != '\0');
  local_18 = local_18 + -0x4b0e60;
  local_14 = &DAT_004b0e60;
  *(char **)(param_1 + 0x2d4) = local_18;
  iVar2 = FUN_0034515b(*(undefined4 *)(param_1 + 0x34),&local_18,1,local_c,0,&local_28,0x10,
                       param_1 + 0x44,0);
  if (iVar2 != -1) {
    pcVar1 = 
    "M-SEARCH * HTTP/1.1\r\nHost:239.255.255.250:1900\r\nST:urn:schemas-upnp-org:service:WANPPPConnection:1\r\nMan:\"ssdp:discover\"\r\nMX:2\r\n\r\n"
    ;
    do {
      local_18 = pcVar1;
      pcVar1 = local_18 + 1;
    } while (*local_18 != '\0');
    local_18 = local_18 + -0x4b0ee8;
    local_14 = &DAT_004b0ee8;
    *(char **)(param_1 + 0x2d4) = local_18;
    iVar2 = FUN_0034515b(*(undefined4 *)(param_1 + 0x34),&local_18,1,local_c,0,&local_28,0x10,
                         param_1 + 0x44,0);
    if (iVar2 != -1) {
      *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x14) + 1) * 1000 + *(int *)(param_1 + 0x18);
      uVar3 = XAPILIB__GetTickCount();
      if (uVar3 < *(uint *)(param_1 + 0x1c)) {
        iVar2 = *(uint *)(param_1 + 0x1c) - uVar3;
      }
      else {
        iVar2 = 1;
      }
      FUN_003476db(param_1 + 0x20,*(undefined4 *)(param_1 + 8),iVar2);
      return local_8;
    }
  }
  return 0x80151919;
}
