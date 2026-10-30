/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F11D7BCE5DD5E19F4DDC6DB6CB0B9F45A758F00A521A1AC3D21806132B52EF34
 * Entry: 0x001d2950, Ghidra index: 6301, label: FUN_001d2950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d2950(void)

{
  int in_EAX;
  int in_ECX;
  
  FUN_001d2af0(in_EAX);
  *(undefined4 *)(in_ECX + 0x344) = *(undefined4 *)(in_EAX + 0x344);
  *(undefined4 *)(in_ECX + 0x348) = *(undefined4 *)(in_EAX + 0x348);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(in_EAX + 0x34c);
  *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(in_EAX + 0x350);
  *(undefined4 *)(in_ECX + 0x354) = *(undefined4 *)(in_EAX + 0x354);
  *(undefined4 *)(in_ECX + 0x358) = *(undefined4 *)(in_EAX + 0x358);
  *(undefined4 *)(in_ECX + 0x35c) = *(undefined4 *)(in_EAX + 0x35c);
  *(undefined4 *)(in_ECX + 0x360) = *(undefined4 *)(in_EAX + 0x360);
  *(undefined4 *)(in_ECX + 0x364) = *(undefined4 *)(in_EAX + 0x364);
  return;
}
