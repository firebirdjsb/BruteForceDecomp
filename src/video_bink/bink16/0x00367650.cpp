/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49ED0A807E78A4F2C5BF2985049B03F11A8F83933E0162EA2F190E216A4CFF5D
 * Entry: 0x00367650, Ghidra index: 13251, label: FUN_00367650
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
int FUN_00367650(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    bVar1 = *DAT_004be768;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = *(undefined2 *)(&DAT_004bdb60 + bVar1);
    bVar1 = *DAT_004be76c;
    DAT_004be76c = DAT_004be76c + 1;
    *DAT_004be764 = *(undefined2 *)(&DAT_004bdb60 + bVar1);
    DAT_004be760 = DAT_004be760 + 1;
    DAT_004be764 = DAT_004be764 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1 + param_2;
}
