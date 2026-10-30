/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99C6AA4245B889E3C442A438171612AA2A4A3718A6E41FFD6C201C0EEF65453C
 * Entry: 0x00367f30, Ghidra index: 13255, label: FUN_00367f30
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
extern uint32_t DAT_004be7a4;
int FUN_00367f30(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    uVar1 = *(ushort *)(&DAT_004b6ac0 + *DAT_004be778);
    uVar2 = *(ushort *)(&DAT_004bdb60 + *DAT_004be768);
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1 | uVar2;
    *(ushort *)(DAT_004be7a4 + (int)DAT_004be760) = uVar1 | uVar2;
    uVar1 = *(ushort *)(&DAT_004b6ac0 + *DAT_004be77c);
    uVar2 = *(ushort *)(&DAT_004bdb60 + *DAT_004be76c);
    DAT_004be77c = DAT_004be77c + 1;
    DAT_004be76c = DAT_004be76c + 1;
    *DAT_004be764 = uVar1 | uVar2;
    *(ushort *)((int)DAT_004be764 + DAT_004be7a4) = uVar1 | uVar2;
    DAT_004be760 = DAT_004be760 + 1;
    DAT_004be764 = DAT_004be764 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}
