/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50FCD16A5A314735B9034D8A846E63B9021AC35CFBD6D21BFB475F77ED6797C9
 * Entry: 0x0033bcec, Ghidra index: 12535, label: FUN_0033bcec
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bcec(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    iVar2 = *(int *)(in_ECX + 0x18);
    if (iVar2 != 0) {
      if ((*(int *)(in_ECX + 0x14) < 2) || (4 < *(int *)(in_ECX + 0x14))) {
        iVar2 = *(int *)(iVar1 + 0x898);
      }
      if (iVar2 != 0) {
        do {
          iVar1 = FUN_00330c3e(iVar2);
          *(int *)(in_ECX + 0x2c) = iVar1;
        } while (iVar1 == 0);
      }
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8) = 0;
  }
  return;
}
