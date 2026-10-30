/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C26E1CB00C3478FA2E77E55ED4BD79F3BEE2F2BA1B8922808DCDDCEEB94F2D96
 * Entry: 0x00090800, Ghidra index: 1774, label: FUN_00090800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00090800(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  switch(*(byte *)(param_1 + 8) & 0xf) {
  default:
    param_1 = 1;
    break;
  case 1:
    param_1 = 3;
    break;
  case 2:
    param_1 = 2;
    break;
  case 3:
    param_1 = 4;
    break;
  case 4:
    param_1 = 5;
  }
  FUN_0006a610(&param_1);
  switch(*(byte *)(iVar1 + 8) >> 4) {
  default:
    param_1 = 1;
    break;
  case 1:
    param_1 = 3;
    break;
  case 2:
    param_1 = 2;
    break;
  case 3:
    param_1 = 4;
    break;
  case 4:
    param_1 = 5;
  }
  FUN_0006a610(&param_1);
  return;
}
