/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D73B2FACC1187F20BCCF58ECC16B7062316AE7745A14244444109375E554E7A4
 * Entry: 0x000ba350, Ghidra index: 2254, label: FUN_000ba350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c9024;
void FUN_000ba350(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x1384 + param_2 * 8);
  iVar2 = *(int *)(&DAT_003c9024 + param_2 * 4);
  if (iVar2 != param_2) {
    do {
      fVar1 = *(float *)(param_1 + 0x1384 + iVar2 * 8);
      if (fVar4 <= fVar1) {
        fVar4 = fVar1;
      }
      bVar3 = *(int *)(&DAT_003c9024 + iVar2 * 4) != iVar2;
      iVar2 = *(int *)(&DAT_003c9024 + iVar2 * 4);
    } while (bVar3);
  }
  return;
}
