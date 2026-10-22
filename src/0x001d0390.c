/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A13529DCA23EA429F3D5DA8C3114BC3CF32D4CF05FCE961D8C20DB8C45D6D50A
 * Entry: 0x001d0390, Ghidra index: 6167, label: FUN_001d0390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0390(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    param_1[3] = in_ECX[3];
    param_1[4] = in_ECX[4];
  }
  return;
}
