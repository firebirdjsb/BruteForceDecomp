/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D164B8AA878B918FA8AD0CCBBC8757DAD3AC2B4CEBFC4E19A2A7054DFF63D4EF
 * Entry: 0x0014a780, Ghidra index: 4294, label: FUN_0014a780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014a780(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EDX;
  
  uVar1 = 8;
  uVar2 = 8;
  switch(*(undefined1 *)(in_EDX + 0x1b8)) {
  case 0:
    uVar1 = 3;
    uVar2 = 0;
    break;
  case 1:
    uVar1 = 4;
    uVar2 = 6;
    break;
  case 2:
    uVar2 = 5;
    goto LAB_0014a7c4;
  case 3:
  case 6:
    uVar1 = 1;
    uVar2 = 0;
    break;
  case 4:
  case 5:
    uVar2 = 1;
LAB_0014a7c4:
    uVar1 = 2;
  }
  if (param_1 == '\0') {
    uVar1 = uVar2;
  }
  return uVar1;
}
