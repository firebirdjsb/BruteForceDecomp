/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E01B6CA172D70A06229A70C750D1EAEAE252B80A61D89113C6F7C48C4598689
 * Entry: 0x002e5890, Ghidra index: 10478, label: FUN_002e5890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e5890(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x48a8) != 0) {
    FUN_00345063(*(int *)(in_ECX + 0x48a8));
    *(undefined4 *)(in_ECX + 0x48a8) = 0;
  }
  XAPILIB__ResetEvent(*(undefined4 *)(in_ECX + 0x48a4));
  *(undefined4 *)(in_ECX + 0x48ac) = 0;
  *(undefined4 *)(in_ECX + 0x48b0) = 0;
  if (*(int *)(in_ECX + 0x4898) == 0) {
    (**(code **)(*(int *)(in_ECX + 0x38) + 0x18))();
  }
  piVar1 = (int *)(in_ECX + 0x2a0);
  iVar2 = 0x1d;
  do {
    (**(code **)(*piVar1 + 0x18))();
    piVar1 = piVar1 + 0x9a;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}
