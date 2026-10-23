/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F83EFE7B75936AB26C21C47F03607E7B5965ACC80A8D174F10E6FC49723D145
 * Entry: 0x00365920, Ghidra index: 13246, label: FUN_00365920
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
extern uint32_t *DAT_004be778;
extern uint32_t *DAT_004be77c;
extern uint32_t DAT_004be7a4;
int FUN_00365920(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = (&DAT_004be360)[*DAT_004be768] | (uint)*DAT_004be778 << 0x18;
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1;
    DAT_004be760[1] = uVar1;
    *(uint *)(DAT_004be7a4 + (int)DAT_004be760) = uVar1;
    *(uint *)(DAT_004be7a4 + 4 + (int)DAT_004be760) = uVar1;
    uVar1 = (&DAT_004be360)[*DAT_004be76c] | (uint)*DAT_004be77c << 0x18;
    DAT_004be77c = DAT_004be77c + 1;
    DAT_004be76c = DAT_004be76c + 1;
    *DAT_004be764 = uVar1;
    DAT_004be764[1] = uVar1;
    *(uint *)((int)DAT_004be764 + DAT_004be7a4) = uVar1;
    *(uint *)((int)DAT_004be764 + DAT_004be7a4 + 4) = uVar1;
    DAT_004be760 = DAT_004be760 + 2;
    DAT_004be764 = DAT_004be764 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_2 + param_1;
}
