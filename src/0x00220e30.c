/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E19522FF4B1A58F79F3B3398990B77A23294ECCA097976DD34495077BAC11748
 * Entry: 0x00220e30, Ghidra index: 7562, label: FUN_00220e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00220e30(int param_1)

{
  int in_EAX;
  
  *(short *)(in_EAX + 0x104) = *(short *)(in_EAX + 0x104) + 1;
  if (*(char *)(in_EAX + 0x78) < param_1) {
    *(undefined1 *)(in_EAX + 0x78) = (undefined1)param_1;
    return;
  }
  *(char *)(in_EAX + 0x78) = *(char *)(in_EAX + 0x78);
  return;
}
