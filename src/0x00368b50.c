/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 420AC8DB2ED0BA537C137AA57283CC57CFF071BAE0E6C9C28A8FBC4437F0B172
 * Entry: 0x00368b50, Ghidra index: 13261, label: FUN_00368b50
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
extern uint32_t *DAT_004be764;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be76c;
extern uint32_t *DAT_004be778;
extern uint32_t *DAT_004be77c;
int FUN_00368b50(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_004be778;
    bVar2 = *DAT_004be768;
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = *(ushort *)(&DAT_004b6ac0 + bVar1) | *(ushort *)(&DAT_004bdb60 + bVar2);
    bVar1 = *DAT_004be77c;
    bVar2 = *DAT_004be76c;
    DAT_004be77c = DAT_004be77c + 1;
    DAT_004be76c = DAT_004be76c + 1;
    *DAT_004be764 = *(ushort *)(&DAT_004b6ac0 + bVar1) | *(ushort *)(&DAT_004bdb60 + bVar2);
    DAT_004be760 = DAT_004be760 + 1;
    DAT_004be764 = DAT_004be764 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}
