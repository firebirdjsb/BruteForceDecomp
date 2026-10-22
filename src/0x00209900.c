/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CC1376D002DE373E56857F4E65F76C2CBB9FAE75DC8101AFE799C0949E31A76
 * Entry: 0x00209900, Ghidra index: 7324, label: FUN_00209900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00209900(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0xc4);
  if ((((piVar1 != (int *)0x0) && ((*(byte *)(piVar1[3] + 0x1a8) & 1) != 0)) &&
      (piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))(), *piVar3 == 0x17506391))
     && (cVar2 = (**(code **)(**(int **)(*(int *)(unaff_EDI + 0x10) + 0xbec) + 0x74))(piVar1),
        cVar2 != '\0')) {
    if ((*(byte *)(unaff_EDI + 0xe4) & 0x20) != 0) {
      pcVar4 = (char *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0xcc))();
      if (*pcVar4 == '\0') {
        cVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xb8))(piVar1);
        if (cVar2 != '\0') {
          return 1;
        }
        (**(code **)(*piVar1 + 0xbc))();
        FUN_001fba20();
        (**(code **)(*piVar1 + 0x144))(1);
        FUN_0010f830(piVar1 + 0x12,0);
        (**(code **)(*piVar1 + 0xa0))();
        return 0;
      }
      if ((*(byte *)(unaff_EDI + 0xe4) & 0x20) != 0) {
        return 1;
      }
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xbc))(piVar1,1);
  }
  return 1;
}
