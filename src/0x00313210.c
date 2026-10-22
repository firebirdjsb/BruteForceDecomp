/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDC3AF2823CE4A6B9392C68BE70763DF2A9326B4BC285CACA2151B11B1724642
 * Entry: 0x00313210, Ghidra index: 11998, label: FUN_00313210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00313210(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_00311f35();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
