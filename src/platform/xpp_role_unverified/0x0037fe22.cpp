/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 658FECAF21972E8335C80D4D8C1E7AF9CE404A89021C6DEAE926AC390E0DC6C5
 * Entry: 0x0037fe22, Ghidra index: 13518, label: XInputSetState
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XInputSetState(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0xa3) + 0x28) & 0x20) == 0) {
    *(undefined1 *)(param_2 + 0x40) = 0;
    *(char *)(param_2 + 0x41) = **(char **)(*(int *)(param_1 + 0xa3) + 0xc) + '\x02';
    uVar1 = FUN_003807b0();
  }
  else {
    uVar1 = 0x57;
  }
  return uVar1;
}
