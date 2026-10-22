/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B123CA18B05ECBF9831A5E96F5026C197C1E741CC60216152AD1C6F0E56A716E
 * Entry: 0x00147d70, Ghidra index: 4244, label: FUN_00147d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00310260; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00310260(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a88f8;
extern uint32_t DAT_004a88fc;
extern uint32_t _DAT_004a88f8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00147d70(void)

{
  char cVar1;
  int in_EAX;
  
  if (((*(byte *)(in_EAX + 0xc) & 2) != 0) && ((*(byte *)(in_EAX + 0xc) & 4) == 0)) {
    if ((DAT_004a88fc & 1) == 0) {
      DAT_004a88fc = DAT_004a88fc | 1;
      _DAT_004a88f8 = 0xf00b38e4;
      _atexit(FUN_00310260);
    }
    cVar1 = FUN_00147c20(&DAT_004a88f8,0);
    *(byte *)(in_EAX + 0xc) = *(byte *)(in_EAX + 0xc) ^ (cVar1 << 2 ^ *(byte *)(in_EAX + 0xc)) & 4;
  }
  return;
}
