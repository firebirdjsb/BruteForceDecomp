/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB70AF6CACB8520D751AB4801ED044030322D8FAEC1D1A1764E4936F8634A1A1
 * Entry: 0x00368af0, Ghidra index: 13260, label: FUN_00368af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b6ac0;
extern uint32_t DAT_004bdb60;
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be778;
void FUN_00368af0(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *DAT_004be778;
    bVar2 = *DAT_004be768;
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = *(ushort *)(&DAT_004b6ac0 + bVar1) | *(ushort *)(&DAT_004bdb60 + bVar2);
    DAT_004be760 = DAT_004be760 + 1;
  }
  return;
}
