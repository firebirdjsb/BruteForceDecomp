/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8569867EB74596349069AD24782E7C8F9F4FEFDB034308728EEB12F9AAF0885
 * Entry: 0x002f5719, Ghidra index: 10895, label: XComputeContentSignatureKey
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void XAPILIB__XComputeContentSignatureKey(undefined4 param_1,undefined4 param_2)

{
  XcHMAC(XboxHDKey_exref,0x10,&param_1,4,0,0,param_2);
  return;
}
