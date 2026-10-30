/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 217D84CC10C5B0CDF8EEA937E285438B08FE4E6094205064839BF4C2F1DB3B8F
 * Entry: 0x0031c9ff, Ghidra index: 12348, label: FUN_0031c9ff
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c9ff(undefined4 param_1,uint param_2)

{
  int *in_ECX;
  
  *(undefined4 *)(**(int **)(*in_ECX + 0x10) + 0x448) = param_1;
  *(undefined4 *)(**(int **)(*in_ECX + 0x10) + 0x460) = 1;
  *(undefined4 *)(**(int **)(*in_ECX + 0x10) + 0x468) = 1;
  *(uint *)(**(int **)(*in_ECX + 0x10) + 0x44c) = param_2 >> 2;
  return;
}
