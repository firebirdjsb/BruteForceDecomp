/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43F9AFCDD9F89914BBB46F35CF508E00231898EAB29C368EEC268F2532DF56BB
 * Entry: 0x001d1dc0, Ghidra index: 6292, label: FUN_001d1dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1dc0(undefined4 *param_1)

{
  undefined4 *unaff_EBX;
  
  *unaff_EBX = *param_1;
  unaff_EBX[1] = param_1[1];
  unaff_EBX[2] = param_1[2];
  unaff_EBX[3] = param_1[3];
  unaff_EBX[4] = param_1[4];
  FUN_000fdba0();
  FUN_0010bc40();
  unaff_EBX[10] = param_1[10];
  FUN_000fdba0();
  FUN_00248d00();
  FUN_001d46c0();
  return;
}
