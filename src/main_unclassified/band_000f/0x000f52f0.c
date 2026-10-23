/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4C1589D60335F4A9E48AB98BEE78B58777CB377B5A90797ED72406BADB59C76
 * Entry: 0x000f52f0, Ghidra index: 3071, label: FUN_000f52f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_000f52f0(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  undefined4 uStack_4;
  
  cVar1 = '\0';
  if (in_EAX != (int *)0x0) {
    iVar2 = (**(code **)(*in_EAX + 4))();
    if (iVar2 == 8) {
      piVar3 = (int *)FUN_00103000();
      if (*piVar3 == 0) {
        uStack_4 = 0xfd890279;
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&uStack_4);
        return '\0';
      }
      *(int *)(unaff_EDI + 0x14) = *piVar3;
      cVar1 = FUN_001ecf10(unaff_EDI + 0x18);
      if (cVar1 == '\0') {
        return '\0';
      }
      cVar1 = FUN_001ecf80(*(undefined4 *)(unaff_EDI + 0x14));
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20c))((int)*(short *)(unaff_EDI + 0x220));
      }
    }
  }
  return cVar1;
}
