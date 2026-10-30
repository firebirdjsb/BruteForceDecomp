/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B419A42B9B74F00E61002A85F9B56045C38099739BB845BAA18B30A019492A6E
 * Entry: 0x00356c80, Ghidra index: 13145, label: FUN_00356c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_004b1640;
void FUN_00356c80(uint param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  /* Original SUB ESP,0x40 and [ESP+0x10]/[ESP+0x30] accesses after
   * saving EBX, EBP, ESI, EDI establish two adjacent 32-byte regions.
   * Keep both in one byte-addressable guest-frame image. ABI_UNVERIFIED. */
  char local_40[64];
  char *tail;
  
  builtin_strncpy(local_40,"BINK",5);
  if ((param_1 & 0xf) != 0) {
    pcVar2 = (&PTR_DAT_004b1640)[param_1 & 0xf];
    tail = local_40 + 4;
    do {
      cVar1 = *pcVar2;
      *tail = cVar1;
      pcVar2 = pcVar2 + 1;
      tail = tail + 1;
    } while (cVar1 != '\0');
    if (param_2 == 0) {
      FUN_002f7900(local_40);
    }
    else {
      FUN_002f78e5(local_40);
    }
    if ((param_1 & 0x100) != 0) {
      iVar3 = 0;
      do {
        cVar1 = local_40[iVar3];
        local_40[32 + iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
      tail = local_40 + 32;
      while (*tail != '\0') {
        tail = tail + 1;
      }
      tail[0] = 'X';
      tail[1] = '2';
      tail[2] = '\0';
      if (param_2 == 0) {
        FUN_002f7900(local_40 + 32);
      }
      else {
        FUN_002f78e5(local_40 + 32);
      }
    }
    if ((param_1 & 0x40) != 0) {
      tail = local_40;
      while (*tail != '\0') {
        tail = tail + 1;
      }
      /* Original 16-bit little-endian 0x004D store: 'M' then NUL. */
      tail[0] = 'M';
      tail[1] = '\0';
      if (param_2 == 0) {
        FUN_002f7900(local_40);
      }
      else {
        FUN_002f78e5(local_40);
      }
    }
    if ((param_1 & 0x100) != 0) {
      tail = local_40;
      while (*tail != '\0') {
        tail = tail + 1;
      }
      /* Original 16-bit 0x3258 and following zero byte: 'X','2',NUL. */
      tail[0] = 'X';
      tail[1] = '2';
      tail[2] = '\0';
      if (param_2 == 0) {
        FUN_002f7900(local_40);
      }
      else {
        FUN_002f78e5(local_40);
      }
    }
  }
  if ((param_1 & 0x20) != 0) {
    uVar4 = 0;
    do {
      FUN_00356c80(param_1 & 0xffffffd0 | uVar4,param_2);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x10);
  }
  return;
}
