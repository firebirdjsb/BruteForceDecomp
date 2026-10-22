/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E55409FD603206CAF6B85A4AF424436B2D1321D5502F8207A78C2AD81F14407
 * Entry: 0x003175fd, Ghidra index: 12180, label: FUN_003175fd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe820304;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_003175fd(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  ushort *puVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  FUN_003118f0();
  iVar1 = *(int *)(in_ECX + 0x78);
  cVar2 = (char)((int)(*(byte *)(iVar1 + 0xe) - 1) >> 1) + '\x01';
  if (cVar2 != *(char *)(in_ECX + 100)) {
    if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
      uVar5 = 0x88780032;
      goto LAB_00317702;
    }
    *(char *)(in_ECX + 100) = cVar2;
  }
  if (*(short *)(iVar1 + 0xc) == 1) {
    cVar2 = *(char *)(iVar1 + 0xf);
    if (cVar2 == '\b') {
      *(byte *)(in_ECX + 0x17) = *(byte *)(in_ECX + 0x17) & 0xf;
    }
    else {
      if (cVar2 == '\x10') {
        uVar3 = *(uint *)(in_ECX + 0x14) & 0xfffffff | 0x50000000;
      }
      else {
        if (cVar2 != '\x18') {
          if (cVar2 == ' ') {
            *(byte *)(in_ECX + 0x17) = *(byte *)(in_ECX + 0x17) | 0xf0;
          }
          goto LAB_00317690;
        }
        uVar3 = *(uint *)(in_ECX + 0x14) & 0xfffffff | 0xe0000000;
      }
LAB_00317650:
      *(uint *)(in_ECX + 0x14) = uVar3;
    }
  }
  else if (*(short *)(iVar1 + 0xc) == 0x69) {
    uVar3 = *(uint *)(in_ECX + 0x14) & 0xfffffff | 0xa0000000;
    goto LAB_00317650;
  }
LAB_00317690:
  *(uint *)(in_ECX + 0x14) =
       *(uint *)(in_ECX + 0x14) ^
       ((*(byte *)(iVar1 + 0xe) - 1) * 0x10000 ^ *(uint *)(in_ECX + 0x14)) & 0x1f0000;
  if (*(char *)(iVar1 + 0xe) == '\x01') {
    uVar3 = *(uint *)(in_ECX + 0x14) & 0xf7ffffff;
  }
  else {
    uVar3 = *(uint *)(in_ECX + 0x14) | 0x8000000;
  }
  *(uint *)(in_ECX + 0x14) = uVar3;
  if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
    do {
    } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 2);
    uVar3 = 0;
    if (*(byte *)(in_ECX + 100) != 0) {
      puVar4 = (ushort *)(in_ECX + 0xc);
      do {
        _DAT_fe8202f8 = (uint)*puVar4;
        _DAT_fe820304 = *(uint *)(in_ECX + 0x14);
        if (uVar3 != 0) {
          _DAT_fe820304 = _DAT_fe820304 | 0x400000;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < *(byte *)(in_ECX + 100));
    }
  }
LAB_00317702:
  FUN_00311923();
  return uVar5;
}
