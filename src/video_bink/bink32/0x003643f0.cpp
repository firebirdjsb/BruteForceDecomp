/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 148E03452FF21EF97BDB69A3C9FB375CD35EADCB2260061D48D90793BDEB5208
 * Entry: 0x003643f0, Ghidra index: 13238, label: FUN_003643f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004be360;
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be764;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be76c;
int FUN_003643f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = (&DAT_004be360)[*DAT_004be768];
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1;
    DAT_004be760[1] = uVar1;
    uVar1 = (&DAT_004be360)[*DAT_004be76c];
    DAT_004be76c = DAT_004be76c + 1;
    *DAT_004be764 = uVar1;
    DAT_004be764[1] = uVar1;
    DAT_004be760 = DAT_004be760 + 2;
    DAT_004be764 = DAT_004be764 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1 + param_2;
}
