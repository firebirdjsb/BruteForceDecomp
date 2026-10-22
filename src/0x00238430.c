/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F275EB617984683638BA2C1109B86AFAD0118C6EE79F07D741C76CD8EA55E07E
 * Entry: 0x00238430, Ghidra index: 7873, label: FUN_00238430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
uint FUN_00238430(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *in_EDX;
  
  if (in_EDX == (byte *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  bVar2 = *in_EDX;
  while (bVar2 != 0) {
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_003bc150 + ((bVar2 ^ uVar3) & 0xff) * 4);
    pbVar1 = in_EDX + 1;
    in_EDX = in_EDX + 1;
    bVar2 = *pbVar1;
  }
  return ~uVar3;
}
