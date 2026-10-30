/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64414F814A0285D5A8E513C381861A2B5B28471935D59CA84E81FFE96E87729D
 * Entry: 0x000c8640, Ghidra index: 2467, label: FUN_000c8640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_000c8470(void);

undefined4 FUN_000c8640(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  
  piVar4 = (int *)(in_EAX + 0x34);
  iVar2 = 0;
  piVar3 = piVar4;
  do {
    if (*piVar3 == unaff_EDI) {
      if (((0 < iVar2) && (iVar2 < 5)) && (*(char *)(iVar2 + 0x58 + in_EAX) != '\0')) {
        iVar2 = 0;
        do {
          if (*piVar4 == unaff_EDI) {
            if (iVar2 != 0) {
              *(undefined1 *)(iVar2 + 0x58 + in_EAX) = 0;
            }
            return 0;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar2 < 5);
        return 0;
      }
      break;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar2 < 5);
  cVar1 = FUN_000c8470();
  if (cVar1 != '\0') {
    iVar2 = 0;
    while (*piVar4 != unaff_EDI) {
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 2;
      if (4 < iVar2) {
        return 1;
      }
    }
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x58 + in_EAX) = 1;
    }
  }
  return 1;
}
