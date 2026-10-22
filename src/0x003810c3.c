/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C05F1716E977F0DF49379C63607020DFA57955CD8666B989E1CEA2E0F3572640
 * Entry: 0x003810c3, Ghidra index: 13554, label: FUN_003810c3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004127ac;
extern uint32_t DAT_004127ae;
extern uint32_t DAT_004127fc;
byte * FUN_003810c3(byte param_1,char param_2,char param_3)

{
  byte *pbVar1;
  bool bVar2;
  
  pbVar1 = DAT_004127fc;
  while( true ) {
    if (*pbVar1 == 0) {
      return (byte *)0x0;
    }
    pbVar1 = pbVar1 + *pbVar1;
    if (&DAT_004127ac + DAT_004127ae <= pbVar1) break;
    if ((((pbVar1[1] == 5) && ((pbVar1[3] & 3) == param_1)) && (param_1 != 0)) &&
       (((bool)(~(pbVar1[2] >> 7) & 1) == (param_2 == '\0') &&
        (bVar2 = param_3 == '\0', param_3 = param_3 + -1, bVar2)))) {
      return pbVar1;
    }
    if (pbVar1[1] == 4) {
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
