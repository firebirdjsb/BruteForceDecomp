/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 490B3AAE1925A5254D98889F8F7D0F83E66F61B426805F81E72A7170143A1053
 * Entry: 0x00288780, Ghidra index: 9112, label: FUN_00288780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00288780(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *__src;
  int in_ECX;
  int in_EDX;
  char *unaff_ESI;
  size_t unaff_EDI;
  
  if (0 < in_EDX) {
    puVar2 = (undefined4 *)0x0;
    if (*(undefined4 **)(in_ECX + 0x20) != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x20);
    }
    for (; puVar2 != *(undefined4 **)(in_ECX + 0x20); puVar2 = (undefined4 *)*puVar2) {
      in_EDX = in_EDX + -1;
      if (in_EDX == 0) {
        iVar1 = puVar2[2];
        if (*(int *)(iVar1 + 0x30) == 0) {
          if (*(uint *)(iVar1 + 0x18) < 0x10) {
            __src = (char *)(iVar1 + 4);
          }
          else {
            __src = *(char **)(iVar1 + 4);
          }
          _strncpy(unaff_ESI,__src,unaff_EDI);
          unaff_ESI[unaff_EDI - 1] = '\0';
          return 1;
        }
        FUN_002eaa19();
        return 1;
      }
    }
  }
  return 0;
}
