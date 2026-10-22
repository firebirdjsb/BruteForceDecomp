/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE2B696B3DDAAB382C562123E95C7ED0BD346E737C2CF878F18B60C6BDA9681D
 * Entry: 0x0031c5b8, Ghidra index: 12336, label: FUN_0031c5b8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f784;
extern uint32_t DAT_0032f790;
extern uint32_t _DAT_fec00130;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0031c5b8(void)

{
  ushort uVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint local_c;
  uint local_8;
  
  uVar2 = _DAT_fec00130;
  uVar3 = _DAT_fec00130 & 0x51;
  if (uVar3 == 0) {
    local_8 = 0;
  }
  else {
    local_c = 0;
    local_8 = 0x80000000;
    piVar4 = in_ECX + 0xe;
    piVar5 = in_ECX;
    do {
      if (((*(uint *)(((int)&DAT_0032f790 - (int)in_ECX) + (int)piVar5) & uVar3) != 0) &&
         ((int *)*piVar5 != (int *)0x0)) {
        uVar1 = *(ushort *)((&DAT_0032f784)[*(int *)*piVar5] + -0x13ffefa);
        if ((uVar1 & 8) != 0) {
          local_8 = local_8 | 1 << ((byte)local_c & 0x1f);
          if ((*(byte *)(in_ECX + 2) & 1) == 0) {
            *(char *)piVar4 = (char)*piVar4 + '\x01';
          }
          else {
            FUN_0031c561();
          }
        }
        *(ushort *)((&DAT_0032f784)[*(int *)*piVar5] + -0x13ffefa) = uVar1;
      }
      local_c = local_c + 1;
      piVar4 = (int *)((int)piVar4 + 2);
      piVar5 = piVar5 + 1;
    } while (local_c < 2);
    if (((*(byte *)(in_ECX + 2) & 1) == 0) && ((local_8 & 3) != 0)) {
      KeInsertQueueDpc(in_ECX + 7,0,0);
    }
    _DAT_fec00130 = uVar2 & 0x50;
  }
  return local_8;
}
