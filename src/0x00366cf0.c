/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFF9BEA9E2B7B706088FC8CC83AB8774D917216FFDD9AE96DD4205FC632E5D91
 * Entry: 0x00366cf0, Ghidra index: 13250, label: FUN_00366cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004bdb60;
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be764;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be76c;
int FUN_00366cf0(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = *(undefined2 *)(&DAT_004bdb60 + *DAT_004be768);
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1;
    DAT_004be760[1] = uVar1;
    uVar1 = *(undefined2 *)(&DAT_004bdb60 + *DAT_004be76c);
    DAT_004be76c = DAT_004be76c + 1;
    *DAT_004be764 = uVar1;
    DAT_004be764[1] = uVar1;
    DAT_004be760 = DAT_004be760 + 2;
    DAT_004be764 = DAT_004be764 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1 + param_2;
}
