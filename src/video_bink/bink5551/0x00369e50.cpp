/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B4BFD1ECF06761BBD7D12B2179A089852A61EA7BAE51ACCABF05DCC556C1E14
 * Entry: 0x00369e50, Ghidra index: 13267, label: FUN_00369e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004bdb60;
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be778;
void FUN_00369e50(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *DAT_004be778;
    bVar2 = *DAT_004be768;
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = *(ushort *)(&DAT_004bdb60 + bVar2) | (bVar1 & 0x80) << 8;
    DAT_004be760 = DAT_004be760 + 1;
  }
  return;
}
