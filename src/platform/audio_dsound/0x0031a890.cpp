/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A1C0662FE3027FCCE2040B8AB5E8FAF41C41DD83112F9EF395D31A16939D097
 * Entry: 0x0031a890, Ghidra index: 12266, label: FUN_0031a890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031a890(byte param_1)

{
  int in_ECX;
  
  FUN_0031a4dc();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX + -4);
  }
  return in_ECX + -4;
}
