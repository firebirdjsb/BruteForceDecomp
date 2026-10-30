/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62770FE5604E96FE31B250B3A77547BC3C377C9420571E6A3223FAD52BC8570C
 * Entry: 0x0007c900, Ghidra index: 1480, label: FUN_0007c900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0007c900(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  iVar2 = 8;
  do {
    iVar1 = (**(code **)(*in_ECX + 0x130))(iVar3);
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x128))(iVar1);
      (**(code **)(*in_ECX + 0x134))(iVar3);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
