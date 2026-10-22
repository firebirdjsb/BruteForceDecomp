/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85A4AFD9632AB407AF27D7E2C3B643D821EEFB3DF27CDE0135089941C579D0E0
 * Entry: 0x0036a7c0, Ghidra index: 13271, label: FUN_0036a7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be764;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be76c;
int FUN_0036a7c0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    *DAT_004be760 = (uint)*DAT_004be768 << 0x10 | (uint)*DAT_004be768 | 0x80008000;
    pbVar1 = DAT_004be768 + 1;
    DAT_004be768 = DAT_004be768 + 2;
    DAT_004be760[1] = (uint)*pbVar1 << 0x10 | (uint)*pbVar1 | 0x80008000;
    *DAT_004be764 = (uint)*DAT_004be76c << 0x10 | (uint)*DAT_004be76c | 0x80008000;
    pbVar1 = DAT_004be76c + 1;
    DAT_004be76c = DAT_004be76c + 2;
    DAT_004be764[1] = (uint)*pbVar1 << 0x10 | (uint)*pbVar1 | 0x80008000;
    DAT_004be760 = DAT_004be760 + 2;
    DAT_004be764 = DAT_004be764 + 2;
    iVar2 = iVar2 + -2;
  } while (0 < iVar2);
  return param_1 + param_2;
}
