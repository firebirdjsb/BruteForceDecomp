/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 467CAB44257EBAAB2C1FAC395257490E84BE82AA660E6ADBE229FEBC5913CE3A
 * Entry: 0x002012c0, Ghidra index: 7256, label: FUN_002012c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_002012c0(undefined4 param_1,int *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(in_ECX + 0x40);
    if (*param_2 == -0xb63cf51) {
      if ((char)param_1 != '\0') {
        *param_3 = uVar2;
        *(undefined1 *)(in_ECX + 0x40) = uVar2;
        return '\x01';
      }
      uVar2 = *param_3;
      cVar1 = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x40) = uVar2;
  }
  return cVar1;
}
