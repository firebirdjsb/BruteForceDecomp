/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95D8E39B546CC24FFD694ED5633435CC850D5DF9322BA22E437C9E58EB832C6F
 * Entry: 0x0014a4f0, Ghidra index: 4290, label: FUN_0014a4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
void FUN_0014a4f0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  
  iVar3 = *(int *)(in_ECX + 0x1b0);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) == 0) {
      if ((*(int *)(iVar3 + 0x10) == 0) ||
         (iVar2 = *(int *)(*(int *)(iVar3 + 0x10) + 0xb0), *(int *)(*(int *)(iVar2 + 0xc) + 4) != 3)
         ) goto LAB_0014a565;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar3 + 8) + 0x1d4);
    }
    if (iVar2 != 0) {
      if (*(int *)(iVar3 + 8) == 0) {
        if ((*(int *)(iVar3 + 0x10) == 0) ||
           (iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0xb0),
           *(int *)(*(int *)(iVar3 + 0xc) + 4) != 3)) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0x1d4);
      }
      if (*(int *)(iVar3 + 0x1ec) == 8) {
        FUN_0014ab50();
        FUN_001215e0();
      }
    }
  }
LAB_0014a565:
  fVar4 = (float10)(**(code **)(*DAT_00469b54 + 0x44))();
  fVar1 = *(float *)(in_ECX + 0x14c);
  *(float *)(in_ECX + 0x14c) = (float)fVar4;
  if ((float10)0.5 <= fVar4 - (float10)fVar1) {
    *(undefined1 *)(in_ECX + 0x74) = 1;
    return;
  }
  *(char *)(in_ECX + 0x74) = *(char *)(in_ECX + 0x74) + '\x01';
  return;
}
