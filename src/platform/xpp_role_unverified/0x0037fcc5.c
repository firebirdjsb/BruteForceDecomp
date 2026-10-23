/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A50702FCD3EC3E39236DB2E8385733C5DA3C8EAE9B47E72144644F780A075CC3
 * Entry: 0x0037fcc5, Ghidra index: 13513, label: XGetDevices
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XGetDevices(undefined4 *param_1)

{
  undefined4 uVar1;
  
  KeRaiseIrqlToDpcLevel();
  uVar1 = *param_1;
  param_1[1] = 0;
  param_1[2] = uVar1;
  KfLowerIrql();
  return uVar1;
}
