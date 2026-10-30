/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33C2F67C8E2EA4F545CDCCBDB3D1CAA345C8811E44B4132893AE72A55D0A9887
 * Entry: 0x00380fe3, Ghidra index: 13551, label: FUN_00380fe3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00380fe3(int param_1)

{
  if (param_1 < -0x3ffffff0) {
    if (param_1 == -0x3ffffff1) {
      return 0x4c7;
    }
    if (param_1 != -0x80000000) {
      if (param_1 == -0x7fffff00) {
        return 0xe;
      }
      if (param_1 == -0x7ffff800) {
        return 0x5aa;
      }
      if (param_1 < -0x40000000) {
        return 0x1f;
      }
      if (-0x3ffffff2 < param_1) {
        return 0x1f;
      }
    }
  }
  else if (param_1 != -0x3ffffff0) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 != 0x40000000) {
      return 0x1f;
    }
    return 0x3e5;
  }
  return 0x45d;
}
