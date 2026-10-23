/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F2C2791F1C6EA3D4D652ADFA44165FF9C85A6C45DF875F08B2E0E657884DB0A
 * Entry: 0x00317439, Ghidra index: 12174, label: FUN_00317439
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00317439(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_00317146();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
