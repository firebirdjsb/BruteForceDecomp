/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02D495DD3F396C5D36671A1223DA8501CA60A1FFF72E94795024BC622954436A
 * Entry: 0x002e3560, Ghidra index: 10405, label: FUN_002e3560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; Xbox guest ABI_UNVERIFIED. */
extern ushort FUN_00345df1(ushort param_1);
void FUN_002e3560(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 *in_ECX;
  
  *in_ECX = 2;
  *(undefined4 *)(in_ECX + 2) = param_1;
  uVar1 = FUN_00345df1(param_2);
  in_ECX[1] = uVar1;
  return;
}
