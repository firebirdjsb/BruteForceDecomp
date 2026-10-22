/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0151000E56CC4FE477DD170EEA9E29CBF3E23D1BAE48D4123F5CADE266DB797
 * Entry: 0x002e7880, Ghidra index: 10521, label: FUN_002e7880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e7880(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(in_ECX + 0x14);
  *(undefined1 *)(in_ECX + 5) = 0;
  *(undefined1 *)(in_ECX + 6) = 0xff;
  *(undefined1 *)(in_ECX + 7) = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x10) = 0xffffffff;
  iVar3 = 4;
  piVar2 = piVar4;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 4) = 0;
      *(undefined1 *)(iVar1 + 5) = 0;
      *(undefined1 *)(iVar1 + 6) = 0xff;
      *(undefined1 *)(iVar1 + 7) = 0xff;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 4;
  do {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      if (*(code **)(in_ECX + 0x28) == (code *)0x0) {
        (**(code **)(*piVar2 + 0xc))(1);
      }
      else {
        (**(code **)(in_ECX + 0x28))(piVar2);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}
