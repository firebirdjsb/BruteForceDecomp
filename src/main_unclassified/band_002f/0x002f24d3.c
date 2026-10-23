/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9071B0D2ADEDE10F2633B084EBA8BAD97AB3DDA84BE908411006119E09344B03
 * Entry: 0x002f24d3, Ghidra index: 10798, label: FUN_002f24d3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8e98;
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002f24d3(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  
  if (param_1 < DAT_004a8e98) {
    pbVar1 = (byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8);
    bVar2 = *pbVar1;
    if ((bVar2 & 1) != 0) {
      if (param_2 == 0x8000) {
        bVar3 = bVar2 & 0x7f;
      }
      else {
        if (param_2 != 0x4000) {
          _DAT_0040f4d8 = 0x16;
          return -1;
        }
        bVar3 = bVar2 | 0x80;
      }
      *pbVar1 = bVar3;
      return (-(uint)((bVar2 & 0x80) != 0) & 0xffffc000) + 0x8000;
    }
  }
  _DAT_0040f4d8 = 9;
  return -1;
}
