/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1174038FE1C3D992D9E1B357E33E1EECE3B63AFF8C1DC892CF13A736202F0C20
 * Entry: 0x002f338c, Ghidra index: 10830, label: XCalculateSignatureBegin
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_certificate_layout.h"
void XAPILIB__XCalculateSignatureBegin(undefined4 param_1)

{
  XCalculateSignatureBeginEx(param_1,XBE_CERTIFICATE_HEADER_00010180.TitleID);
  return;
}
