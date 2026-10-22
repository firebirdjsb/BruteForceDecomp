/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A24BDB02B1F060D418F44766854F00BE1EF37F23AE1BDE6FAC239DCC98B4F3F2
 * Entry: 0x002f37d0, Ghidra index: 10837, label: GetFileSizeEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__GetFileSizeEx(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_44 [40];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_c [8];
  
  iVar1 = NtQueryInformationFile(param_1,local_c,local_44,0x38,0x22);
  if (-1 < iVar1) {
    *param_2 = local_1c;
    param_2[1] = local_18;
  }
  else {
    XapiSetLastNTError(iVar1);
  }
  return -1 < iVar1;
}
