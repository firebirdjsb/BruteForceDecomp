/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C089722053E5E8D2D130A89815DBDE8EDC07462F950BB5614FD7479CD4BC728
 * Entry: 0x002e9b40, Ghidra index: 10560, label: FUN_002e9b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f0d0;
void FUN_002e9b40(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  uint uVar3;
  
  for (uVar3 = param_2; (((uint)param_1 & 3) != 0 && (uVar3 != 0)); uVar3 = uVar3 - 1) {
    uVar1 = *param_1;
    param_1 = (uint *)((int)param_1 + 1);
    *in_ECX = *(uint *)(&DAT_0040f0d0 + (uint)(byte)((byte)uVar1 ^ (byte)*in_ECX) * 4) ^
              *in_ECX >> 8;
  }
  if (3 < uVar3) {
    param_2 = uVar3 >> 2;
    do {
      uVar1 = *param_1;
      uVar2 = *(uint *)(&DAT_0040f0d0 + ((uint)(byte)*in_ECX ^ uVar1 & 0xff) * 4) ^ *in_ECX >> 8;
      *in_ECX = uVar2;
      uVar2 = *(uint *)(&DAT_0040f0d0 + (uVar2 & 0xff ^ uVar1 >> 8 & 0xff) * 4) ^ uVar2 >> 8;
      *in_ECX = uVar2;
      uVar2 = *(uint *)(&DAT_0040f0d0 + (uVar2 & 0xff ^ uVar1 >> 0x10 & 0xff) * 4) ^ uVar2 >> 8;
      *in_ECX = uVar2;
      param_1 = param_1 + 1;
      uVar3 = uVar3 - 4;
      param_2 = param_2 - 1;
      *in_ECX = *(uint *)(&DAT_0040f0d0 + (uVar2 & 0xff ^ uVar1 >> 0x18) * 4) ^ uVar2 >> 8;
    } while (param_2 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *param_1;
    param_1 = (uint *)((int)param_1 + 1);
    *in_ECX = *(uint *)(&DAT_0040f0d0 + (uint)(byte)((byte)uVar1 ^ (byte)*in_ECX) * 4) ^
              *in_ECX >> 8;
  }
  return;
}
