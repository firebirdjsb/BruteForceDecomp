/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D921F7F6A3B6562B52ED3268926843F87762499FED3FE7FF1B26E4782CDDC028
 * Entry: 0x000f6990, Ghidra index: 3085, label: FUN_000f6990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000f6990(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  undefined1 auStack_4 [4];
  
  if (in_EAX != (int *)0x0) {
    iVar2 = (**(code **)(*in_EAX + 4))();
    if (iVar2 == 3) {
      cVar1 = FUN_00072380();
      if (cVar1 == '\x01') {
        cVar1 = (**(code **)(**(int **)(unaff_EDI + 0xbec) + 0x30))();
        if (cVar1 == '\0') {
          piVar3 = (int *)FUN_0010c850();
          iVar2 = (**(code **)(**(int **)(unaff_EDI + 0xbec) + 0x10))(auStack_4);
          if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x10), iVar2 != 0)) {
            if (*piVar3 == 0x9ea5d10) {
              FUN_00126df0();
              return 1;
            }
            if (*piVar3 == -0xc4cbeb7) {
              *(undefined4 *)(iVar2 + 0x644) = 1;
              if (*(int *)(iVar2 + 0x5e4) != 0) {
                *(undefined4 *)(*(int *)(iVar2 + 0x5e4) + 0xd8) = 1;
              }
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
}
