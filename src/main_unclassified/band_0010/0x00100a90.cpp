/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EF9ECDFA60D128A2EFF6AD31AD76DD82EF67709F99AA5317A7FEBD0ED5C4331
 * Entry: 0x00100a90, Ghidra index: 3220, label: FUN_00100a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_00469b58;
void FUN_00100a90(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int unaff_ESI;
  bool bVar4;
  
  bVar4 = *(int *)(unaff_ESI + 0x24) == -0x20e7933;
  if (((*(byte *)(unaff_ESI + 100) & 1) == 0) ||
     (cVar3 = '\x01', *(int *)(DAT_0046995c + 0x1c) != 0)) {
LAB_00100afc:
    cVar3 = '\0';
    if (bVar4) {
      *(byte *)(unaff_ESI + 0x66) = *(byte *)(unaff_ESI + 0x66) | 8;
    }
  }
  else {
    if ((*(byte *)(unaff_ESI + 0x65) & 3) != 0) {
      if (bVar4) {
        piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
        if (*piVar1 != 0x17506391) goto LAB_00100afc;
      }
      else if ((*(int *)(unaff_ESI + 0xa8) != 0) &&
              (iVar2 = (**(code **)(**(int **)(*(int *)(unaff_ESI + 0xa8) + 0xbec) + 0x34))(),
              1 < iVar2)) {
        cVar3 = '\0';
        goto LAB_00100b04;
      }
    }
    (**(code **)(*DAT_00469b54 + 0x10))(*(byte *)(unaff_ESI + 0x66) >> 1 & 1);
  }
LAB_00100b04:
  *(byte *)(unaff_ESI + 100) =
       *(byte *)(unaff_ESI + 100) ^ (cVar3 << 2 ^ *(byte *)(unaff_ESI + 100)) & 4;
  return;
}
