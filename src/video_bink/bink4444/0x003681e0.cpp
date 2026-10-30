/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79F6F5D99AA4FE77B68C2AD0A3452103F493EABBA60A2762DCF804FFE0BC2A76
 * Entry: 0x003681e0, Ghidra index: 13259, label: FUN_003681e0
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
int FUN_003681e0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = *(ushort *)(&DAT_004b6ac0 + *DAT_004be778) | *(ushort *)(&DAT_004bdb60 + *DAT_004be768);
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1;
    DAT_004be760[1] = uVar1;
    *(ushort *)(DAT_004be7a4 + (int)DAT_004be760) = uVar1;
    *(ushort *)(DAT_004be7a4 + 2 + (int)DAT_004be760) = uVar1;
    uVar1 = *(ushort *)(&DAT_004b6ac0 + *DAT_004be77c) | *(ushort *)(&DAT_004bdb60 + *DAT_004be76c);
    DAT_004be77c = DAT_004be77c + 1;
    DAT_004be76c = DAT_004be76c + 1;
    *DAT_004be764 = uVar1;
    DAT_004be764[1] = uVar1;
    *(ushort *)((int)DAT_004be764 + DAT_004be7a4) = uVar1;
    *(ushort *)((int)DAT_004be764 + DAT_004be7a4 + 2) = uVar1;
    DAT_004be760 = DAT_004be760 + 2;
    DAT_004be764 = DAT_004be764 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_2 + param_1;
}
