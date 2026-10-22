/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32A0636AFED619E37AE28D9F74ED2487D2D8C968ED96BD366020BCCAEAE7A6C1
 * Entry: 0x003149bb, Ghidra index: 12075, label: FUN_003149bb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f470;
extern uint32_t DAT_0032f480;
undefined4 FUN_003149bb(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = (int *)(param_2 + 0x18);
  piVar3 = &DAT_0032f480;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    FUN_0031496b(param_1,param_2);
  }
  else {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = (int *)(param_2 + 0x18);
    piVar3 = &DAT_0032f470;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      FUN_00314994(param_1,param_2);
    }
  }
  return *(undefined4 *)(param_2 + 0x14);
}
